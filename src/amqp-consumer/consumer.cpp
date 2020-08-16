
#include <ev.h>
#include <amqpcpp.h>
#include <amqpcpp/libev.h>

int main()
{
    // access to the event loop
    auto *loop = EV_DEFAULT;

    // handler for libev (so we don't have to implement AMQP::TcpHandler!)
    AMQP::LibEvHandler handler(loop);

    // make a connection
    AMQP::TcpConnection connection(&handler, AMQP::Address("amqp://localhost/"));

    // we need a channel too
    AMQP::TcpChannel channel(&connection);

    // create a temporary queue
    channel.declareQueue(AMQP::exclusive).onSuccess([&connection](const std::string &name, uint32_t messagecount, uint32_t consumercount) {

        // report the name of the temporary queue
        std::cout << "declared queue " << name << std::endl;

        // now we can close the connection
        connection.close();
    });

    // run the loop
    ev_run(loop, 0);

    // done
    return 0;
}


// create an instance of your own connection handler
MyConnectionHandler myHandler;

// create a AMQP connection object
AMQP::Connection connection(&myHandler, AMQP::Login("guest","guest"), "/");

// and create a channel
AMQP::Channel channel(&connection);

// use the channel object to call the AMQP method you like
channel.declareExchange("my-exchange", AMQP::fanout);
channel.declareQueue("my-queue");
channel.bindQueue("my-exchange", "my-queue", "my-routing-key");


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
    AMQP::TcpConnection connection(&handler, AMQP::Address("amqp://localhost:32777"));

    // we need a channel too
    AMQP::TcpChannel channel(&connection);
    
    // create a queue    
    channel.declareExchange("my-exchange", AMQP::topic);
    channel.declareQueue("my-queue");
    channel.bindQueue("my-exchange", "my-queue", "my-routing-key");

    // run the loop
    ev_run(loop, 0);

    // done
    return 0;
}
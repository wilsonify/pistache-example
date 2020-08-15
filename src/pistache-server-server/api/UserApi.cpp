/**
* Swagger Petstore
* This is a sample server Petstore server.  You can find out more about     Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).      For this sample, you can use the api key `special-key` to test the authorization     filters.
*
* The version of the OpenAPI document: 1.0.0
* Contact: apiteam@swagger.io
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

#include "UserApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

UserApi::UserApi(std::shared_ptr<Pistache::Rest::Router> rtr) { 
    router = rtr;
}

void UserApi::init() {
    setupRoutes();
}

void UserApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Post(*router, base + "/user", Routes::bind(&UserApi::create_user_handler, this));
    Routes::Post(*router, base + "/user/createWithArray", Routes::bind(&UserApi::create_users_with_array_input_handler, this));
    Routes::Post(*router, base + "/user/createWithList", Routes::bind(&UserApi::create_users_with_list_input_handler, this));
    Routes::Delete(*router, base + "/user/:username", Routes::bind(&UserApi::delete_user_handler, this));
    Routes::Get(*router, base + "/user/:username", Routes::bind(&UserApi::get_user_by_name_handler, this));
    Routes::Get(*router, base + "/user/login", Routes::bind(&UserApi::login_user_handler, this));
    Routes::Get(*router, base + "/user/logout", Routes::bind(&UserApi::logout_user_handler, this));
    Routes::Put(*router, base + "/user/:username", Routes::bind(&UserApi::update_user_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&UserApi::user_api_default_handler, this));
}

void UserApi::create_user_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the body param
    
    User body;
    
    try {
      nlohmann::json::parse(request.body()).get_to(body);
      this->create_user(body, response);
    } catch (nlohmann::detail::exception &e) {
        //send a 400 error
        response.send(Pistache::Http::Code::Bad_Request, e.what());
        return;
    } catch (std::exception &e) {
        //send a 500 error
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
        return;
    }

}
void UserApi::create_users_with_array_input_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the body param
    std::vector<User> body;
    
    try {
      nlohmann::json::parse(request.body()).get_to(body);
      this->create_users_with_array_input(body, response);
    } catch (nlohmann::detail::exception &e) {
        //send a 400 error
        response.send(Pistache::Http::Code::Bad_Request, e.what());
        return;
    } catch (std::exception &e) {
        //send a 500 error
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
        return;
    }

}
void UserApi::create_users_with_list_input_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the body param
    std::vector<User> body;
    
    try {
      nlohmann::json::parse(request.body()).get_to(body);
      this->create_users_with_list_input(body, response);
    } catch (nlohmann::detail::exception &e) {
        //send a 400 error
        response.send(Pistache::Http::Code::Bad_Request, e.what());
        return;
    } catch (std::exception &e) {
        //send a 500 error
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
        return;
    }

}
void UserApi::delete_user_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto username = request.param(":username").as<std::string>();
    
    try {
      this->delete_user(username, response);
    } catch (nlohmann::detail::exception &e) {
        //send a 400 error
        response.send(Pistache::Http::Code::Bad_Request, e.what());
        return;
    } catch (std::exception &e) {
        //send a 500 error
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
        return;
    }

}
void UserApi::get_user_by_name_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto username = request.param(":username").as<std::string>();
    
    try {
      this->get_user_by_name(username, response);
    } catch (nlohmann::detail::exception &e) {
        //send a 400 error
        response.send(Pistache::Http::Code::Bad_Request, e.what());
        return;
    } catch (std::exception &e) {
        //send a 500 error
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
        return;
    }

}
void UserApi::login_user_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the query params
    auto usernameQuery = request.query().get("username");
    Pistache::Optional<std::string> username;
    if(!usernameQuery.isEmpty()){
        std::string value;
        if(fromStringValue(usernameQuery.get(), value)){
            username = Pistache::Some(value);
        }
    }
    auto passwordQuery = request.query().get("password");
    Pistache::Optional<std::string> password;
    if(!passwordQuery.isEmpty()){
        std::string value;
        if(fromStringValue(passwordQuery.get(), value)){
            password = Pistache::Some(value);
        }
    }
    
    try {
      this->login_user(username, password, response);
    } catch (nlohmann::detail::exception &e) {
        //send a 400 error
        response.send(Pistache::Http::Code::Bad_Request, e.what());
        return;
    } catch (std::exception &e) {
        //send a 500 error
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
        return;
    }

}
void UserApi::logout_user_handler(const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {

    try {
      this->logout_user(response);
    } catch (nlohmann::detail::exception &e) {
        //send a 400 error
        response.send(Pistache::Http::Code::Bad_Request, e.what());
        return;
    } catch (std::exception &e) {
        //send a 500 error
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
        return;
    }

}
void UserApi::update_user_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto username = request.param(":username").as<std::string>();
    
    // Getting the body param
    
    User body;
    
    try {
      nlohmann::json::parse(request.body()).get_to(body);
      this->update_user(username, body, response);
    } catch (nlohmann::detail::exception &e) {
        //send a 400 error
        response.send(Pistache::Http::Code::Bad_Request, e.what());
        return;
    } catch (std::exception &e) {
        //send a 500 error
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
        return;
    }

}

void UserApi::user_api_default_handler(const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}
}
}
}


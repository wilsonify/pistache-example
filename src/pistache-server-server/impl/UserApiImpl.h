/**
* Swagger Petstore
* This is a sample server Petstore server.  You can find out more about     Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).      For this sample, you can use the api key `special-key` to test the authorization     filters.
*
* OpenAPI spec version: 1.0.0
* Contact: apiteam@swagger.io
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/

/*
* UserApiImpl.h
*
* 
*/

#ifndef USER_API_IMPL_H_
#define USER_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <UserApi.h>

#include "User.h"
#include <string>
#include <vector>

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

class UserApiImpl : public io::swagger::server::api::UserApi {
public:
    UserApiImpl(Pistache::Address addr);
    ~UserApiImpl() { };

    void create_user(const User &body, Pistache::Http::ResponseWriter &response);
    void create_users_with_array_input(const User &body, Pistache::Http::ResponseWriter &response);
    void create_users_with_list_input(const User &body, Pistache::Http::ResponseWriter &response);
    void delete_user(const std::string &username, Pistache::Http::ResponseWriter &response);
    void get_user_by_name(const std::string &username, Pistache::Http::ResponseWriter &response);
    void login_user(const Optional<std::string> &username, const Optional<std::string> &password, Pistache::Http::ResponseWriter &response);
    void logout_user(Pistache::Http::ResponseWriter &response);
    void update_user(const std::string &username, const User &body, Pistache::Http::ResponseWriter &response);

};

}
}
}
}



#endif
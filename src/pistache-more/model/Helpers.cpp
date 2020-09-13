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
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace helpers {


std::string toStringValue(const std::string &value){
    return std::string(value);
}

std::string toStringValue(const int32_t &value){
    return std::to_string(value);
}

std::string toStringValue(const int64_t &value){
    return std::to_string(value);
}

std::string toStringValue(const bool &value){
    return value?std::string("true"):std::string("false");
}

std::string toStringValue(const float &value){
    return std::to_string(value);
}

std::string toStringValue(const double &value){
    return std::to_string(value);
}

bool fromStringValue(const std::string &inStr, std::string &value){
    value = std::string(inStr);
    return true;
}

bool fromStringValue(const std::string &inStr, int32_t &value){
    try {
        value = std::stoi( inStr );
    }
    catch (const std::invalid_argument&) {
        return false;
    }
    return true;
}

bool fromStringValue(const std::string &inStr, int64_t &value){
    try {
        value = std::stol( inStr );
    }
    catch (const std::invalid_argument&) {
        return false;
    }
    return true;
}

bool fromStringValue(const std::string &inStr, bool &value){
    bool result = true;
    inStr == "true"?value = true: inStr == "false"?value = false: result = false;
    return result;
}

bool fromStringValue(const std::string &inStr, float &value){
    try {
        value = std::stof( inStr );
    }
    catch (const std::invalid_argument&) {
        return false;
    }
    return true;
}

bool fromStringValue(const std::string &inStr, double &value){
    try {
        value = std::stod( inStr );
    }
    catch (const std::invalid_argument&) {
        return false;
    }
    return true;
}

}
}
}
}

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


#include "Sqrt_input.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Sqrt_input::Sqrt_input()
{
    m_x = 0.0;
    m_xIsSet = false;
    
}

Sqrt_input::~Sqrt_input()
{
}

void Sqrt_input::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const Sqrt_input& o)
{
    j = nlohmann::json();
    if(o.XIsSet())
        j["x"] = o.m_x;
}

void from_json(const nlohmann::json& j, Sqrt_input& o)
{
    if(j.find("x") != j.end())
    {
        j.at("x").get_to(o.m_x);
        o.m_xIsSet = true;
    } 
}

double Sqrt_input::getX() const
{
    return m_x;
}
void Sqrt_input::setX(double const value)
{
    m_x = value;
    m_xIsSet = true;
}
bool Sqrt_input::XIsSet() const
{
    return m_xIsSet;
}
void Sqrt_input::unsetx()
{
    m_xIsSet = false;
}

}
}
}
}


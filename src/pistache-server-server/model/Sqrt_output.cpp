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


#include "Sqrt_output.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Sqrt_output::Sqrt_output()
{
    m_x = 0.0;
    m_xIsSet = false;
    m_Result = 0.0;
    m_ResultIsSet = false;
    
}

Sqrt_output::~Sqrt_output()
{
}

void Sqrt_output::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const Sqrt_output& o)
{
    j = nlohmann::json();
    if(o.XIsSet())
        j["x"] = o.m_x;
    if(o.resultIsSet())
        j["result"] = o.m_Result;
}

void from_json(const nlohmann::json& j, Sqrt_output& o)
{
    if(j.find("x") != j.end())
    {
        j.at("x").get_to(o.m_x);
        o.m_xIsSet = true;
    } 
    if(j.find("result") != j.end())
    {
        j.at("result").get_to(o.m_Result);
        o.m_ResultIsSet = true;
    } 
}

double Sqrt_output::getX() const
{
    return m_x;
}
void Sqrt_output::setX(double const value)
{
    m_x = value;
    m_xIsSet = true;
}
bool Sqrt_output::XIsSet() const
{
    return m_xIsSet;
}
void Sqrt_output::unsetx()
{
    m_xIsSet = false;
}
double Sqrt_output::getResult() const
{
    return m_Result;
}
void Sqrt_output::setResult(double const value)
{
    m_Result = value;
    m_ResultIsSet = true;
}
bool Sqrt_output::resultIsSet() const
{
    return m_ResultIsSet;
}
void Sqrt_output::unsetResult()
{
    m_ResultIsSet = false;
}

}
}
}
}


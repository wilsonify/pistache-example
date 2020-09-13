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


#include "Category.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Category::Category()
{
    m_Id = 0L;
    m_IdIsSet = false;
    m_Name = "";
    m_NameIsSet = false;
    
}

Category::~Category()
{
}

void Category::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const Category& o)
{
    j = nlohmann::json();
    if(o.idIsSet())
        j["id"] = o.m_Id;
    if(o.nameIsSet())
        j["name"] = o.m_Name;
}

void from_json(const nlohmann::json& j, Category& o)
{
    if(j.find("id") != j.end())
    {
        j.at("id").get_to(o.m_Id);
        o.m_IdIsSet = true;
    } 
    if(j.find("name") != j.end())
    {
        j.at("name").get_to(o.m_Name);
        o.m_NameIsSet = true;
    } 
}

int64_t Category::getId() const
{
    return m_Id;
}
void Category::setId(int64_t const value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool Category::idIsSet() const
{
    return m_IdIsSet;
}
void Category::unsetId()
{
    m_IdIsSet = false;
}
std::string Category::getName() const
{
    return m_Name;
}
void Category::setName(std::string const& value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool Category::nameIsSet() const
{
    return m_NameIsSet;
}
void Category::unsetName()
{
    m_NameIsSet = false;
}

}
}
}
}


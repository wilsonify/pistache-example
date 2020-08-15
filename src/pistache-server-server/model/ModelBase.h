/**
* Swagger Petstore
* This is a sample server Petstore server.  You can find out more about     Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).      For this sample, you can use the api key `special-key` to test the authorization     filters.
*
* OpenAPI spec version: 1.0.0
* Contact: apiteam@swagger.io
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ModelBase.h
 *
 * This is the base class for all model classes
 */

#ifndef ModelBase_H_
#define ModelBase_H_


#include <nlohmann/json.hpp>
#include <ctime>
#include <string>
#include <vector>
#include <map>

namespace org {
namespace openapitools {
namespace server {
namespace model {

class  ModelBase
{
public:
    ModelBase();
    virtual ~ModelBase();

    virtual void validate() = 0;

    virtual nlohmann::json toJson() const = 0;
    virtual void fromJson(const nlohmann::json& json) = 0;

    static std::string toJson(  std::string const& value );
    static std::string toJson(  std::time_t const& value );
    static int32_t toJson( int32_t const value );
    static int64_t toJson( int64_t const value );
    static double toJson( double const value );
    static bool toJson( bool const value );
    static nlohmann::json toJson(ModelBase const& content ); 
};

class ArrayHelper {
private:
    template<typename T, typename std::enable_if<!std::is_base_of<ModelBase, T>::value>::value>
    static void itemFromJson(T& item, const nlohmann::json& json){
        item = json;
    }
    static void itemFromJson(ModelBase& item, const nlohmann::json& json){
        item.fromJson(json);
    }
    template<typename T, typename std::enable_if<!std::is_base_of<ModelBase, T>::value>::value>
    static nlohmann::json itemtoJson(const T& item){
        return item;
    }
    static nlohmann::json itemtoJson(const ModelBase& item){
        return item.toJson();
    }
public:
    template<typename T>
    static std::vector<T> fromJson(const nlohmann::json& json) {
        std::vector<T> val;
        if (!json.empty()) {
            for (const auto& item : json.items()) {
                T entry;
                itemFromJson(entry, item.value());
                val.push_back(entry);
            }
        }
        return val;
    }
    template<typename T>
    static nlohmann::json toJson(const std::vector<T>& val) {
        nlohmann::json json;
        for(const auto& item : val){
            json.push_back(itemtoJson(item));
        }
        return json;
    }
};

class MapHelper {
private:
    template<typename T, typename std::enable_if<!std::is_base_of<ModelBase, T>::value>::value>
    static void itemFromJson(T &item, const nlohmann::json& json){
        item = json;
    }
    static void itemFromJson(ModelBase &item, const nlohmann::json& json){
        item.fromJson(json);
    }
    template<typename T, typename std::enable_if<!std::is_base_of<ModelBase, T>::value>::value>
    static nlohmann::json itemtoJson(const T& item){
        return item;
    }
    static nlohmann::json itemtoJson(const ModelBase& item){
        return item.toJson();
    }

public:
    template<typename T>
    static std::map<std::string, T> fromJson(const nlohmann::json& json) {
        std::map<std::string, T> val;
        if (!json.empty()) {
            for (const auto& item : json.items()) {
                T entry;
                itemfromJson(entry, item.value());
                val.insert(val.end(),
                        std::pair<std::string, T>(item.key(), entry));
            }
        }
        return val;
    }
    template<typename T>
    static nlohmann::json toJson(const std::map<std::string, T>& val) {
        nlohmann::json json;
        for (const auto& item : val) {
          nlohmann::json jitem = itemtoJson(item.second);
          json[item.first] = jitem;
        }
        return json;
    }
};

}
}
}
}

#endif /* ModelBase_H_ */

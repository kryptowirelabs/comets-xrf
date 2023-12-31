/**
* NRF NFManagement Service
* NRF NFManagement Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
*
* The version of the OpenAPI document: 1.2.0-alpha.5
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "PlmnOauth2.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

PlmnOauth2::PlmnOauth2()
{
    m_Oauth2RequiredPlmnIdListIsSet = false;
    m_Oauth2NotRequiredPlmnIdListIsSet = false;
    
}

void PlmnOauth2::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool PlmnOauth2::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool PlmnOauth2::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "PlmnOauth2" : pathPrefix;

         
    if (oauth2RequiredPlmnIdListIsSet())
    {
        const std::vector<PlmnId>& value = m_Oauth2RequiredPlmnIdList;
        const std::string currentValuePath = _pathPrefix + ".oauth2RequiredPlmnIdList";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const PlmnId& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".oauth2RequiredPlmnIdList") && success;
 
                i++;
            }
        }

    }
         
    if (oauth2NotRequiredPlmnIdListIsSet())
    {
        const std::vector<PlmnId>& value = m_Oauth2NotRequiredPlmnIdList;
        const std::string currentValuePath = _pathPrefix + ".oauth2NotRequiredPlmnIdList";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const PlmnId& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".oauth2NotRequiredPlmnIdList") && success;
 
                i++;
            }
        }

    }
    
    return success;
}

bool PlmnOauth2::operator==(const PlmnOauth2& rhs) const
{
    return
    
    
    
    ((!oauth2RequiredPlmnIdListIsSet() && !rhs.oauth2RequiredPlmnIdListIsSet()) || (oauth2RequiredPlmnIdListIsSet() && rhs.oauth2RequiredPlmnIdListIsSet() && getOauth2RequiredPlmnIdList() == rhs.getOauth2RequiredPlmnIdList())) &&
    
    
    ((!oauth2NotRequiredPlmnIdListIsSet() && !rhs.oauth2NotRequiredPlmnIdListIsSet()) || (oauth2NotRequiredPlmnIdListIsSet() && rhs.oauth2NotRequiredPlmnIdListIsSet() && getOauth2NotRequiredPlmnIdList() == rhs.getOauth2NotRequiredPlmnIdList()))
    
    ;
}

bool PlmnOauth2::operator!=(const PlmnOauth2& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const PlmnOauth2& o)
{
    j = nlohmann::json();
    if(o.oauth2RequiredPlmnIdListIsSet() || !o.m_Oauth2RequiredPlmnIdList.empty())
        j["oauth2RequiredPlmnIdList"] = o.m_Oauth2RequiredPlmnIdList;
    if(o.oauth2NotRequiredPlmnIdListIsSet() || !o.m_Oauth2NotRequiredPlmnIdList.empty())
        j["oauth2NotRequiredPlmnIdList"] = o.m_Oauth2NotRequiredPlmnIdList;
    
}

void from_json(const nlohmann::json& j, PlmnOauth2& o)
{
    if(j.find("oauth2RequiredPlmnIdList") != j.end())
    {
        j.at("oauth2RequiredPlmnIdList").get_to(o.m_Oauth2RequiredPlmnIdList);
        o.m_Oauth2RequiredPlmnIdListIsSet = true;
    } 
    if(j.find("oauth2NotRequiredPlmnIdList") != j.end())
    {
        j.at("oauth2NotRequiredPlmnIdList").get_to(o.m_Oauth2NotRequiredPlmnIdList);
        o.m_Oauth2NotRequiredPlmnIdListIsSet = true;
    } 
    
}

std::vector<PlmnId> PlmnOauth2::getOauth2RequiredPlmnIdList() const
{
    return m_Oauth2RequiredPlmnIdList;
}
void PlmnOauth2::setOauth2RequiredPlmnIdList(std::vector<PlmnId> const& value)
{
    m_Oauth2RequiredPlmnIdList = value;
    m_Oauth2RequiredPlmnIdListIsSet = true;
}
bool PlmnOauth2::oauth2RequiredPlmnIdListIsSet() const
{
    return m_Oauth2RequiredPlmnIdListIsSet;
}
void PlmnOauth2::unsetOauth2RequiredPlmnIdList()
{
    m_Oauth2RequiredPlmnIdListIsSet = false;
}
std::vector<PlmnId> PlmnOauth2::getOauth2NotRequiredPlmnIdList() const
{
    return m_Oauth2NotRequiredPlmnIdList;
}
void PlmnOauth2::setOauth2NotRequiredPlmnIdList(std::vector<PlmnId> const& value)
{
    m_Oauth2NotRequiredPlmnIdList = value;
    m_Oauth2NotRequiredPlmnIdListIsSet = true;
}
bool PlmnOauth2::oauth2NotRequiredPlmnIdListIsSet() const
{
    return m_Oauth2NotRequiredPlmnIdListIsSet;
}
void PlmnOauth2::unsetOauth2NotRequiredPlmnIdList()
{
    m_Oauth2NotRequiredPlmnIdListIsSet = false;
}


} // namespace org::openapitools::server::model


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


#include "SeppInfo.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

SeppInfo::SeppInfo()
{
    m_SeppPortsIsSet = false;
    m_RemotePlmnListIsSet = false;
    
}

void SeppInfo::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool SeppInfo::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool SeppInfo::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "SeppInfo" : pathPrefix;

         
    if (seppPortsIsSet())
    {
        const std::map<std::string, int32_t>& value = m_SeppPorts;
        const std::string currentValuePath = _pathPrefix + ".seppPorts";
                
        

    }
         
    if (remotePlmnListIsSet())
    {
        const std::vector<PlmnId>& value = m_RemotePlmnList;
        const std::string currentValuePath = _pathPrefix + ".remotePlmnList";
                
        
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
                        
        success = value.validate(msg, currentValuePath + ".remotePlmnList") && success;
 
                i++;
            }
        }

    }
    
    return success;
}

bool SeppInfo::operator==(const SeppInfo& rhs) const
{
    return
    
    
    
    ((!seppPortsIsSet() && !rhs.seppPortsIsSet()) || (seppPortsIsSet() && rhs.seppPortsIsSet() && getSeppPorts() == rhs.getSeppPorts())) &&
    
    
    ((!remotePlmnListIsSet() && !rhs.remotePlmnListIsSet()) || (remotePlmnListIsSet() && rhs.remotePlmnListIsSet() && getRemotePlmnList() == rhs.getRemotePlmnList()))
    
    ;
}

bool SeppInfo::operator!=(const SeppInfo& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SeppInfo& o)
{
    j = nlohmann::json();
    if(o.seppPortsIsSet() || !o.m_SeppPorts.empty())
        j["seppPorts"] = o.m_SeppPorts;
    if(o.remotePlmnListIsSet() || !o.m_RemotePlmnList.empty())
        j["remotePlmnList"] = o.m_RemotePlmnList;
    
}

void from_json(const nlohmann::json& j, SeppInfo& o)
{
    if(j.find("seppPorts") != j.end())
    {
        j.at("seppPorts").get_to(o.m_SeppPorts);
        o.m_SeppPortsIsSet = true;
    } 
    if(j.find("remotePlmnList") != j.end())
    {
        j.at("remotePlmnList").get_to(o.m_RemotePlmnList);
        o.m_RemotePlmnListIsSet = true;
    } 
    
}

std::map<std::string, int32_t> SeppInfo::getSeppPorts() const
{
    return m_SeppPorts;
}
void SeppInfo::setSeppPorts(std::map<std::string, int32_t> const value)
{
    m_SeppPorts = value;
    m_SeppPortsIsSet = true;
}
bool SeppInfo::seppPortsIsSet() const
{
    return m_SeppPortsIsSet;
}
void SeppInfo::unsetSeppPorts()
{
    m_SeppPortsIsSet = false;
}
std::vector<PlmnId> SeppInfo::getRemotePlmnList() const
{
    return m_RemotePlmnList;
}
void SeppInfo::setRemotePlmnList(std::vector<PlmnId> const& value)
{
    m_RemotePlmnList = value;
    m_RemotePlmnListIsSet = true;
}
bool SeppInfo::remotePlmnListIsSet() const
{
    return m_RemotePlmnListIsSet;
}
void SeppInfo::unsetRemotePlmnList()
{
    m_RemotePlmnListIsSet = false;
}


} // namespace org::openapitools::server::model


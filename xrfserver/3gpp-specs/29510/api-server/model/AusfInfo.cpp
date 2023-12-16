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


#include "AusfInfo.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AusfInfo::AusfInfo()
{
    m_GroupId = "";
    m_GroupIdIsSet = false;
    m_SupiRangesIsSet = false;
    m_RoutingIndicatorsIsSet = false;
    m_SuciInfosIsSet = false;
    
}

void AusfInfo::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AusfInfo::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AusfInfo::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AusfInfo" : pathPrefix;

             
    if (supiRangesIsSet())
    {
        const std::vector<SupiRange>& value = m_SupiRanges;
        const std::string currentValuePath = _pathPrefix + ".supiRanges";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const SupiRange& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".supiRanges") && success;
 
                i++;
            }
        }

    }
         
    if (routingIndicatorsIsSet())
    {
        const std::vector<std::string>& value = m_RoutingIndicators;
        const std::string currentValuePath = _pathPrefix + ".routingIndicators";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
         
    if (suciInfosIsSet())
    {
        const std::vector<SuciInfo>& value = m_SuciInfos;
        const std::string currentValuePath = _pathPrefix + ".suciInfos";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const SuciInfo& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".suciInfos") && success;
 
                i++;
            }
        }

    }
    
    return success;
}

bool AusfInfo::operator==(const AusfInfo& rhs) const
{
    return
    
    
    
    ((!groupIdIsSet() && !rhs.groupIdIsSet()) || (groupIdIsSet() && rhs.groupIdIsSet() && getGroupId() == rhs.getGroupId())) &&
    
    
    ((!supiRangesIsSet() && !rhs.supiRangesIsSet()) || (supiRangesIsSet() && rhs.supiRangesIsSet() && getSupiRanges() == rhs.getSupiRanges())) &&
    
    
    ((!routingIndicatorsIsSet() && !rhs.routingIndicatorsIsSet()) || (routingIndicatorsIsSet() && rhs.routingIndicatorsIsSet() && getRoutingIndicators() == rhs.getRoutingIndicators())) &&
    
    
    ((!suciInfosIsSet() && !rhs.suciInfosIsSet()) || (suciInfosIsSet() && rhs.suciInfosIsSet() && getSuciInfos() == rhs.getSuciInfos()))
    
    ;
}

bool AusfInfo::operator!=(const AusfInfo& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AusfInfo& o)
{
    j = nlohmann::json();
    if(o.groupIdIsSet())
        j["groupId"] = o.m_GroupId;
    if(o.supiRangesIsSet() || !o.m_SupiRanges.empty())
        j["supiRanges"] = o.m_SupiRanges;
    if(o.routingIndicatorsIsSet() || !o.m_RoutingIndicators.empty())
        j["routingIndicators"] = o.m_RoutingIndicators;
    if(o.suciInfosIsSet() || !o.m_SuciInfos.empty())
        j["suciInfos"] = o.m_SuciInfos;
    
}

void from_json(const nlohmann::json& j, AusfInfo& o)
{
    if(j.find("groupId") != j.end())
    {
        j.at("groupId").get_to(o.m_GroupId);
        o.m_GroupIdIsSet = true;
    } 
    if(j.find("supiRanges") != j.end())
    {
        j.at("supiRanges").get_to(o.m_SupiRanges);
        o.m_SupiRangesIsSet = true;
    } 
    if(j.find("routingIndicators") != j.end())
    {
        j.at("routingIndicators").get_to(o.m_RoutingIndicators);
        o.m_RoutingIndicatorsIsSet = true;
    } 
    if(j.find("suciInfos") != j.end())
    {
        j.at("suciInfos").get_to(o.m_SuciInfos);
        o.m_SuciInfosIsSet = true;
    } 
    
}

std::string AusfInfo::getGroupId() const
{
    return m_GroupId;
}
void AusfInfo::setGroupId(std::string const& value)
{
    m_GroupId = value;
    m_GroupIdIsSet = true;
}
bool AusfInfo::groupIdIsSet() const
{
    return m_GroupIdIsSet;
}
void AusfInfo::unsetGroupId()
{
    m_GroupIdIsSet = false;
}
std::vector<SupiRange> AusfInfo::getSupiRanges() const
{
    return m_SupiRanges;
}
void AusfInfo::setSupiRanges(std::vector<SupiRange> const& value)
{
    m_SupiRanges = value;
    m_SupiRangesIsSet = true;
}
bool AusfInfo::supiRangesIsSet() const
{
    return m_SupiRangesIsSet;
}
void AusfInfo::unsetSupiRanges()
{
    m_SupiRangesIsSet = false;
}
std::vector<std::string> AusfInfo::getRoutingIndicators() const
{
    return m_RoutingIndicators;
}
void AusfInfo::setRoutingIndicators(std::vector<std::string> const& value)
{
    m_RoutingIndicators = value;
    m_RoutingIndicatorsIsSet = true;
}
bool AusfInfo::routingIndicatorsIsSet() const
{
    return m_RoutingIndicatorsIsSet;
}
void AusfInfo::unsetRoutingIndicators()
{
    m_RoutingIndicatorsIsSet = false;
}
std::vector<SuciInfo> AusfInfo::getSuciInfos() const
{
    return m_SuciInfos;
}
void AusfInfo::setSuciInfos(std::vector<SuciInfo> const& value)
{
    m_SuciInfos = value;
    m_SuciInfosIsSet = true;
}
bool AusfInfo::suciInfosIsSet() const
{
    return m_SuciInfosIsSet;
}
void AusfInfo::unsetSuciInfos()
{
    m_SuciInfosIsSet = false;
}


} // namespace org::openapitools::server::model


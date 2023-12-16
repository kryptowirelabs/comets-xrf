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


#include "UdsfInfo.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

UdsfInfo::UdsfInfo()
{
    m_GroupId = "";
    m_GroupIdIsSet = false;
    m_SupiRangesIsSet = false;
    m_StorageIdRangesIsSet = false;
    
}

void UdsfInfo::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool UdsfInfo::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool UdsfInfo::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "UdsfInfo" : pathPrefix;

             
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
         
    if (storageIdRangesIsSet())
    {
        const std::map<std::string, std::vector<IdentityRange>>& value = m_StorageIdRanges;
        const std::string currentValuePath = _pathPrefix + ".storageIdRanges";
                
        

    }
    
    return success;
}

bool UdsfInfo::operator==(const UdsfInfo& rhs) const
{
    return
    
    
    
    ((!groupIdIsSet() && !rhs.groupIdIsSet()) || (groupIdIsSet() && rhs.groupIdIsSet() && getGroupId() == rhs.getGroupId())) &&
    
    
    ((!supiRangesIsSet() && !rhs.supiRangesIsSet()) || (supiRangesIsSet() && rhs.supiRangesIsSet() && getSupiRanges() == rhs.getSupiRanges())) &&
    
    
    ((!storageIdRangesIsSet() && !rhs.storageIdRangesIsSet()) || (storageIdRangesIsSet() && rhs.storageIdRangesIsSet() && getStorageIdRanges() == rhs.getStorageIdRanges()))
    
    ;
}

bool UdsfInfo::operator!=(const UdsfInfo& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const UdsfInfo& o)
{
    j = nlohmann::json();
    if(o.groupIdIsSet())
        j["groupId"] = o.m_GroupId;
    if(o.supiRangesIsSet() || !o.m_SupiRanges.empty())
        j["supiRanges"] = o.m_SupiRanges;
    if(o.storageIdRangesIsSet() || !o.m_StorageIdRanges.empty())
        j["storageIdRanges"] = o.m_StorageIdRanges;
    
}

void from_json(const nlohmann::json& j, UdsfInfo& o)
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
    if(j.find("storageIdRanges") != j.end())
    {
        j.at("storageIdRanges").get_to(o.m_StorageIdRanges);
        o.m_StorageIdRangesIsSet = true;
    } 
    
}

std::string UdsfInfo::getGroupId() const
{
    return m_GroupId;
}
void UdsfInfo::setGroupId(std::string const& value)
{
    m_GroupId = value;
    m_GroupIdIsSet = true;
}
bool UdsfInfo::groupIdIsSet() const
{
    return m_GroupIdIsSet;
}
void UdsfInfo::unsetGroupId()
{
    m_GroupIdIsSet = false;
}
std::vector<SupiRange> UdsfInfo::getSupiRanges() const
{
    return m_SupiRanges;
}
void UdsfInfo::setSupiRanges(std::vector<SupiRange> const& value)
{
    m_SupiRanges = value;
    m_SupiRangesIsSet = true;
}
bool UdsfInfo::supiRangesIsSet() const
{
    return m_SupiRangesIsSet;
}
void UdsfInfo::unsetSupiRanges()
{
    m_SupiRangesIsSet = false;
}
std::map<std::string, std::vector<IdentityRange>> UdsfInfo::getStorageIdRanges() const
{
    return m_StorageIdRanges;
}
void UdsfInfo::setStorageIdRanges(std::map<std::string, std::vector<IdentityRange>> const& value)
{
    m_StorageIdRanges = value;
    m_StorageIdRangesIsSet = true;
}
bool UdsfInfo::storageIdRangesIsSet() const
{
    return m_StorageIdRangesIsSet;
}
void UdsfInfo::unsetStorageIdRanges()
{
    m_StorageIdRangesIsSet = false;
}


} // namespace org::openapitools::server::model


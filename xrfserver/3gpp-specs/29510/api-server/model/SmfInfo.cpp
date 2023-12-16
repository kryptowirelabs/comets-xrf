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


#include "SmfInfo.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

SmfInfo::SmfInfo()
{
    m_TaiListIsSet = false;
    m_TaiRangeListIsSet = false;
    m_PgwFqdn = "";
    m_PgwFqdnIsSet = false;
    m_PgwIpAddrListIsSet = false;
    m_AccessTypeIsSet = false;
    m_Priority = 0;
    m_PriorityIsSet = false;
    m_VsmfSupportInd = false;
    m_VsmfSupportIndIsSet = false;
    m_PgwFqdnListIsSet = false;
    
}

void SmfInfo::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool SmfInfo::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool SmfInfo::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "SmfInfo" : pathPrefix;

         
    
    /* SNssaiSmfInfoList */ {
        const std::vector<SnssaiSmfInfoItem>& value = m_SNssaiSmfInfoList;
        const std::string currentValuePath = _pathPrefix + ".sNssaiSmfInfoList";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const SnssaiSmfInfoItem& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".sNssaiSmfInfoList") && success;
 
                i++;
            }
        }

    }
         
    if (taiListIsSet())
    {
        const std::vector<Tai>& value = m_TaiList;
        const std::string currentValuePath = _pathPrefix + ".taiList";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const Tai& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".taiList") && success;
 
                i++;
            }
        }

    }
         
    if (taiRangeListIsSet())
    {
        const std::vector<TaiRange>& value = m_TaiRangeList;
        const std::string currentValuePath = _pathPrefix + ".taiRangeList";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const TaiRange& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".taiRangeList") && success;
 
                i++;
            }
        }

    }
             
    if (pgwIpAddrListIsSet())
    {
        const std::vector<IpAddr>& value = m_PgwIpAddrList;
        const std::string currentValuePath = _pathPrefix + ".pgwIpAddrList";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const IpAddr& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".pgwIpAddrList") && success;
 
                i++;
            }
        }

    }
         
    if (accessTypeIsSet())
    {
        const std::vector<AccessType>& value = m_AccessType;
        const std::string currentValuePath = _pathPrefix + ".accessType";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const AccessType& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath) && success;
        
        
 
                i++;
            }
        }

    }
         
    if (priorityIsSet())
    {
        const int32_t& value = m_Priority;
        const std::string currentValuePath = _pathPrefix + ".priority";
                
        
        if (value < 0)
        {
            success = false;
            msg << currentValuePath << ": must be greater than or equal to 0;";
        }
        if (value > 65535)
        {
            success = false;
            msg << currentValuePath << ": must be less than or equal to 65535;";
        }

    }
             
    if (pgwFqdnListIsSet())
    {
        const std::vector<std::string>& value = m_PgwFqdnList;
        const std::string currentValuePath = _pathPrefix + ".pgwFqdnList";
                
        
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
    
    return success;
}

bool SmfInfo::operator==(const SmfInfo& rhs) const
{
    return
    
    
    (getSNssaiSmfInfoList() == rhs.getSNssaiSmfInfoList())
     &&
    
    
    ((!taiListIsSet() && !rhs.taiListIsSet()) || (taiListIsSet() && rhs.taiListIsSet() && getTaiList() == rhs.getTaiList())) &&
    
    
    ((!taiRangeListIsSet() && !rhs.taiRangeListIsSet()) || (taiRangeListIsSet() && rhs.taiRangeListIsSet() && getTaiRangeList() == rhs.getTaiRangeList())) &&
    
    
    ((!pgwFqdnIsSet() && !rhs.pgwFqdnIsSet()) || (pgwFqdnIsSet() && rhs.pgwFqdnIsSet() && getPgwFqdn() == rhs.getPgwFqdn())) &&
    
    
    ((!pgwIpAddrListIsSet() && !rhs.pgwIpAddrListIsSet()) || (pgwIpAddrListIsSet() && rhs.pgwIpAddrListIsSet() && getPgwIpAddrList() == rhs.getPgwIpAddrList())) &&
    
    
    ((!accessTypeIsSet() && !rhs.accessTypeIsSet()) || (accessTypeIsSet() && rhs.accessTypeIsSet() && getAccessType() == rhs.getAccessType())) &&
    
    
    ((!priorityIsSet() && !rhs.priorityIsSet()) || (priorityIsSet() && rhs.priorityIsSet() && getPriority() == rhs.getPriority())) &&
    
    
    ((!vsmfSupportIndIsSet() && !rhs.vsmfSupportIndIsSet()) || (vsmfSupportIndIsSet() && rhs.vsmfSupportIndIsSet() && isVsmfSupportInd() == rhs.isVsmfSupportInd())) &&
    
    
    ((!pgwFqdnListIsSet() && !rhs.pgwFqdnListIsSet()) || (pgwFqdnListIsSet() && rhs.pgwFqdnListIsSet() && getPgwFqdnList() == rhs.getPgwFqdnList()))
    
    ;
}

bool SmfInfo::operator!=(const SmfInfo& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SmfInfo& o)
{
    j = nlohmann::json();
    j["sNssaiSmfInfoList"] = o.m_SNssaiSmfInfoList;
    if(o.taiListIsSet() || !o.m_TaiList.empty())
        j["taiList"] = o.m_TaiList;
    if(o.taiRangeListIsSet() || !o.m_TaiRangeList.empty())
        j["taiRangeList"] = o.m_TaiRangeList;
    if(o.pgwFqdnIsSet())
        j["pgwFqdn"] = o.m_PgwFqdn;
    if(o.pgwIpAddrListIsSet() || !o.m_PgwIpAddrList.empty())
        j["pgwIpAddrList"] = o.m_PgwIpAddrList;
    if(o.accessTypeIsSet() || !o.m_AccessType.empty())
        j["accessType"] = o.m_AccessType;
    if(o.priorityIsSet())
        j["priority"] = o.m_Priority;
    if(o.vsmfSupportIndIsSet())
        j["vsmfSupportInd"] = o.m_VsmfSupportInd;
    if(o.pgwFqdnListIsSet() || !o.m_PgwFqdnList.empty())
        j["pgwFqdnList"] = o.m_PgwFqdnList;
    
}

void from_json(const nlohmann::json& j, SmfInfo& o)
{
    j.at("sNssaiSmfInfoList").get_to(o.m_SNssaiSmfInfoList);
    if(j.find("taiList") != j.end())
    {
        j.at("taiList").get_to(o.m_TaiList);
        o.m_TaiListIsSet = true;
    } 
    if(j.find("taiRangeList") != j.end())
    {
        j.at("taiRangeList").get_to(o.m_TaiRangeList);
        o.m_TaiRangeListIsSet = true;
    } 
    if(j.find("pgwFqdn") != j.end())
    {
        j.at("pgwFqdn").get_to(o.m_PgwFqdn);
        o.m_PgwFqdnIsSet = true;
    } 
    if(j.find("pgwIpAddrList") != j.end())
    {
        j.at("pgwIpAddrList").get_to(o.m_PgwIpAddrList);
        o.m_PgwIpAddrListIsSet = true;
    } 
    if(j.find("accessType") != j.end())
    {
        j.at("accessType").get_to(o.m_AccessType);
        o.m_AccessTypeIsSet = true;
    } 
    if(j.find("priority") != j.end())
    {
        j.at("priority").get_to(o.m_Priority);
        o.m_PriorityIsSet = true;
    } 
    if(j.find("vsmfSupportInd") != j.end())
    {
        j.at("vsmfSupportInd").get_to(o.m_VsmfSupportInd);
        o.m_VsmfSupportIndIsSet = true;
    } 
    if(j.find("pgwFqdnList") != j.end())
    {
        j.at("pgwFqdnList").get_to(o.m_PgwFqdnList);
        o.m_PgwFqdnListIsSet = true;
    } 
    
}

std::vector<SnssaiSmfInfoItem> SmfInfo::getSNssaiSmfInfoList() const
{
    return m_SNssaiSmfInfoList;
}
void SmfInfo::setSNssaiSmfInfoList(std::vector<SnssaiSmfInfoItem> const& value)
{
    m_SNssaiSmfInfoList = value;
}
std::vector<Tai> SmfInfo::getTaiList() const
{
    return m_TaiList;
}
void SmfInfo::setTaiList(std::vector<Tai> const& value)
{
    m_TaiList = value;
    m_TaiListIsSet = true;
}
bool SmfInfo::taiListIsSet() const
{
    return m_TaiListIsSet;
}
void SmfInfo::unsetTaiList()
{
    m_TaiListIsSet = false;
}
std::vector<TaiRange> SmfInfo::getTaiRangeList() const
{
    return m_TaiRangeList;
}
void SmfInfo::setTaiRangeList(std::vector<TaiRange> const& value)
{
    m_TaiRangeList = value;
    m_TaiRangeListIsSet = true;
}
bool SmfInfo::taiRangeListIsSet() const
{
    return m_TaiRangeListIsSet;
}
void SmfInfo::unsetTaiRangeList()
{
    m_TaiRangeListIsSet = false;
}
std::string SmfInfo::getPgwFqdn() const
{
    return m_PgwFqdn;
}
void SmfInfo::setPgwFqdn(std::string const& value)
{
    m_PgwFqdn = value;
    m_PgwFqdnIsSet = true;
}
bool SmfInfo::pgwFqdnIsSet() const
{
    return m_PgwFqdnIsSet;
}
void SmfInfo::unsetPgwFqdn()
{
    m_PgwFqdnIsSet = false;
}
std::vector<IpAddr> SmfInfo::getPgwIpAddrList() const
{
    return m_PgwIpAddrList;
}
void SmfInfo::setPgwIpAddrList(std::vector<IpAddr> const& value)
{
    m_PgwIpAddrList = value;
    m_PgwIpAddrListIsSet = true;
}
bool SmfInfo::pgwIpAddrListIsSet() const
{
    return m_PgwIpAddrListIsSet;
}
void SmfInfo::unsetPgwIpAddrList()
{
    m_PgwIpAddrListIsSet = false;
}
std::vector<AccessType> SmfInfo::getAccessType() const
{
    return m_AccessType;
}
void SmfInfo::setAccessType(std::vector<AccessType> const& value)
{
    m_AccessType = value;
    m_AccessTypeIsSet = true;
}
bool SmfInfo::accessTypeIsSet() const
{
    return m_AccessTypeIsSet;
}
void SmfInfo::unsetAccessType()
{
    m_AccessTypeIsSet = false;
}
int32_t SmfInfo::getPriority() const
{
    return m_Priority;
}
void SmfInfo::setPriority(int32_t const value)
{
    m_Priority = value;
    m_PriorityIsSet = true;
}
bool SmfInfo::priorityIsSet() const
{
    return m_PriorityIsSet;
}
void SmfInfo::unsetPriority()
{
    m_PriorityIsSet = false;
}
bool SmfInfo::isVsmfSupportInd() const
{
    return m_VsmfSupportInd;
}
void SmfInfo::setVsmfSupportInd(bool const value)
{
    m_VsmfSupportInd = value;
    m_VsmfSupportIndIsSet = true;
}
bool SmfInfo::vsmfSupportIndIsSet() const
{
    return m_VsmfSupportIndIsSet;
}
void SmfInfo::unsetVsmfSupportInd()
{
    m_VsmfSupportIndIsSet = false;
}
std::vector<std::string> SmfInfo::getPgwFqdnList() const
{
    return m_PgwFqdnList;
}
void SmfInfo::setPgwFqdnList(std::vector<std::string> const& value)
{
    m_PgwFqdnList = value;
    m_PgwFqdnListIsSet = true;
}
bool SmfInfo::pgwFqdnListIsSet() const
{
    return m_PgwFqdnListIsSet;
}
void SmfInfo::unsetPgwFqdnList()
{
    m_PgwFqdnListIsSet = false;
}


} // namespace org::openapitools::server::model

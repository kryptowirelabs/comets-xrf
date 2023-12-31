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


#include "BsfInfo.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

BsfInfo::BsfInfo()
{
    m_DnnListIsSet = false;
    m_IpDomainListIsSet = false;
    m_Ipv4AddressRangesIsSet = false;
    m_Ipv6PrefixRangesIsSet = false;
    m_RxDiamHost = "";
    m_RxDiamHostIsSet = false;
    m_RxDiamRealm = "";
    m_RxDiamRealmIsSet = false;
    m_GroupId = "";
    m_GroupIdIsSet = false;
    m_SupiRangesIsSet = false;
    m_GpsiRangesIsSet = false;
    
}

void BsfInfo::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool BsfInfo::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool BsfInfo::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "BsfInfo" : pathPrefix;

         
    if (dnnListIsSet())
    {
        const std::vector<std::string>& value = m_DnnList;
        const std::string currentValuePath = _pathPrefix + ".dnnList";
                
        
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
         
    if (ipDomainListIsSet())
    {
        const std::vector<std::string>& value = m_IpDomainList;
        const std::string currentValuePath = _pathPrefix + ".ipDomainList";
                
        
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
         
    if (ipv4AddressRangesIsSet())
    {
        const std::vector<Ipv4AddressRange>& value = m_Ipv4AddressRanges;
        const std::string currentValuePath = _pathPrefix + ".ipv4AddressRanges";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const Ipv4AddressRange& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".ipv4AddressRanges") && success;
 
                i++;
            }
        }

    }
         
    if (ipv6PrefixRangesIsSet())
    {
        const std::vector<Ipv6PrefixRange>& value = m_Ipv6PrefixRanges;
        const std::string currentValuePath = _pathPrefix + ".ipv6PrefixRanges";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const Ipv6PrefixRange& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".ipv6PrefixRanges") && success;
 
                i++;
            }
        }

    }
         
    if (rxDiamHostIsSet())
    {
        const std::string& value = m_RxDiamHost;
        const std::string currentValuePath = _pathPrefix + ".rxDiamHost";
                
        

    }
         
    if (rxDiamRealmIsSet())
    {
        const std::string& value = m_RxDiamRealm;
        const std::string currentValuePath = _pathPrefix + ".rxDiamRealm";
                
        

    }
             
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
         
    if (gpsiRangesIsSet())
    {
        const std::vector<IdentityRange>& value = m_GpsiRanges;
        const std::string currentValuePath = _pathPrefix + ".gpsiRanges";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const IdentityRange& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".gpsiRanges") && success;
 
                i++;
            }
        }

    }
    
    return success;
}

bool BsfInfo::operator==(const BsfInfo& rhs) const
{
    return
    
    
    
    ((!dnnListIsSet() && !rhs.dnnListIsSet()) || (dnnListIsSet() && rhs.dnnListIsSet() && getDnnList() == rhs.getDnnList())) &&
    
    
    ((!ipDomainListIsSet() && !rhs.ipDomainListIsSet()) || (ipDomainListIsSet() && rhs.ipDomainListIsSet() && getIpDomainList() == rhs.getIpDomainList())) &&
    
    
    ((!ipv4AddressRangesIsSet() && !rhs.ipv4AddressRangesIsSet()) || (ipv4AddressRangesIsSet() && rhs.ipv4AddressRangesIsSet() && getIpv4AddressRanges() == rhs.getIpv4AddressRanges())) &&
    
    
    ((!ipv6PrefixRangesIsSet() && !rhs.ipv6PrefixRangesIsSet()) || (ipv6PrefixRangesIsSet() && rhs.ipv6PrefixRangesIsSet() && getIpv6PrefixRanges() == rhs.getIpv6PrefixRanges())) &&
    
    
    ((!rxDiamHostIsSet() && !rhs.rxDiamHostIsSet()) || (rxDiamHostIsSet() && rhs.rxDiamHostIsSet() && getRxDiamHost() == rhs.getRxDiamHost())) &&
    
    
    ((!rxDiamRealmIsSet() && !rhs.rxDiamRealmIsSet()) || (rxDiamRealmIsSet() && rhs.rxDiamRealmIsSet() && getRxDiamRealm() == rhs.getRxDiamRealm())) &&
    
    
    ((!groupIdIsSet() && !rhs.groupIdIsSet()) || (groupIdIsSet() && rhs.groupIdIsSet() && getGroupId() == rhs.getGroupId())) &&
    
    
    ((!supiRangesIsSet() && !rhs.supiRangesIsSet()) || (supiRangesIsSet() && rhs.supiRangesIsSet() && getSupiRanges() == rhs.getSupiRanges())) &&
    
    
    ((!gpsiRangesIsSet() && !rhs.gpsiRangesIsSet()) || (gpsiRangesIsSet() && rhs.gpsiRangesIsSet() && getGpsiRanges() == rhs.getGpsiRanges()))
    
    ;
}

bool BsfInfo::operator!=(const BsfInfo& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const BsfInfo& o)
{
    j = nlohmann::json();
    if(o.dnnListIsSet() || !o.m_DnnList.empty())
        j["dnnList"] = o.m_DnnList;
    if(o.ipDomainListIsSet() || !o.m_IpDomainList.empty())
        j["ipDomainList"] = o.m_IpDomainList;
    if(o.ipv4AddressRangesIsSet() || !o.m_Ipv4AddressRanges.empty())
        j["ipv4AddressRanges"] = o.m_Ipv4AddressRanges;
    if(o.ipv6PrefixRangesIsSet() || !o.m_Ipv6PrefixRanges.empty())
        j["ipv6PrefixRanges"] = o.m_Ipv6PrefixRanges;
    if(o.rxDiamHostIsSet())
        j["rxDiamHost"] = o.m_RxDiamHost;
    if(o.rxDiamRealmIsSet())
        j["rxDiamRealm"] = o.m_RxDiamRealm;
    if(o.groupIdIsSet())
        j["groupId"] = o.m_GroupId;
    if(o.supiRangesIsSet() || !o.m_SupiRanges.empty())
        j["supiRanges"] = o.m_SupiRanges;
    if(o.gpsiRangesIsSet() || !o.m_GpsiRanges.empty())
        j["gpsiRanges"] = o.m_GpsiRanges;
    
}

void from_json(const nlohmann::json& j, BsfInfo& o)
{
    if(j.find("dnnList") != j.end())
    {
        j.at("dnnList").get_to(o.m_DnnList);
        o.m_DnnListIsSet = true;
    } 
    if(j.find("ipDomainList") != j.end())
    {
        j.at("ipDomainList").get_to(o.m_IpDomainList);
        o.m_IpDomainListIsSet = true;
    } 
    if(j.find("ipv4AddressRanges") != j.end())
    {
        j.at("ipv4AddressRanges").get_to(o.m_Ipv4AddressRanges);
        o.m_Ipv4AddressRangesIsSet = true;
    } 
    if(j.find("ipv6PrefixRanges") != j.end())
    {
        j.at("ipv6PrefixRanges").get_to(o.m_Ipv6PrefixRanges);
        o.m_Ipv6PrefixRangesIsSet = true;
    } 
    if(j.find("rxDiamHost") != j.end())
    {
        j.at("rxDiamHost").get_to(o.m_RxDiamHost);
        o.m_RxDiamHostIsSet = true;
    } 
    if(j.find("rxDiamRealm") != j.end())
    {
        j.at("rxDiamRealm").get_to(o.m_RxDiamRealm);
        o.m_RxDiamRealmIsSet = true;
    } 
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
    if(j.find("gpsiRanges") != j.end())
    {
        j.at("gpsiRanges").get_to(o.m_GpsiRanges);
        o.m_GpsiRangesIsSet = true;
    } 
    
}

std::vector<std::string> BsfInfo::getDnnList() const
{
    return m_DnnList;
}
void BsfInfo::setDnnList(std::vector<std::string> const& value)
{
    m_DnnList = value;
    m_DnnListIsSet = true;
}
bool BsfInfo::dnnListIsSet() const
{
    return m_DnnListIsSet;
}
void BsfInfo::unsetDnnList()
{
    m_DnnListIsSet = false;
}
std::vector<std::string> BsfInfo::getIpDomainList() const
{
    return m_IpDomainList;
}
void BsfInfo::setIpDomainList(std::vector<std::string> const& value)
{
    m_IpDomainList = value;
    m_IpDomainListIsSet = true;
}
bool BsfInfo::ipDomainListIsSet() const
{
    return m_IpDomainListIsSet;
}
void BsfInfo::unsetIpDomainList()
{
    m_IpDomainListIsSet = false;
}
std::vector<Ipv4AddressRange> BsfInfo::getIpv4AddressRanges() const
{
    return m_Ipv4AddressRanges;
}
void BsfInfo::setIpv4AddressRanges(std::vector<Ipv4AddressRange> const& value)
{
    m_Ipv4AddressRanges = value;
    m_Ipv4AddressRangesIsSet = true;
}
bool BsfInfo::ipv4AddressRangesIsSet() const
{
    return m_Ipv4AddressRangesIsSet;
}
void BsfInfo::unsetIpv4AddressRanges()
{
    m_Ipv4AddressRangesIsSet = false;
}
std::vector<Ipv6PrefixRange> BsfInfo::getIpv6PrefixRanges() const
{
    return m_Ipv6PrefixRanges;
}
void BsfInfo::setIpv6PrefixRanges(std::vector<Ipv6PrefixRange> const& value)
{
    m_Ipv6PrefixRanges = value;
    m_Ipv6PrefixRangesIsSet = true;
}
bool BsfInfo::ipv6PrefixRangesIsSet() const
{
    return m_Ipv6PrefixRangesIsSet;
}
void BsfInfo::unsetIpv6PrefixRanges()
{
    m_Ipv6PrefixRangesIsSet = false;
}
std::string BsfInfo::getRxDiamHost() const
{
    return m_RxDiamHost;
}
void BsfInfo::setRxDiamHost(std::string const& value)
{
    m_RxDiamHost = value;
    m_RxDiamHostIsSet = true;
}
bool BsfInfo::rxDiamHostIsSet() const
{
    return m_RxDiamHostIsSet;
}
void BsfInfo::unsetRxDiamHost()
{
    m_RxDiamHostIsSet = false;
}
std::string BsfInfo::getRxDiamRealm() const
{
    return m_RxDiamRealm;
}
void BsfInfo::setRxDiamRealm(std::string const& value)
{
    m_RxDiamRealm = value;
    m_RxDiamRealmIsSet = true;
}
bool BsfInfo::rxDiamRealmIsSet() const
{
    return m_RxDiamRealmIsSet;
}
void BsfInfo::unsetRxDiamRealm()
{
    m_RxDiamRealmIsSet = false;
}
std::string BsfInfo::getGroupId() const
{
    return m_GroupId;
}
void BsfInfo::setGroupId(std::string const& value)
{
    m_GroupId = value;
    m_GroupIdIsSet = true;
}
bool BsfInfo::groupIdIsSet() const
{
    return m_GroupIdIsSet;
}
void BsfInfo::unsetGroupId()
{
    m_GroupIdIsSet = false;
}
std::vector<SupiRange> BsfInfo::getSupiRanges() const
{
    return m_SupiRanges;
}
void BsfInfo::setSupiRanges(std::vector<SupiRange> const& value)
{
    m_SupiRanges = value;
    m_SupiRangesIsSet = true;
}
bool BsfInfo::supiRangesIsSet() const
{
    return m_SupiRangesIsSet;
}
void BsfInfo::unsetSupiRanges()
{
    m_SupiRangesIsSet = false;
}
std::vector<IdentityRange> BsfInfo::getGpsiRanges() const
{
    return m_GpsiRanges;
}
void BsfInfo::setGpsiRanges(std::vector<IdentityRange> const& value)
{
    m_GpsiRanges = value;
    m_GpsiRangesIsSet = true;
}
bool BsfInfo::gpsiRangesIsSet() const
{
    return m_GpsiRangesIsSet;
}
void BsfInfo::unsetGpsiRanges()
{
    m_GpsiRangesIsSet = false;
}


} // namespace org::openapitools::server::model


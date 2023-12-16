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


#include "AmfInfo.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AmfInfo::AmfInfo()
{
    m_AmfSetId = "";
    m_AmfRegionId = "";
    m_TaiListIsSet = false;
    m_TaiRangeListIsSet = false;
    m_BackupInfoAmfFailureIsSet = false;
    m_BackupInfoAmfRemovalIsSet = false;
    m_N2InterfaceAmfInfoIsSet = false;
    
}

void AmfInfo::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AmfInfo::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AmfInfo::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AmfInfo" : pathPrefix;

         
    
    /* AmfSetId */ {
        const std::string& value = m_AmfSetId;
        const std::string currentValuePath = _pathPrefix + ".amfSetId";
                
        

    }
         
    
    /* AmfRegionId */ {
        const std::string& value = m_AmfRegionId;
        const std::string currentValuePath = _pathPrefix + ".amfRegionId";
                
        

    }
         
    
    /* GuamiList */ {
        const std::vector<Guami>& value = m_GuamiList;
        const std::string currentValuePath = _pathPrefix + ".guamiList";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const Guami& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".guamiList") && success;
 
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
         
    if (backupInfoAmfFailureIsSet())
    {
        const std::vector<Guami>& value = m_BackupInfoAmfFailure;
        const std::string currentValuePath = _pathPrefix + ".backupInfoAmfFailure";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const Guami& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".backupInfoAmfFailure") && success;
 
                i++;
            }
        }

    }
         
    if (backupInfoAmfRemovalIsSet())
    {
        const std::vector<Guami>& value = m_BackupInfoAmfRemoval;
        const std::string currentValuePath = _pathPrefix + ".backupInfoAmfRemoval";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const Guami& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".backupInfoAmfRemoval") && success;
 
                i++;
            }
        }

    }
        
    return success;
}

bool AmfInfo::operator==(const AmfInfo& rhs) const
{
    return
    
    
    (getAmfSetId() == rhs.getAmfSetId())
     &&
    
    (getAmfRegionId() == rhs.getAmfRegionId())
     &&
    
    (getGuamiList() == rhs.getGuamiList())
     &&
    
    
    ((!taiListIsSet() && !rhs.taiListIsSet()) || (taiListIsSet() && rhs.taiListIsSet() && getTaiList() == rhs.getTaiList())) &&
    
    
    ((!taiRangeListIsSet() && !rhs.taiRangeListIsSet()) || (taiRangeListIsSet() && rhs.taiRangeListIsSet() && getTaiRangeList() == rhs.getTaiRangeList())) &&
    
    
    ((!backupInfoAmfFailureIsSet() && !rhs.backupInfoAmfFailureIsSet()) || (backupInfoAmfFailureIsSet() && rhs.backupInfoAmfFailureIsSet() && getBackupInfoAmfFailure() == rhs.getBackupInfoAmfFailure())) &&
    
    
    ((!backupInfoAmfRemovalIsSet() && !rhs.backupInfoAmfRemovalIsSet()) || (backupInfoAmfRemovalIsSet() && rhs.backupInfoAmfRemovalIsSet() && getBackupInfoAmfRemoval() == rhs.getBackupInfoAmfRemoval())) &&
    
    
    ((!n2InterfaceAmfInfoIsSet() && !rhs.n2InterfaceAmfInfoIsSet()) || (n2InterfaceAmfInfoIsSet() && rhs.n2InterfaceAmfInfoIsSet() && getN2InterfaceAmfInfo() == rhs.getN2InterfaceAmfInfo()))
    
    ;
}

bool AmfInfo::operator!=(const AmfInfo& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AmfInfo& o)
{
    j = nlohmann::json();
    j["amfSetId"] = o.m_AmfSetId;
    j["amfRegionId"] = o.m_AmfRegionId;
    j["guamiList"] = o.m_GuamiList;
    if(o.taiListIsSet() || !o.m_TaiList.empty())
        j["taiList"] = o.m_TaiList;
    if(o.taiRangeListIsSet() || !o.m_TaiRangeList.empty())
        j["taiRangeList"] = o.m_TaiRangeList;
    if(o.backupInfoAmfFailureIsSet() || !o.m_BackupInfoAmfFailure.empty())
        j["backupInfoAmfFailure"] = o.m_BackupInfoAmfFailure;
    if(o.backupInfoAmfRemovalIsSet() || !o.m_BackupInfoAmfRemoval.empty())
        j["backupInfoAmfRemoval"] = o.m_BackupInfoAmfRemoval;
    if(o.n2InterfaceAmfInfoIsSet())
        j["n2InterfaceAmfInfo"] = o.m_N2InterfaceAmfInfo;
    
}

void from_json(const nlohmann::json& j, AmfInfo& o)
{
    j.at("amfSetId").get_to(o.m_AmfSetId);
    j.at("amfRegionId").get_to(o.m_AmfRegionId);
    j.at("guamiList").get_to(o.m_GuamiList);
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
    if(j.find("backupInfoAmfFailure") != j.end())
    {
        j.at("backupInfoAmfFailure").get_to(o.m_BackupInfoAmfFailure);
        o.m_BackupInfoAmfFailureIsSet = true;
    } 
    if(j.find("backupInfoAmfRemoval") != j.end())
    {
        j.at("backupInfoAmfRemoval").get_to(o.m_BackupInfoAmfRemoval);
        o.m_BackupInfoAmfRemovalIsSet = true;
    } 
    if(j.find("n2InterfaceAmfInfo") != j.end())
    {
        j.at("n2InterfaceAmfInfo").get_to(o.m_N2InterfaceAmfInfo);
        o.m_N2InterfaceAmfInfoIsSet = true;
    } 
    
}

std::string AmfInfo::getAmfSetId() const
{
    return m_AmfSetId;
}
void AmfInfo::setAmfSetId(std::string const& value)
{
    m_AmfSetId = value;
}
std::string AmfInfo::getAmfRegionId() const
{
    return m_AmfRegionId;
}
void AmfInfo::setAmfRegionId(std::string const& value)
{
    m_AmfRegionId = value;
}
std::vector<Guami> AmfInfo::getGuamiList() const
{
    return m_GuamiList;
}
void AmfInfo::setGuamiList(std::vector<Guami> const& value)
{
    m_GuamiList = value;
}
std::vector<Tai> AmfInfo::getTaiList() const
{
    return m_TaiList;
}
void AmfInfo::setTaiList(std::vector<Tai> const& value)
{
    m_TaiList = value;
    m_TaiListIsSet = true;
}
bool AmfInfo::taiListIsSet() const
{
    return m_TaiListIsSet;
}
void AmfInfo::unsetTaiList()
{
    m_TaiListIsSet = false;
}
std::vector<TaiRange> AmfInfo::getTaiRangeList() const
{
    return m_TaiRangeList;
}
void AmfInfo::setTaiRangeList(std::vector<TaiRange> const& value)
{
    m_TaiRangeList = value;
    m_TaiRangeListIsSet = true;
}
bool AmfInfo::taiRangeListIsSet() const
{
    return m_TaiRangeListIsSet;
}
void AmfInfo::unsetTaiRangeList()
{
    m_TaiRangeListIsSet = false;
}
std::vector<Guami> AmfInfo::getBackupInfoAmfFailure() const
{
    return m_BackupInfoAmfFailure;
}
void AmfInfo::setBackupInfoAmfFailure(std::vector<Guami> const& value)
{
    m_BackupInfoAmfFailure = value;
    m_BackupInfoAmfFailureIsSet = true;
}
bool AmfInfo::backupInfoAmfFailureIsSet() const
{
    return m_BackupInfoAmfFailureIsSet;
}
void AmfInfo::unsetBackupInfoAmfFailure()
{
    m_BackupInfoAmfFailureIsSet = false;
}
std::vector<Guami> AmfInfo::getBackupInfoAmfRemoval() const
{
    return m_BackupInfoAmfRemoval;
}
void AmfInfo::setBackupInfoAmfRemoval(std::vector<Guami> const& value)
{
    m_BackupInfoAmfRemoval = value;
    m_BackupInfoAmfRemovalIsSet = true;
}
bool AmfInfo::backupInfoAmfRemovalIsSet() const
{
    return m_BackupInfoAmfRemovalIsSet;
}
void AmfInfo::unsetBackupInfoAmfRemoval()
{
    m_BackupInfoAmfRemovalIsSet = false;
}
N2InterfaceAmfInfo AmfInfo::getN2InterfaceAmfInfo() const
{
    return m_N2InterfaceAmfInfo;
}
void AmfInfo::setN2InterfaceAmfInfo(N2InterfaceAmfInfo const& value)
{
    m_N2InterfaceAmfInfo = value;
    m_N2InterfaceAmfInfoIsSet = true;
}
bool AmfInfo::n2InterfaceAmfInfoIsSet() const
{
    return m_N2InterfaceAmfInfoIsSet;
}
void AmfInfo::unsetN2InterfaceAmfInfo()
{
    m_N2InterfaceAmfInfoIsSet = false;
}


} // namespace org::openapitools::server::model

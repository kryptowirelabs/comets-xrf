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


#include "NwdafCond.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

NwdafCond::NwdafCond()
{
    m_ConditionType = "";
    m_AnalyticsIdsIsSet = false;
    m_SnssaiListIsSet = false;
    m_TaiListIsSet = false;
    m_TaiRangeListIsSet = false;
    m_ServingNfTypeListIsSet = false;
    m_ServingNfSetIdListIsSet = false;
    m_MlAnalyticsListIsSet = false;
    
}

void NwdafCond::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool NwdafCond::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool NwdafCond::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "NwdafCond" : pathPrefix;

             
    if (analyticsIdsIsSet())
    {
        const std::vector<std::string>& value = m_AnalyticsIds;
        const std::string currentValuePath = _pathPrefix + ".analyticsIds";
                
        
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
         
    if (snssaiListIsSet())
    {
        const std::vector<Snssai>& value = m_SnssaiList;
        const std::string currentValuePath = _pathPrefix + ".snssaiList";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const Snssai& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".snssaiList") && success;
 
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
         
    if (servingNfTypeListIsSet())
    {
        const std::vector<NFType>& value = m_ServingNfTypeList;
        const std::string currentValuePath = _pathPrefix + ".servingNfTypeList";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const NFType& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".servingNfTypeList") && success;
 
                i++;
            }
        }

    }
         
    if (servingNfSetIdListIsSet())
    {
        const std::vector<std::string>& value = m_ServingNfSetIdList;
        const std::string currentValuePath = _pathPrefix + ".servingNfSetIdList";
                
        
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
         
    if (mlAnalyticsListIsSet())
    {
        const std::vector<MlAnalyticsInfo>& value = m_MlAnalyticsList;
        const std::string currentValuePath = _pathPrefix + ".mlAnalyticsList";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const MlAnalyticsInfo& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".mlAnalyticsList") && success;
 
                i++;
            }
        }

    }
    
    return success;
}

bool NwdafCond::operator==(const NwdafCond& rhs) const
{
    return
    
    
    (getConditionType() == rhs.getConditionType())
     &&
    
    
    ((!analyticsIdsIsSet() && !rhs.analyticsIdsIsSet()) || (analyticsIdsIsSet() && rhs.analyticsIdsIsSet() && getAnalyticsIds() == rhs.getAnalyticsIds())) &&
    
    
    ((!snssaiListIsSet() && !rhs.snssaiListIsSet()) || (snssaiListIsSet() && rhs.snssaiListIsSet() && getSnssaiList() == rhs.getSnssaiList())) &&
    
    
    ((!taiListIsSet() && !rhs.taiListIsSet()) || (taiListIsSet() && rhs.taiListIsSet() && getTaiList() == rhs.getTaiList())) &&
    
    
    ((!taiRangeListIsSet() && !rhs.taiRangeListIsSet()) || (taiRangeListIsSet() && rhs.taiRangeListIsSet() && getTaiRangeList() == rhs.getTaiRangeList())) &&
    
    
    ((!servingNfTypeListIsSet() && !rhs.servingNfTypeListIsSet()) || (servingNfTypeListIsSet() && rhs.servingNfTypeListIsSet() && getServingNfTypeList() == rhs.getServingNfTypeList())) &&
    
    
    ((!servingNfSetIdListIsSet() && !rhs.servingNfSetIdListIsSet()) || (servingNfSetIdListIsSet() && rhs.servingNfSetIdListIsSet() && getServingNfSetIdList() == rhs.getServingNfSetIdList())) &&
    
    
    ((!mlAnalyticsListIsSet() && !rhs.mlAnalyticsListIsSet()) || (mlAnalyticsListIsSet() && rhs.mlAnalyticsListIsSet() && getMlAnalyticsList() == rhs.getMlAnalyticsList()))
    
    ;
}

bool NwdafCond::operator!=(const NwdafCond& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const NwdafCond& o)
{
    j = nlohmann::json();
    j["conditionType"] = o.m_ConditionType;
    if(o.analyticsIdsIsSet() || !o.m_AnalyticsIds.empty())
        j["analyticsIds"] = o.m_AnalyticsIds;
    if(o.snssaiListIsSet() || !o.m_SnssaiList.empty())
        j["snssaiList"] = o.m_SnssaiList;
    if(o.taiListIsSet() || !o.m_TaiList.empty())
        j["taiList"] = o.m_TaiList;
    if(o.taiRangeListIsSet() || !o.m_TaiRangeList.empty())
        j["taiRangeList"] = o.m_TaiRangeList;
    if(o.servingNfTypeListIsSet() || !o.m_ServingNfTypeList.empty())
        j["servingNfTypeList"] = o.m_ServingNfTypeList;
    if(o.servingNfSetIdListIsSet() || !o.m_ServingNfSetIdList.empty())
        j["servingNfSetIdList"] = o.m_ServingNfSetIdList;
    if(o.mlAnalyticsListIsSet() || !o.m_MlAnalyticsList.empty())
        j["mlAnalyticsList"] = o.m_MlAnalyticsList;
    
}

void from_json(const nlohmann::json& j, NwdafCond& o)
{
    j.at("conditionType").get_to(o.m_ConditionType);
    if(j.find("analyticsIds") != j.end())
    {
        j.at("analyticsIds").get_to(o.m_AnalyticsIds);
        o.m_AnalyticsIdsIsSet = true;
    } 
    if(j.find("snssaiList") != j.end())
    {
        j.at("snssaiList").get_to(o.m_SnssaiList);
        o.m_SnssaiListIsSet = true;
    } 
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
    if(j.find("servingNfTypeList") != j.end())
    {
        j.at("servingNfTypeList").get_to(o.m_ServingNfTypeList);
        o.m_ServingNfTypeListIsSet = true;
    } 
    if(j.find("servingNfSetIdList") != j.end())
    {
        j.at("servingNfSetIdList").get_to(o.m_ServingNfSetIdList);
        o.m_ServingNfSetIdListIsSet = true;
    } 
    if(j.find("mlAnalyticsList") != j.end())
    {
        j.at("mlAnalyticsList").get_to(o.m_MlAnalyticsList);
        o.m_MlAnalyticsListIsSet = true;
    } 
    
}

std::string NwdafCond::getConditionType() const
{
    return m_ConditionType;
}
void NwdafCond::setConditionType(std::string const& value)
{
    m_ConditionType = value;
}
std::vector<std::string> NwdafCond::getAnalyticsIds() const
{
    return m_AnalyticsIds;
}
void NwdafCond::setAnalyticsIds(std::vector<std::string> const& value)
{
    m_AnalyticsIds = value;
    m_AnalyticsIdsIsSet = true;
}
bool NwdafCond::analyticsIdsIsSet() const
{
    return m_AnalyticsIdsIsSet;
}
void NwdafCond::unsetAnalyticsIds()
{
    m_AnalyticsIdsIsSet = false;
}
std::vector<Snssai> NwdafCond::getSnssaiList() const
{
    return m_SnssaiList;
}
void NwdafCond::setSnssaiList(std::vector<Snssai> const& value)
{
    m_SnssaiList = value;
    m_SnssaiListIsSet = true;
}
bool NwdafCond::snssaiListIsSet() const
{
    return m_SnssaiListIsSet;
}
void NwdafCond::unsetSnssaiList()
{
    m_SnssaiListIsSet = false;
}
std::vector<Tai> NwdafCond::getTaiList() const
{
    return m_TaiList;
}
void NwdafCond::setTaiList(std::vector<Tai> const& value)
{
    m_TaiList = value;
    m_TaiListIsSet = true;
}
bool NwdafCond::taiListIsSet() const
{
    return m_TaiListIsSet;
}
void NwdafCond::unsetTaiList()
{
    m_TaiListIsSet = false;
}
std::vector<TaiRange> NwdafCond::getTaiRangeList() const
{
    return m_TaiRangeList;
}
void NwdafCond::setTaiRangeList(std::vector<TaiRange> const& value)
{
    m_TaiRangeList = value;
    m_TaiRangeListIsSet = true;
}
bool NwdafCond::taiRangeListIsSet() const
{
    return m_TaiRangeListIsSet;
}
void NwdafCond::unsetTaiRangeList()
{
    m_TaiRangeListIsSet = false;
}
std::vector<NFType> NwdafCond::getServingNfTypeList() const
{
    return m_ServingNfTypeList;
}
void NwdafCond::setServingNfTypeList(std::vector<NFType> const& value)
{
    m_ServingNfTypeList = value;
    m_ServingNfTypeListIsSet = true;
}
bool NwdafCond::servingNfTypeListIsSet() const
{
    return m_ServingNfTypeListIsSet;
}
void NwdafCond::unsetServingNfTypeList()
{
    m_ServingNfTypeListIsSet = false;
}
std::vector<std::string> NwdafCond::getServingNfSetIdList() const
{
    return m_ServingNfSetIdList;
}
void NwdafCond::setServingNfSetIdList(std::vector<std::string> const& value)
{
    m_ServingNfSetIdList = value;
    m_ServingNfSetIdListIsSet = true;
}
bool NwdafCond::servingNfSetIdListIsSet() const
{
    return m_ServingNfSetIdListIsSet;
}
void NwdafCond::unsetServingNfSetIdList()
{
    m_ServingNfSetIdListIsSet = false;
}
std::vector<MlAnalyticsInfo> NwdafCond::getMlAnalyticsList() const
{
    return m_MlAnalyticsList;
}
void NwdafCond::setMlAnalyticsList(std::vector<MlAnalyticsInfo> const& value)
{
    m_MlAnalyticsList = value;
    m_MlAnalyticsListIsSet = true;
}
bool NwdafCond::mlAnalyticsListIsSet() const
{
    return m_MlAnalyticsListIsSet;
}
void NwdafCond::unsetMlAnalyticsList()
{
    m_MlAnalyticsListIsSet = false;
}


} // namespace org::openapitools::server::model


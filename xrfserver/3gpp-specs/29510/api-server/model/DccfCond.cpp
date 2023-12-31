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


#include "DccfCond.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

DccfCond::DccfCond()
{
    m_ConditionType = "";
    m_TaiListIsSet = false;
    m_TaiRangeListIsSet = false;
    m_ServingNfTypeListIsSet = false;
    m_ServingNfSetIdListIsSet = false;
    
}

void DccfCond::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool DccfCond::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool DccfCond::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "DccfCond" : pathPrefix;

             
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
    
    return success;
}

bool DccfCond::operator==(const DccfCond& rhs) const
{
    return
    
    
    (getConditionType() == rhs.getConditionType())
     &&
    
    
    ((!taiListIsSet() && !rhs.taiListIsSet()) || (taiListIsSet() && rhs.taiListIsSet() && getTaiList() == rhs.getTaiList())) &&
    
    
    ((!taiRangeListIsSet() && !rhs.taiRangeListIsSet()) || (taiRangeListIsSet() && rhs.taiRangeListIsSet() && getTaiRangeList() == rhs.getTaiRangeList())) &&
    
    
    ((!servingNfTypeListIsSet() && !rhs.servingNfTypeListIsSet()) || (servingNfTypeListIsSet() && rhs.servingNfTypeListIsSet() && getServingNfTypeList() == rhs.getServingNfTypeList())) &&
    
    
    ((!servingNfSetIdListIsSet() && !rhs.servingNfSetIdListIsSet()) || (servingNfSetIdListIsSet() && rhs.servingNfSetIdListIsSet() && getServingNfSetIdList() == rhs.getServingNfSetIdList()))
    
    ;
}

bool DccfCond::operator!=(const DccfCond& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const DccfCond& o)
{
    j = nlohmann::json();
    j["conditionType"] = o.m_ConditionType;
    if(o.taiListIsSet() || !o.m_TaiList.empty())
        j["taiList"] = o.m_TaiList;
    if(o.taiRangeListIsSet() || !o.m_TaiRangeList.empty())
        j["taiRangeList"] = o.m_TaiRangeList;
    if(o.servingNfTypeListIsSet() || !o.m_ServingNfTypeList.empty())
        j["servingNfTypeList"] = o.m_ServingNfTypeList;
    if(o.servingNfSetIdListIsSet() || !o.m_ServingNfSetIdList.empty())
        j["servingNfSetIdList"] = o.m_ServingNfSetIdList;
    
}

void from_json(const nlohmann::json& j, DccfCond& o)
{
    j.at("conditionType").get_to(o.m_ConditionType);
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
    
}

std::string DccfCond::getConditionType() const
{
    return m_ConditionType;
}
void DccfCond::setConditionType(std::string const& value)
{
    m_ConditionType = value;
}
std::vector<Tai> DccfCond::getTaiList() const
{
    return m_TaiList;
}
void DccfCond::setTaiList(std::vector<Tai> const& value)
{
    m_TaiList = value;
    m_TaiListIsSet = true;
}
bool DccfCond::taiListIsSet() const
{
    return m_TaiListIsSet;
}
void DccfCond::unsetTaiList()
{
    m_TaiListIsSet = false;
}
std::vector<TaiRange> DccfCond::getTaiRangeList() const
{
    return m_TaiRangeList;
}
void DccfCond::setTaiRangeList(std::vector<TaiRange> const& value)
{
    m_TaiRangeList = value;
    m_TaiRangeListIsSet = true;
}
bool DccfCond::taiRangeListIsSet() const
{
    return m_TaiRangeListIsSet;
}
void DccfCond::unsetTaiRangeList()
{
    m_TaiRangeListIsSet = false;
}
std::vector<NFType> DccfCond::getServingNfTypeList() const
{
    return m_ServingNfTypeList;
}
void DccfCond::setServingNfTypeList(std::vector<NFType> const& value)
{
    m_ServingNfTypeList = value;
    m_ServingNfTypeListIsSet = true;
}
bool DccfCond::servingNfTypeListIsSet() const
{
    return m_ServingNfTypeListIsSet;
}
void DccfCond::unsetServingNfTypeList()
{
    m_ServingNfTypeListIsSet = false;
}
std::vector<std::string> DccfCond::getServingNfSetIdList() const
{
    return m_ServingNfSetIdList;
}
void DccfCond::setServingNfSetIdList(std::vector<std::string> const& value)
{
    m_ServingNfSetIdList = value;
    m_ServingNfSetIdListIsSet = true;
}
bool DccfCond::servingNfSetIdListIsSet() const
{
    return m_ServingNfSetIdListIsSet;
}
void DccfCond::unsetServingNfSetIdList()
{
    m_ServingNfSetIdListIsSet = false;
}


} // namespace org::openapitools::server::model


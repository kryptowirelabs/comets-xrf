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


#include "LmfInfo.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

LmfInfo::LmfInfo()
{
    m_ServingClientTypesIsSet = false;
    m_LmfId = "";
    m_LmfIdIsSet = false;
    m_ServingAccessTypesIsSet = false;
    m_ServingAnNodeTypesIsSet = false;
    m_ServingRatTypesIsSet = false;
    m_TaiListIsSet = false;
    m_TaiRangeListIsSet = false;
    m_SupportedGADShapesIsSet = false;
    
}

void LmfInfo::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool LmfInfo::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool LmfInfo::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "LmfInfo" : pathPrefix;

         
    if (servingClientTypesIsSet())
    {
        const std::vector<ExternalClientType>& value = m_ServingClientTypes;
        const std::string currentValuePath = _pathPrefix + ".servingClientTypes";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const ExternalClientType& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".servingClientTypes") && success;
 
                i++;
            }
        }

    }
             
    if (servingAccessTypesIsSet())
    {
        const std::vector<AccessType>& value = m_ServingAccessTypes;
        const std::string currentValuePath = _pathPrefix + ".servingAccessTypes";
                
        
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
         
    if (servingAnNodeTypesIsSet())
    {
        const std::vector<AnNodeType>& value = m_ServingAnNodeTypes;
        const std::string currentValuePath = _pathPrefix + ".servingAnNodeTypes";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const AnNodeType& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".servingAnNodeTypes") && success;
 
                i++;
            }
        }

    }
         
    if (servingRatTypesIsSet())
    {
        const std::vector<RatType>& value = m_ServingRatTypes;
        const std::string currentValuePath = _pathPrefix + ".servingRatTypes";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const RatType& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".servingRatTypes") && success;
 
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
         
    if (supportedGADShapesIsSet())
    {
        const std::vector<SupportedGADShapes>& value = m_SupportedGADShapes;
        const std::string currentValuePath = _pathPrefix + ".supportedGADShapes";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const SupportedGADShapes& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".supportedGADShapes") && success;
 
                i++;
            }
        }

    }
    
    return success;
}

bool LmfInfo::operator==(const LmfInfo& rhs) const
{
    return
    
    
    
    ((!servingClientTypesIsSet() && !rhs.servingClientTypesIsSet()) || (servingClientTypesIsSet() && rhs.servingClientTypesIsSet() && getServingClientTypes() == rhs.getServingClientTypes())) &&
    
    
    ((!lmfIdIsSet() && !rhs.lmfIdIsSet()) || (lmfIdIsSet() && rhs.lmfIdIsSet() && getLmfId() == rhs.getLmfId())) &&
    
    
    ((!servingAccessTypesIsSet() && !rhs.servingAccessTypesIsSet()) || (servingAccessTypesIsSet() && rhs.servingAccessTypesIsSet() && getServingAccessTypes() == rhs.getServingAccessTypes())) &&
    
    
    ((!servingAnNodeTypesIsSet() && !rhs.servingAnNodeTypesIsSet()) || (servingAnNodeTypesIsSet() && rhs.servingAnNodeTypesIsSet() && getServingAnNodeTypes() == rhs.getServingAnNodeTypes())) &&
    
    
    ((!servingRatTypesIsSet() && !rhs.servingRatTypesIsSet()) || (servingRatTypesIsSet() && rhs.servingRatTypesIsSet() && getServingRatTypes() == rhs.getServingRatTypes())) &&
    
    
    ((!taiListIsSet() && !rhs.taiListIsSet()) || (taiListIsSet() && rhs.taiListIsSet() && getTaiList() == rhs.getTaiList())) &&
    
    
    ((!taiRangeListIsSet() && !rhs.taiRangeListIsSet()) || (taiRangeListIsSet() && rhs.taiRangeListIsSet() && getTaiRangeList() == rhs.getTaiRangeList())) &&
    
    
    ((!supportedGADShapesIsSet() && !rhs.supportedGADShapesIsSet()) || (supportedGADShapesIsSet() && rhs.supportedGADShapesIsSet() && getSupportedGADShapes() == rhs.getSupportedGADShapes()))
    
    ;
}

bool LmfInfo::operator!=(const LmfInfo& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const LmfInfo& o)
{
    j = nlohmann::json();
    if(o.servingClientTypesIsSet() || !o.m_ServingClientTypes.empty())
        j["servingClientTypes"] = o.m_ServingClientTypes;
    if(o.lmfIdIsSet())
        j["lmfId"] = o.m_LmfId;
    if(o.servingAccessTypesIsSet() || !o.m_ServingAccessTypes.empty())
        j["servingAccessTypes"] = o.m_ServingAccessTypes;
    if(o.servingAnNodeTypesIsSet() || !o.m_ServingAnNodeTypes.empty())
        j["servingAnNodeTypes"] = o.m_ServingAnNodeTypes;
    if(o.servingRatTypesIsSet() || !o.m_ServingRatTypes.empty())
        j["servingRatTypes"] = o.m_ServingRatTypes;
    if(o.taiListIsSet() || !o.m_TaiList.empty())
        j["taiList"] = o.m_TaiList;
    if(o.taiRangeListIsSet() || !o.m_TaiRangeList.empty())
        j["taiRangeList"] = o.m_TaiRangeList;
    if(o.supportedGADShapesIsSet() || !o.m_SupportedGADShapes.empty())
        j["supportedGADShapes"] = o.m_SupportedGADShapes;
    
}

void from_json(const nlohmann::json& j, LmfInfo& o)
{
    if(j.find("servingClientTypes") != j.end())
    {
        j.at("servingClientTypes").get_to(o.m_ServingClientTypes);
        o.m_ServingClientTypesIsSet = true;
    } 
    if(j.find("lmfId") != j.end())
    {
        j.at("lmfId").get_to(o.m_LmfId);
        o.m_LmfIdIsSet = true;
    } 
    if(j.find("servingAccessTypes") != j.end())
    {
        j.at("servingAccessTypes").get_to(o.m_ServingAccessTypes);
        o.m_ServingAccessTypesIsSet = true;
    } 
    if(j.find("servingAnNodeTypes") != j.end())
    {
        j.at("servingAnNodeTypes").get_to(o.m_ServingAnNodeTypes);
        o.m_ServingAnNodeTypesIsSet = true;
    } 
    if(j.find("servingRatTypes") != j.end())
    {
        j.at("servingRatTypes").get_to(o.m_ServingRatTypes);
        o.m_ServingRatTypesIsSet = true;
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
    if(j.find("supportedGADShapes") != j.end())
    {
        j.at("supportedGADShapes").get_to(o.m_SupportedGADShapes);
        o.m_SupportedGADShapesIsSet = true;
    } 
    
}

std::vector<ExternalClientType> LmfInfo::getServingClientTypes() const
{
    return m_ServingClientTypes;
}
void LmfInfo::setServingClientTypes(std::vector<ExternalClientType> const& value)
{
    m_ServingClientTypes = value;
    m_ServingClientTypesIsSet = true;
}
bool LmfInfo::servingClientTypesIsSet() const
{
    return m_ServingClientTypesIsSet;
}
void LmfInfo::unsetServingClientTypes()
{
    m_ServingClientTypesIsSet = false;
}
std::string LmfInfo::getLmfId() const
{
    return m_LmfId;
}
void LmfInfo::setLmfId(std::string const& value)
{
    m_LmfId = value;
    m_LmfIdIsSet = true;
}
bool LmfInfo::lmfIdIsSet() const
{
    return m_LmfIdIsSet;
}
void LmfInfo::unsetLmfId()
{
    m_LmfIdIsSet = false;
}
std::vector<AccessType> LmfInfo::getServingAccessTypes() const
{
    return m_ServingAccessTypes;
}
void LmfInfo::setServingAccessTypes(std::vector<AccessType> const& value)
{
    m_ServingAccessTypes = value;
    m_ServingAccessTypesIsSet = true;
}
bool LmfInfo::servingAccessTypesIsSet() const
{
    return m_ServingAccessTypesIsSet;
}
void LmfInfo::unsetServingAccessTypes()
{
    m_ServingAccessTypesIsSet = false;
}
std::vector<AnNodeType> LmfInfo::getServingAnNodeTypes() const
{
    return m_ServingAnNodeTypes;
}
void LmfInfo::setServingAnNodeTypes(std::vector<AnNodeType> const& value)
{
    m_ServingAnNodeTypes = value;
    m_ServingAnNodeTypesIsSet = true;
}
bool LmfInfo::servingAnNodeTypesIsSet() const
{
    return m_ServingAnNodeTypesIsSet;
}
void LmfInfo::unsetServingAnNodeTypes()
{
    m_ServingAnNodeTypesIsSet = false;
}
std::vector<RatType> LmfInfo::getServingRatTypes() const
{
    return m_ServingRatTypes;
}
void LmfInfo::setServingRatTypes(std::vector<RatType> const& value)
{
    m_ServingRatTypes = value;
    m_ServingRatTypesIsSet = true;
}
bool LmfInfo::servingRatTypesIsSet() const
{
    return m_ServingRatTypesIsSet;
}
void LmfInfo::unsetServingRatTypes()
{
    m_ServingRatTypesIsSet = false;
}
std::vector<Tai> LmfInfo::getTaiList() const
{
    return m_TaiList;
}
void LmfInfo::setTaiList(std::vector<Tai> const& value)
{
    m_TaiList = value;
    m_TaiListIsSet = true;
}
bool LmfInfo::taiListIsSet() const
{
    return m_TaiListIsSet;
}
void LmfInfo::unsetTaiList()
{
    m_TaiListIsSet = false;
}
std::vector<TaiRange> LmfInfo::getTaiRangeList() const
{
    return m_TaiRangeList;
}
void LmfInfo::setTaiRangeList(std::vector<TaiRange> const& value)
{
    m_TaiRangeList = value;
    m_TaiRangeListIsSet = true;
}
bool LmfInfo::taiRangeListIsSet() const
{
    return m_TaiRangeListIsSet;
}
void LmfInfo::unsetTaiRangeList()
{
    m_TaiRangeListIsSet = false;
}
std::vector<SupportedGADShapes> LmfInfo::getSupportedGADShapes() const
{
    return m_SupportedGADShapes;
}
void LmfInfo::setSupportedGADShapes(std::vector<SupportedGADShapes> const& value)
{
    m_SupportedGADShapes = value;
    m_SupportedGADShapesIsSet = true;
}
bool LmfInfo::supportedGADShapesIsSet() const
{
    return m_SupportedGADShapesIsSet;
}
void LmfInfo::unsetSupportedGADShapes()
{
    m_SupportedGADShapesIsSet = false;
}


} // namespace org::openapitools::server::model


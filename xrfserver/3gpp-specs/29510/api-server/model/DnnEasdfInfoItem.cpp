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


#include "DnnEasdfInfoItem.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

DnnEasdfInfoItem::DnnEasdfInfoItem()
{
    m_DnaiListIsSet = false;
    
}

void DnnEasdfInfoItem::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool DnnEasdfInfoItem::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool DnnEasdfInfoItem::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "DnnEasdfInfoItem" : pathPrefix;

             
    if (dnaiListIsSet())
    {
        const std::vector<std::string>& value = m_DnaiList;
        const std::string currentValuePath = _pathPrefix + ".dnaiList";
                
        
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

bool DnnEasdfInfoItem::operator==(const DnnEasdfInfoItem& rhs) const
{
    return
    
    
    (getDnn() == rhs.getDnn())
     &&
    
    
    ((!dnaiListIsSet() && !rhs.dnaiListIsSet()) || (dnaiListIsSet() && rhs.dnaiListIsSet() && getDnaiList() == rhs.getDnaiList()))
    
    ;
}

bool DnnEasdfInfoItem::operator!=(const DnnEasdfInfoItem& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const DnnEasdfInfoItem& o)
{
    j = nlohmann::json();
    j["dnn"] = o.m_Dnn;
    if(o.dnaiListIsSet() || !o.m_DnaiList.empty())
        j["dnaiList"] = o.m_DnaiList;
    
}

void from_json(const nlohmann::json& j, DnnEasdfInfoItem& o)
{
    j.at("dnn").get_to(o.m_Dnn);
    if(j.find("dnaiList") != j.end())
    {
        j.at("dnaiList").get_to(o.m_DnaiList);
        o.m_DnaiListIsSet = true;
    } 
    
}

AnyOfstringstring DnnEasdfInfoItem::getDnn() const
{
    return m_Dnn;
}
void DnnEasdfInfoItem::setDnn(AnyOfstringstring const& value)
{
    m_Dnn = value;
}
std::vector<std::string> DnnEasdfInfoItem::getDnaiList() const
{
    return m_DnaiList;
}
void DnnEasdfInfoItem::setDnaiList(std::vector<std::string> const& value)
{
    m_DnaiList = value;
    m_DnaiListIsSet = true;
}
bool DnnEasdfInfoItem::dnaiListIsSet() const
{
    return m_DnaiListIsSet;
}
void DnnEasdfInfoItem::unsetDnaiList()
{
    m_DnaiListIsSet = false;
}


} // namespace org::openapitools::server::model


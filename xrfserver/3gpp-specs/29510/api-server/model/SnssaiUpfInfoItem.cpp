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


#include "SnssaiUpfInfoItem.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

SnssaiUpfInfoItem::SnssaiUpfInfoItem()
{
    m_RedundantTransport = false;
    m_RedundantTransportIsSet = false;
    
}

void SnssaiUpfInfoItem::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool SnssaiUpfInfoItem::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool SnssaiUpfInfoItem::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "SnssaiUpfInfoItem" : pathPrefix;

             
    
    /* DnnUpfInfoList */ {
        const std::vector<DnnUpfInfoItem>& value = m_DnnUpfInfoList;
        const std::string currentValuePath = _pathPrefix + ".dnnUpfInfoList";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const DnnUpfInfoItem& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".dnnUpfInfoList") && success;
 
                i++;
            }
        }

    }
        
    return success;
}

bool SnssaiUpfInfoItem::operator==(const SnssaiUpfInfoItem& rhs) const
{
    return
    
    
    (getSNssai() == rhs.getSNssai())
     &&
    
    (getDnnUpfInfoList() == rhs.getDnnUpfInfoList())
     &&
    
    
    ((!redundantTransportIsSet() && !rhs.redundantTransportIsSet()) || (redundantTransportIsSet() && rhs.redundantTransportIsSet() && isRedundantTransport() == rhs.isRedundantTransport()))
    
    ;
}

bool SnssaiUpfInfoItem::operator!=(const SnssaiUpfInfoItem& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SnssaiUpfInfoItem& o)
{
    j = nlohmann::json();
    j["sNssai"] = o.m_SNssai;
    j["dnnUpfInfoList"] = o.m_DnnUpfInfoList;
    if(o.redundantTransportIsSet())
        j["redundantTransport"] = o.m_RedundantTransport;
    
}

void from_json(const nlohmann::json& j, SnssaiUpfInfoItem& o)
{
    j.at("sNssai").get_to(o.m_SNssai);
    j.at("dnnUpfInfoList").get_to(o.m_DnnUpfInfoList);
    if(j.find("redundantTransport") != j.end())
    {
        j.at("redundantTransport").get_to(o.m_RedundantTransport);
        o.m_RedundantTransportIsSet = true;
    } 
    
}

Snssai SnssaiUpfInfoItem::getSNssai() const
{
    return m_SNssai;
}
void SnssaiUpfInfoItem::setSNssai(Snssai const& value)
{
    m_SNssai = value;
}
std::vector<DnnUpfInfoItem> SnssaiUpfInfoItem::getDnnUpfInfoList() const
{
    return m_DnnUpfInfoList;
}
void SnssaiUpfInfoItem::setDnnUpfInfoList(std::vector<DnnUpfInfoItem> const& value)
{
    m_DnnUpfInfoList = value;
}
bool SnssaiUpfInfoItem::isRedundantTransport() const
{
    return m_RedundantTransport;
}
void SnssaiUpfInfoItem::setRedundantTransport(bool const value)
{
    m_RedundantTransport = value;
    m_RedundantTransportIsSet = true;
}
bool SnssaiUpfInfoItem::redundantTransportIsSet() const
{
    return m_RedundantTransportIsSet;
}
void SnssaiUpfInfoItem::unsetRedundantTransport()
{
    m_RedundantTransportIsSet = false;
}


} // namespace org::openapitools::server::model


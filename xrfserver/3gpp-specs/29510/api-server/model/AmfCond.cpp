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


#include "AmfCond.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AmfCond::AmfCond()
{
    m_AmfSetId = "";
    m_AmfSetIdIsSet = false;
    m_AmfRegionId = "";
    m_AmfRegionIdIsSet = false;
    
}

void AmfCond::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AmfCond::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AmfCond::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AmfCond" : pathPrefix;

         
    if (amfSetIdIsSet())
    {
        const std::string& value = m_AmfSetId;
        const std::string currentValuePath = _pathPrefix + ".amfSetId";
                
        

    }
         
    if (amfRegionIdIsSet())
    {
        const std::string& value = m_AmfRegionId;
        const std::string currentValuePath = _pathPrefix + ".amfRegionId";
                
        

    }
    
    return success;
}

bool AmfCond::operator==(const AmfCond& rhs) const
{
    return
    
    
    
    ((!amfSetIdIsSet() && !rhs.amfSetIdIsSet()) || (amfSetIdIsSet() && rhs.amfSetIdIsSet() && getAmfSetId() == rhs.getAmfSetId())) &&
    
    
    ((!amfRegionIdIsSet() && !rhs.amfRegionIdIsSet()) || (amfRegionIdIsSet() && rhs.amfRegionIdIsSet() && getAmfRegionId() == rhs.getAmfRegionId()))
    
    ;
}

bool AmfCond::operator!=(const AmfCond& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AmfCond& o)
{
    j = nlohmann::json();
    if(o.amfSetIdIsSet())
        j["amfSetId"] = o.m_AmfSetId;
    if(o.amfRegionIdIsSet())
        j["amfRegionId"] = o.m_AmfRegionId;
    
}

void from_json(const nlohmann::json& j, AmfCond& o)
{
    if(j.find("amfSetId") != j.end())
    {
        j.at("amfSetId").get_to(o.m_AmfSetId);
        o.m_AmfSetIdIsSet = true;
    } 
    if(j.find("amfRegionId") != j.end())
    {
        j.at("amfRegionId").get_to(o.m_AmfRegionId);
        o.m_AmfRegionIdIsSet = true;
    } 
    
}

std::string AmfCond::getAmfSetId() const
{
    return m_AmfSetId;
}
void AmfCond::setAmfSetId(std::string const& value)
{
    m_AmfSetId = value;
    m_AmfSetIdIsSet = true;
}
bool AmfCond::amfSetIdIsSet() const
{
    return m_AmfSetIdIsSet;
}
void AmfCond::unsetAmfSetId()
{
    m_AmfSetIdIsSet = false;
}
std::string AmfCond::getAmfRegionId() const
{
    return m_AmfRegionId;
}
void AmfCond::setAmfRegionId(std::string const& value)
{
    m_AmfRegionId = value;
    m_AmfRegionIdIsSet = true;
}
bool AmfCond::amfRegionIdIsSet() const
{
    return m_AmfRegionIdIsSet;
}
void AmfCond::unsetAmfRegionId()
{
    m_AmfRegionIdIsSet = false;
}


} // namespace org::openapitools::server::model


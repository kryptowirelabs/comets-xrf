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


#include "Tmgi.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

Tmgi::Tmgi()
{
    m_MbsServiceId = "";
    
}

void Tmgi::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Tmgi::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Tmgi::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Tmgi" : pathPrefix;

         
    
    /* MbsServiceId */ {
        const std::string& value = m_MbsServiceId;
        const std::string currentValuePath = _pathPrefix + ".mbsServiceId";
                
        

    }
        
    return success;
}

bool Tmgi::operator==(const Tmgi& rhs) const
{
    return
    
    
    (getMbsServiceId() == rhs.getMbsServiceId())
     &&
    
    (getPlmnId() == rhs.getPlmnId())
    
    
    ;
}

bool Tmgi::operator!=(const Tmgi& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Tmgi& o)
{
    j = nlohmann::json();
    j["mbsServiceId"] = o.m_MbsServiceId;
    j["plmnId"] = o.m_PlmnId;
    
}

void from_json(const nlohmann::json& j, Tmgi& o)
{
    j.at("mbsServiceId").get_to(o.m_MbsServiceId);
    j.at("plmnId").get_to(o.m_PlmnId);
    
}

std::string Tmgi::getMbsServiceId() const
{
    return m_MbsServiceId;
}
void Tmgi::setMbsServiceId(std::string const& value)
{
    m_MbsServiceId = value;
}
PlmnId Tmgi::getPlmnId() const
{
    return m_PlmnId;
}
void Tmgi::setPlmnId(PlmnId const& value)
{
    m_PlmnId = value;
}


} // namespace org::openapitools::server::model

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


#include "NfGroupCond.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

NfGroupCond::NfGroupCond()
{
    m_NfType = "";
    m_NfGroupId = "";
    
}

void NfGroupCond::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool NfGroupCond::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool NfGroupCond::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "NfGroupCond" : pathPrefix;

            
    return success;
}

bool NfGroupCond::operator==(const NfGroupCond& rhs) const
{
    return
    
    
    (getNfType() == rhs.getNfType())
     &&
    
    (getNfGroupId() == rhs.getNfGroupId())
    
    
    ;
}

bool NfGroupCond::operator!=(const NfGroupCond& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const NfGroupCond& o)
{
    j = nlohmann::json();
    j["nfType"] = o.m_NfType;
    j["nfGroupId"] = o.m_NfGroupId;
    
}

void from_json(const nlohmann::json& j, NfGroupCond& o)
{
    j.at("nfType").get_to(o.m_NfType);
    j.at("nfGroupId").get_to(o.m_NfGroupId);
    
}

std::string NfGroupCond::getNfType() const
{
    return m_NfType;
}
void NfGroupCond::setNfType(std::string const& value)
{
    m_NfType = value;
}
std::string NfGroupCond::getNfGroupId() const
{
    return m_NfGroupId;
}
void NfGroupCond::setNfGroupId(std::string const& value)
{
    m_NfGroupId = value;
}


} // namespace org::openapitools::server::model


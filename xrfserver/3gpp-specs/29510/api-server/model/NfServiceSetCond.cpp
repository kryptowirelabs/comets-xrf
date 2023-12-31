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


#include "NfServiceSetCond.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

NfServiceSetCond::NfServiceSetCond()
{
    m_NfServiceSetId = "";
    m_NfSetId = "";
    m_NfSetIdIsSet = false;
    
}

void NfServiceSetCond::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool NfServiceSetCond::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool NfServiceSetCond::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "NfServiceSetCond" : pathPrefix;

            
    return success;
}

bool NfServiceSetCond::operator==(const NfServiceSetCond& rhs) const
{
    return
    
    
    (getNfServiceSetId() == rhs.getNfServiceSetId())
     &&
    
    
    ((!nfSetIdIsSet() && !rhs.nfSetIdIsSet()) || (nfSetIdIsSet() && rhs.nfSetIdIsSet() && getNfSetId() == rhs.getNfSetId()))
    
    ;
}

bool NfServiceSetCond::operator!=(const NfServiceSetCond& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const NfServiceSetCond& o)
{
    j = nlohmann::json();
    j["nfServiceSetId"] = o.m_NfServiceSetId;
    if(o.nfSetIdIsSet())
        j["nfSetId"] = o.m_NfSetId;
    
}

void from_json(const nlohmann::json& j, NfServiceSetCond& o)
{
    j.at("nfServiceSetId").get_to(o.m_NfServiceSetId);
    if(j.find("nfSetId") != j.end())
    {
        j.at("nfSetId").get_to(o.m_NfSetId);
        o.m_NfSetIdIsSet = true;
    } 
    
}

std::string NfServiceSetCond::getNfServiceSetId() const
{
    return m_NfServiceSetId;
}
void NfServiceSetCond::setNfServiceSetId(std::string const& value)
{
    m_NfServiceSetId = value;
}
std::string NfServiceSetCond::getNfSetId() const
{
    return m_NfSetId;
}
void NfServiceSetCond::setNfSetId(std::string const& value)
{
    m_NfSetId = value;
    m_NfSetIdIsSet = true;
}
bool NfServiceSetCond::nfSetIdIsSet() const
{
    return m_NfSetIdIsSet;
}
void NfServiceSetCond::unsetNfSetId()
{
    m_NfSetIdIsSet = false;
}


} // namespace org::openapitools::server::model


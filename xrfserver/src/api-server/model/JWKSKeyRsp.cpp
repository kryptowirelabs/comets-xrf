/**
* XRF OAuth2 Token Introspection Request API
* XRF OAuth2 Authorization server, token introspection API 
*
* The version of the OpenAPI document: 1
* Contact: tolgaoa@vt.edu
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "JWKSKeyRsp.h"
#include "Helpers.h"

#include <sstream>

namespace xrf::model
{

JWKSKeyRsp::JWKSKeyRsp()
{
    m_TokenValidity = false;
    m_TokenExp = 0;
    
}

void JWKSKeyRsp::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw xrf::helpers::ValidationException(msg.str());
    }
}

bool JWKSKeyRsp::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool JWKSKeyRsp::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "JWKSKeyRsp" : pathPrefix;

            
    return success;
}

bool JWKSKeyRsp::operator==(const JWKSKeyRsp& rhs) const
{
    return
    
    
    (isTokenValidity() == rhs.isTokenValidity())
     &&
    
    (getTokenExp() == rhs.getTokenExp())
    
    
    ;
}

bool JWKSKeyRsp::operator!=(const JWKSKeyRsp& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const JWKSKeyRsp& o)
{
    j = nlohmann::json();
    j["tokenValidity"] = o.m_TokenValidity;
    j["tokenExp"] = o.m_TokenExp;
    
}

void from_json(const nlohmann::json& j, JWKSKeyRsp& o)
{
    j.at("tokenValidity").get_to(o.m_TokenValidity);
    j.at("tokenExp").get_to(o.m_TokenExp);
    
}

bool JWKSKeyRsp::isTokenValidity() const
{
    return m_TokenValidity;
}
void JWKSKeyRsp::setTokenValidity(bool const value)
{
    m_TokenValidity = value;
}
int32_t JWKSKeyRsp::getTokenExp() const
{
    return m_TokenExp;
}
void JWKSKeyRsp::setTokenExp(int32_t const value)
{
    m_TokenExp = value;
}


} // namespace xrf::model


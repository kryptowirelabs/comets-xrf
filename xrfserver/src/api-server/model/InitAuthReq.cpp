/**
* XRF OAuth2 Initial Authentication Request API
* XRF OAuth2 Authorization server, initial authentication with the xApp API 
*
* The version of the OpenAPI document: 1
* Contact: tolgaoa@vt.edu
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "InitAuthReq.h"
#include "Helpers.h"

#include <sstream>

namespace xrf::model
{

InitAuthReq::InitAuthReq()
{
    m_Certificate = "";
    m_CertificateIsSet = false;
    m_NfInstanceId = "";
    m_NfInstanceIdIsSet = false;
    m_HxrfInitAuthUri = "";
    m_HxrfInitAuthUriIsSet = false;
    
}

void InitAuthReq::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw xrf::helpers::ValidationException(msg.str());
    }
}

bool InitAuthReq::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool InitAuthReq::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "InitAuthReq" : pathPrefix;

                
    return success;
}

bool InitAuthReq::operator==(const InitAuthReq& rhs) const
{
    return
    
    
    
    ((!certificateIsSet() && !rhs.certificateIsSet()) || (certificateIsSet() && rhs.certificateIsSet() && getCertificate() == rhs.getCertificate())) &&
    
    
    ((!nfInstanceIdIsSet() && !rhs.nfInstanceIdIsSet()) || (nfInstanceIdIsSet() && rhs.nfInstanceIdIsSet() && getNfInstanceId() == rhs.getNfInstanceId())) &&
    
    
    ((!hxrfInitAuthUriIsSet() && !rhs.hxrfInitAuthUriIsSet()) || (hxrfInitAuthUriIsSet() && rhs.hxrfInitAuthUriIsSet() && getHxrfInitAuthUri() == rhs.getHxrfInitAuthUri()))
    
    ;
}

bool InitAuthReq::operator!=(const InitAuthReq& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const InitAuthReq& o)
{
    j = nlohmann::json();
    if(o.certificateIsSet())
        j["certificate"] = o.m_Certificate;
    if(o.nfInstanceIdIsSet())
        j["nfInstanceId"] = o.m_NfInstanceId;
    if(o.hxrfInitAuthUriIsSet())
        j["hxrfInitAuthUri"] = o.m_HxrfInitAuthUri;
    
}

void from_json(const nlohmann::json& j, InitAuthReq& o)
{
    if(j.find("certificate") != j.end())
    {
        j.at("certificate").get_to(o.m_Certificate);
        o.m_CertificateIsSet = true;
    } 
    if(j.find("nfInstanceId") != j.end())
    {
        j.at("nfInstanceId").get_to(o.m_NfInstanceId);
        o.m_NfInstanceIdIsSet = true;
    } 
    if(j.find("hxrfInitAuthUri") != j.end())
    {
        j.at("hxrfInitAuthUri").get_to(o.m_HxrfInitAuthUri);
        o.m_HxrfInitAuthUriIsSet = true;
    } 
    
}

std::string InitAuthReq::getCertificate() const
{
    return m_Certificate;
}
void InitAuthReq::setCertificate(std::string const& value)
{
    m_Certificate = value;
    m_CertificateIsSet = true;
}
bool InitAuthReq::certificateIsSet() const
{
    return m_CertificateIsSet;
}
void InitAuthReq::unsetCertificate()
{
    m_CertificateIsSet = false;
}
std::string InitAuthReq::getNfInstanceId() const
{
    return m_NfInstanceId;
}
void InitAuthReq::setNfInstanceId(std::string const& value)
{
    m_NfInstanceId = value;
    m_NfInstanceIdIsSet = true;
}
bool InitAuthReq::nfInstanceIdIsSet() const
{
    return m_NfInstanceIdIsSet;
}
void InitAuthReq::unsetNfInstanceId()
{
    m_NfInstanceIdIsSet = false;
}
std::string InitAuthReq::getHxrfInitAuthUri() const
{
    return m_HxrfInitAuthUri;
}
void InitAuthReq::setHxrfInitAuthUri(std::string const& value)
{
    m_HxrfInitAuthUri = value;
    m_HxrfInitAuthUriIsSet = true;
}
bool InitAuthReq::hxrfInitAuthUriIsSet() const
{
    return m_HxrfInitAuthUriIsSet;
}
void InitAuthReq::unsetHxrfInitAuthUri()
{
    m_HxrfInitAuthUriIsSet = false;
}


} // namespace xrf::model


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
/*
 * InitAuthReq.h
 *
 * Contains information related to the initial authentication request
 */

#ifndef InitAuthReq_H_
#define InitAuthReq_H_


#include <string>
#include <nlohmann/json.hpp>

namespace xrf::model
{

/// <summary>
/// Contains information related to the initial authentication request
/// </summary>
class  InitAuthReq
{
public:
    InitAuthReq();
    virtual ~InitAuthReq() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const InitAuthReq& rhs) const;
    bool operator!=(const InitAuthReq& rhs) const;

    /////////////////////////////////////////////
    /// InitAuthReq members

    /// <summary>
    /// 
    /// </summary>
    std::string getCertificate() const;
    void setCertificate(std::string const& value);
    bool certificateIsSet() const;
    void unsetCertificate();
    /// <summary>
    /// Universal Unique Identifier (UUID) specific to the xApp
    /// </summary>
    std::string getNfInstanceId() const;
    void setNfInstanceId(std::string const& value);
    bool nfInstanceIdIsSet() const;
    void unsetNfInstanceId();
    /// <summary>
    /// URI formatted string
    /// </summary>
    std::string getHxrfInitAuthUri() const;
    void setHxrfInitAuthUri(std::string const& value);
    bool hxrfInitAuthUriIsSet() const;
    void unsetHxrfInitAuthUri();

    friend void to_json(nlohmann::json& j, const InitAuthReq& o);
    friend void from_json(const nlohmann::json& j, InitAuthReq& o);
protected:
    std::string m_Certificate;
    bool m_CertificateIsSet;
    std::string m_NfInstanceId;
    bool m_NfInstanceIdIsSet;
    std::string m_HxrfInitAuthUri;
    bool m_HxrfInitAuthUriIsSet;
    
};

} // namespace xrf::model

#endif /* InitAuthReq_H_ */

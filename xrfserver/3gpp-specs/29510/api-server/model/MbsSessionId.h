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
/*
 * MbsSessionId.h
 *
 * MBS Session Identifier
 */

#ifndef MbsSessionId_H_
#define MbsSessionId_H_


#include "Ssm.h"
#include <string>
#include "Tmgi.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// MBS Session Identifier
/// </summary>
class  MbsSessionId
{
public:
    MbsSessionId();
    virtual ~MbsSessionId() = default;


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

    bool operator==(const MbsSessionId& rhs) const;
    bool operator!=(const MbsSessionId& rhs) const;

    /////////////////////////////////////////////
    /// MbsSessionId members

    /// <summary>
    /// 
    /// </summary>
    Tmgi getTmgi() const;
    void setTmgi(Tmgi const& value);
    bool tmgiIsSet() const;
    void unsetTmgi();
    /// <summary>
    /// 
    /// </summary>
    Ssm getSsm() const;
    void setSsm(Ssm const& value);
    bool ssmIsSet() const;
    void unsetSsm();
    /// <summary>
    /// This represents the Network Identifier, which together with a PLMN ID is used to identify an SNPN (see 3GPP TS 23.003 and 3GPP TS 23.501 clause 5.30.2.1).
    /// </summary>
    std::string getNid() const;
    void setNid(std::string const& value);
    bool nidIsSet() const;
    void unsetNid();

    friend void to_json(nlohmann::json& j, const MbsSessionId& o);
    friend void from_json(const nlohmann::json& j, MbsSessionId& o);
protected:
    Tmgi m_Tmgi;
    bool m_TmgiIsSet;
    Ssm m_Ssm;
    bool m_SsmIsSet;
    std::string m_Nid;
    bool m_NidIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* MbsSessionId_H_ */
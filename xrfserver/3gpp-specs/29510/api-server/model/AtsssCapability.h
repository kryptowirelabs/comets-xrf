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
 * AtsssCapability.h
 *
 * Containes Capability to support procedures related to Access Traffic Steering, Switching, Splitting.
 */

#ifndef AtsssCapability_H_
#define AtsssCapability_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Containes Capability to support procedures related to Access Traffic Steering, Switching, Splitting.
/// </summary>
class  AtsssCapability
{
public:
    AtsssCapability();
    virtual ~AtsssCapability() = default;


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

    bool operator==(const AtsssCapability& rhs) const;
    bool operator!=(const AtsssCapability& rhs) const;

    /////////////////////////////////////////////
    /// AtsssCapability members

    /// <summary>
    /// Indicates the ATSSS-LL capability to support procedures related to Access Traffic Steering, Switching, Splitting (see clauses 4.2.10, 5.32 of 3GPP TS 23.501) true: Supported false (default): Not Supported 
    /// </summary>
    bool isAtsssLL() const;
    void setAtsssLL(bool const value);
    bool atsssLLIsSet() const;
    void unsetAtsssLL();
    /// <summary>
    /// Indicates the MPTCP capability to support procedures related to Access Traffic Steering, Switching, Splitting (see clauses 4.2.10, 5.32 of 3GPP TS 23.501 true: Supported false (default): Not Supported 
    /// </summary>
    bool isMptcp() const;
    void setMptcp(bool const value);
    bool mptcpIsSet() const;
    void unsetMptcp();
    /// <summary>
    /// This IE is only used by the UPF to indicate whether the UPF supports RTT measurement without PMF (see clauses 5.32.2, 6.3.3.3 of 3GPP TS 23.501 true: Supported false (default): Not Supported 
    /// </summary>
    bool isRttWithoutPmf() const;
    void setRttWithoutPmf(bool const value);
    bool rttWithoutPmfIsSet() const;
    void unsetRttWithoutPmf();

    friend void to_json(nlohmann::json& j, const AtsssCapability& o);
    friend void from_json(const nlohmann::json& j, AtsssCapability& o);
protected:
    bool m_AtsssLL;
    bool m_AtsssLLIsSet;
    bool m_Mptcp;
    bool m_MptcpIsSet;
    bool m_RttWithoutPmf;
    bool m_RttWithoutPmfIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* AtsssCapability_H_ */

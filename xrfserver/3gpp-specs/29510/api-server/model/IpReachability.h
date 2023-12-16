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
 * IpReachability.h
 *
 * Indicates the type(s) of IP addresses reachable via an SCP
 */

#ifndef IpReachability_H_
#define IpReachability_H_


#include "IpReachability_anyOf.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Indicates the type(s) of IP addresses reachable via an SCP
/// </summary>
class  IpReachability
{
public:
    IpReachability();
    virtual ~IpReachability() = default;


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

    bool operator==(const IpReachability& rhs) const;
    bool operator!=(const IpReachability& rhs) const;

    /////////////////////////////////////////////
    /// IpReachability members


    IpReachability_anyOf getValue() const;
    void setValue(IpReachability_anyOf value);
    IpReachability_anyOf::eIpReachability_anyOf getEnumValue() const;
    void setEnumValue(IpReachability_anyOf::eIpReachability_anyOf value);
    friend void to_json(nlohmann::json& j, const IpReachability& o);
    friend void from_json(const nlohmann::json& j, IpReachability& o);
    friend void to_json(nlohmann::json& j, const IpReachability_anyOf& o);
    friend void from_json(const nlohmann::json& j, IpReachability_anyOf& o);
protected:
    IpReachability_anyOf m_value;
};

} // namespace org::openapitools::server::model

#endif /* IpReachability_H_ */

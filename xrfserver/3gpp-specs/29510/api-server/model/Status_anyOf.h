/**
* NRF Bootstrapping
* NRF Bootstrapping. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
*
* The version of the OpenAPI document: 1.1.0-alpha.3
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * Status_anyOf.h
 *
 * 
 */

#ifndef Status_anyOf_H_
#define Status_anyOf_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  Status_anyOf
{
public:
    Status_anyOf();
    virtual ~Status_anyOf() = default;

    enum class eStatus_anyOf {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    OPERATIVE, 
    NON_OPERATIVE
    };

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

    bool operator==(const Status_anyOf& rhs) const;
    bool operator!=(const Status_anyOf& rhs) const;

    /////////////////////////////////////////////
    /// Status_anyOf members

    Status_anyOf::eStatus_anyOf getValue() const;
    void setValue(Status_anyOf::eStatus_anyOf value);
    
    friend void to_json(nlohmann::json& j, const Status_anyOf& o);
    friend void from_json(const nlohmann::json& j, Status_anyOf& o);
protected:
    Status_anyOf::eStatus_anyOf m_value = Status_anyOf::eStatus_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* Status_anyOf_H_ */
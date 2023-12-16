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
 * NotificationType_anyOf.h
 *
 * 
 */

#ifndef NotificationType_anyOf_H_
#define NotificationType_anyOf_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  NotificationType_anyOf
{
public:
    NotificationType_anyOf();
    virtual ~NotificationType_anyOf() = default;

    enum class eNotificationType_anyOf {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    N1_MESSAGES, 
    N2_INFORMATION, 
    LOCATION_NOTIFICATION, 
    DATA_REMOVAL_NOTIFICATION, 
    DATA_CHANGE_NOTIFICATION, 
    LOCATION_UPDATE_NOTIFICATION, 
    NSSAA_REAUTH_NOTIFICATION, 
    NSSAA_REVOC_NOTIFICATION, 
    MATCH_INFO_NOTIFICATION
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

    bool operator==(const NotificationType_anyOf& rhs) const;
    bool operator!=(const NotificationType_anyOf& rhs) const;

    /////////////////////////////////////////////
    /// NotificationType_anyOf members

    NotificationType_anyOf::eNotificationType_anyOf getValue() const;
    void setValue(NotificationType_anyOf::eNotificationType_anyOf value);
    
    friend void to_json(nlohmann::json& j, const NotificationType_anyOf& o);
    friend void from_json(const nlohmann::json& j, NotificationType_anyOf& o);
protected:
    NotificationType_anyOf::eNotificationType_anyOf m_value = NotificationType_anyOf::eNotificationType_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* NotificationType_anyOf_H_ */
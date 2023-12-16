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
 * NotificationEventType.h
 *
 * Types of events sent in notifications from NRF to subscribed NF Instances
 */

#ifndef NotificationEventType_H_
#define NotificationEventType_H_


#include "NotificationEventType_anyOf.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Types of events sent in notifications from NRF to subscribed NF Instances
/// </summary>
class  NotificationEventType
{
public:
    NotificationEventType();
    virtual ~NotificationEventType() = default;


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

    bool operator==(const NotificationEventType& rhs) const;
    bool operator!=(const NotificationEventType& rhs) const;

    /////////////////////////////////////////////
    /// NotificationEventType members


    NotificationEventType_anyOf getValue() const;
    void setValue(NotificationEventType_anyOf value);
    NotificationEventType_anyOf::eNotificationEventType_anyOf getEnumValue() const;
    void setEnumValue(NotificationEventType_anyOf::eNotificationEventType_anyOf value);
    friend void to_json(nlohmann::json& j, const NotificationEventType& o);
    friend void from_json(const nlohmann::json& j, NotificationEventType& o);
    friend void to_json(nlohmann::json& j, const NotificationEventType_anyOf& o);
    friend void from_json(const nlohmann::json& j, NotificationEventType_anyOf& o);
protected:
    NotificationEventType_anyOf m_value;
};

} // namespace org::openapitools::server::model

#endif /* NotificationEventType_H_ */

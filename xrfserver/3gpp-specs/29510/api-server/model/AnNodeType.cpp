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


#include "AnNodeType.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AnNodeType::AnNodeType()
{
    
}

void AnNodeType::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AnNodeType::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AnNodeType::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AnNodeType" : pathPrefix;

    
    if (!m_value.validate(msg))
    {
        success = false;
    }
    return success;
}

bool AnNodeType::operator==(const AnNodeType& rhs) const
{
    return
    
    getValue() == rhs.getValue()
    ;
}

bool AnNodeType::operator!=(const AnNodeType& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AnNodeType& o)
{
    j = nlohmann::json();
    to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, AnNodeType& o)
{
    from_json(j, o.m_value);
}

AnNodeType_anyOf AnNodeType::getValue() const
{
    return m_value;
}

void AnNodeType::setValue(AnNodeType_anyOf value)
{
    m_value = value;
}

AnNodeType_anyOf::eAnNodeType_anyOf AnNodeType::getEnumValue() const
{
    return m_value.getValue();
}

void AnNodeType::setEnumValue(AnNodeType_anyOf::eAnNodeType_anyOf  value)
{
    m_value.setValue(value);
}

} // namespace org::openapitools::server::model


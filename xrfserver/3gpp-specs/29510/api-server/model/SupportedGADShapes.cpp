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


#include "SupportedGADShapes.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

SupportedGADShapes::SupportedGADShapes()
{
    
}

void SupportedGADShapes::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool SupportedGADShapes::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool SupportedGADShapes::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "SupportedGADShapes" : pathPrefix;

    
    if (!m_value.validate(msg))
    {
        success = false;
    }
    return success;
}

bool SupportedGADShapes::operator==(const SupportedGADShapes& rhs) const
{
    return
    
    getValue() == rhs.getValue()
    ;
}

bool SupportedGADShapes::operator!=(const SupportedGADShapes& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SupportedGADShapes& o)
{
    j = nlohmann::json();
    to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, SupportedGADShapes& o)
{
    from_json(j, o.m_value);
}

SupportedGADShapes_anyOf SupportedGADShapes::getValue() const
{
    return m_value;
}

void SupportedGADShapes::setValue(SupportedGADShapes_anyOf value)
{
    m_value = value;
}

SupportedGADShapes_anyOf::eSupportedGADShapes_anyOf SupportedGADShapes::getEnumValue() const
{
    return m_value.getValue();
}

void SupportedGADShapes::setEnumValue(SupportedGADShapes_anyOf::eSupportedGADShapes_anyOf  value)
{
    m_value.setValue(value);
}

} // namespace org::openapitools::server::model


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


#include "CollocatedNfType.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CollocatedNfType::CollocatedNfType()
{
    
}

void CollocatedNfType::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CollocatedNfType::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CollocatedNfType::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CollocatedNfType" : pathPrefix;

    
    if (!m_value.validate(msg))
    {
        success = false;
    }
    return success;
}

bool CollocatedNfType::operator==(const CollocatedNfType& rhs) const
{
    return
    
    getValue() == rhs.getValue()
    ;
}

bool CollocatedNfType::operator!=(const CollocatedNfType& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CollocatedNfType& o)
{
    j = nlohmann::json();
    to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, CollocatedNfType& o)
{
    from_json(j, o.m_value);
}

CollocatedNfType_anyOf CollocatedNfType::getValue() const
{
    return m_value;
}

void CollocatedNfType::setValue(CollocatedNfType_anyOf value)
{
    m_value = value;
}

CollocatedNfType_anyOf::eCollocatedNfType_anyOf CollocatedNfType::getEnumValue() const
{
    return m_value.getValue();
}

void CollocatedNfType::setEnumValue(CollocatedNfType_anyOf::eCollocatedNfType_anyOf  value)
{
    m_value.setValue(value);
}

} // namespace org::openapitools::server::model


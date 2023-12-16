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


#include "DataSetId.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

DataSetId::DataSetId()
{
    
}

void DataSetId::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool DataSetId::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool DataSetId::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "DataSetId" : pathPrefix;

    
    if (!m_value.validate(msg))
    {
        success = false;
    }
    return success;
}

bool DataSetId::operator==(const DataSetId& rhs) const
{
    return
    
    getValue() == rhs.getValue()
    ;
}

bool DataSetId::operator!=(const DataSetId& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const DataSetId& o)
{
    j = nlohmann::json();
    to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, DataSetId& o)
{
    from_json(j, o.m_value);
}

DataSetId_anyOf DataSetId::getValue() const
{
    return m_value;
}

void DataSetId::setValue(DataSetId_anyOf value)
{
    m_value = value;
}

DataSetId_anyOf::eDataSetId_anyOf DataSetId::getEnumValue() const
{
    return m_value.getValue();
}

void DataSetId::setEnumValue(DataSetId_anyOf::eDataSetId_anyOf  value)
{
    m_value.setValue(value);
}

} // namespace org::openapitools::server::model


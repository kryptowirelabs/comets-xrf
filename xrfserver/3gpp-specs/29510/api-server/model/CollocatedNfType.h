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
 * CollocatedNfType.h
 *
 * NF types for a collocated NF
 */

#ifndef CollocatedNfType_H_
#define CollocatedNfType_H_


#include "CollocatedNfType_anyOf.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// NF types for a collocated NF
/// </summary>
class  CollocatedNfType
{
public:
    CollocatedNfType();
    virtual ~CollocatedNfType() = default;


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

    bool operator==(const CollocatedNfType& rhs) const;
    bool operator!=(const CollocatedNfType& rhs) const;

    /////////////////////////////////////////////
    /// CollocatedNfType members


    CollocatedNfType_anyOf getValue() const;
    void setValue(CollocatedNfType_anyOf value);
    CollocatedNfType_anyOf::eCollocatedNfType_anyOf getEnumValue() const;
    void setEnumValue(CollocatedNfType_anyOf::eCollocatedNfType_anyOf value);
    friend void to_json(nlohmann::json& j, const CollocatedNfType& o);
    friend void from_json(const nlohmann::json& j, CollocatedNfType& o);
    friend void to_json(nlohmann::json& j, const CollocatedNfType_anyOf& o);
    friend void from_json(const nlohmann::json& j, CollocatedNfType_anyOf& o);
protected:
    CollocatedNfType_anyOf m_value;
};

} // namespace org::openapitools::server::model

#endif /* CollocatedNfType_H_ */
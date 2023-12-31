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
 * CollocatedNfInstance.h
 *
 * Information of an collocated NF Instance registered in the NRF
 */

#ifndef CollocatedNfInstance_H_
#define CollocatedNfInstance_H_


#include <string>
#include "CollocatedNfType.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Information of an collocated NF Instance registered in the NRF
/// </summary>
class  CollocatedNfInstance
{
public:
    CollocatedNfInstance();
    virtual ~CollocatedNfInstance() = default;


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

    bool operator==(const CollocatedNfInstance& rhs) const;
    bool operator!=(const CollocatedNfInstance& rhs) const;

    /////////////////////////////////////////////
    /// CollocatedNfInstance members

    /// <summary>
    /// String uniquely identifying a NF instance. The format of the NF Instance ID shall be a Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.
    /// </summary>
    std::string getNfInstanceId() const;
    void setNfInstanceId(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    CollocatedNfType getNfType() const;
    void setNfType(CollocatedNfType const& value);

    friend void to_json(nlohmann::json& j, const CollocatedNfInstance& o);
    friend void from_json(const nlohmann::json& j, CollocatedNfInstance& o);
protected:
    std::string m_NfInstanceId;

    CollocatedNfType m_NfType;

    
};

} // namespace org::openapitools::server::model

#endif /* CollocatedNfInstance_H_ */

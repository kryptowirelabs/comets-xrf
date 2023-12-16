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
 * Guami.h
 *
 * Globally Unique AMF Identifier constructed out of PLMN, Network and AMF identity.
 */

#ifndef Guami_H_
#define Guami_H_


#include "PlmnIdNid.h"
#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Globally Unique AMF Identifier constructed out of PLMN, Network and AMF identity.
/// </summary>
class  Guami
{
public:
    Guami();
    virtual ~Guami() = default;


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

    bool operator==(const Guami& rhs) const;
    bool operator!=(const Guami& rhs) const;

    /////////////////////////////////////////////
    /// Guami members

    /// <summary>
    /// 
    /// </summary>
    PlmnIdNid getPlmnId() const;
    void setPlmnId(PlmnIdNid const& value);
    /// <summary>
    /// String identifying the AMF ID composed of AMF Region ID (8 bits), AMF Set ID (10 bits) and AMF Pointer (6 bits) as specified in clause 2.10.1 of 3GPP TS 23.003. It is encoded as a string of 6 hexadecimal characters (i.e., 24 bits)
    /// </summary>
    std::string getAmfId() const;
    void setAmfId(std::string const& value);

    friend void to_json(nlohmann::json& j, const Guami& o);
    friend void from_json(const nlohmann::json& j, Guami& o);
protected:
    PlmnIdNid m_PlmnId;

    std::string m_AmfId;

    
};

} // namespace org::openapitools::server::model

#endif /* Guami_H_ */

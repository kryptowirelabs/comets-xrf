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
 * Snssai.h
 *
 * When Snssai needs to be converted to string (e.g. when used in maps as key), the string shall be composed of one to three digits \&quot;sst\&quot; optionally followed by \&quot;-\&quot; and 6 hexadecimal digits \&quot;sd\&quot;.
 */

#ifndef Snssai_H_
#define Snssai_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// When Snssai needs to be converted to string (e.g. when used in maps as key), the string shall be composed of one to three digits \&quot;sst\&quot; optionally followed by \&quot;-\&quot; and 6 hexadecimal digits \&quot;sd\&quot;.
/// </summary>
class  Snssai
{
public:
    Snssai();
    virtual ~Snssai() = default;


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

    bool operator==(const Snssai& rhs) const;
    bool operator!=(const Snssai& rhs) const;

    /////////////////////////////////////////////
    /// Snssai members

    /// <summary>
    /// Unsigned integer, within the range 0 to 255, representing the Slice/Service Type. It indicates the expected Network Slice behaviour in terms of features and services.  Values 0 to 127 correspond to the standardized SST range. Values 128 to 255 correspond to the Operator-specific range. See clause 28.4.2 of 3GPP TS 23.003.  Standardized values are defined in clause 5.15.2.2 of 3GPP TS 23.501. 
    /// </summary>
    int32_t getSst() const;
    void setSst(int32_t const value);
    /// <summary>
    /// 3-octet string, representing the Slice Differentiator, in hexadecimal representation. Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;, \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent 4 bits. The most significant character representing the 4 most significant bits of the SD shall appear first in the string, and the character representing the 4 least significant bit of the SD shall appear last in the string.  This is an optional parameter that complements the Slice/Service type(s) to allow to differentiate amongst multiple Network Slices of the same Slice/Service type. This IE shall be absent if no SD value is associated with the SST. 
    /// </summary>
    std::string getSd() const;
    void setSd(std::string const& value);
    bool sdIsSet() const;
    void unsetSd();

    friend void to_json(nlohmann::json& j, const Snssai& o);
    friend void from_json(const nlohmann::json& j, Snssai& o);
protected:
    int32_t m_Sst;

    std::string m_Sd;
    bool m_SdIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* Snssai_H_ */

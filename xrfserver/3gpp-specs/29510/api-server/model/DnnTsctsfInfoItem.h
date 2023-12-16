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
 * DnnTsctsfInfoItem.h
 *
 * Parameters supported by an TSCTSF for a given DNN
 */

#ifndef DnnTsctsfInfoItem_H_
#define DnnTsctsfInfoItem_H_


#include "AnyOfstringstring.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Parameters supported by an TSCTSF for a given DNN
/// </summary>
class  DnnTsctsfInfoItem
{
public:
    DnnTsctsfInfoItem();
    virtual ~DnnTsctsfInfoItem() = default;


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

    bool operator==(const DnnTsctsfInfoItem& rhs) const;
    bool operator!=(const DnnTsctsfInfoItem& rhs) const;

    /////////////////////////////////////////////
    /// DnnTsctsfInfoItem members

    /// <summary>
    /// 
    /// </summary>
    AnyOfstringstring getDnn() const;
    void setDnn(AnyOfstringstring const& value);

    friend void to_json(nlohmann::json& j, const DnnTsctsfInfoItem& o);
    friend void from_json(const nlohmann::json& j, DnnTsctsfInfoItem& o);
protected:
    AnyOfstringstring m_Dnn;

    
};

} // namespace org::openapitools::server::model

#endif /* DnnTsctsfInfoItem_H_ */

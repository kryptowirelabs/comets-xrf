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
 * SnssaiTsctsfInfoItem.h
 *
 * Set of parameters supported by TSCTSF for a given S-NSSAI
 */

#ifndef SnssaiTsctsfInfoItem_H_
#define SnssaiTsctsfInfoItem_H_


#include "ExtSnssai.h"
#include "DnnTsctsfInfoItem.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Set of parameters supported by TSCTSF for a given S-NSSAI
/// </summary>
class  SnssaiTsctsfInfoItem
{
public:
    SnssaiTsctsfInfoItem();
    virtual ~SnssaiTsctsfInfoItem() = default;


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

    bool operator==(const SnssaiTsctsfInfoItem& rhs) const;
    bool operator!=(const SnssaiTsctsfInfoItem& rhs) const;

    /////////////////////////////////////////////
    /// SnssaiTsctsfInfoItem members

    /// <summary>
    /// 
    /// </summary>
    ExtSnssai getSNssai() const;
    void setSNssai(ExtSnssai const& value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<DnnTsctsfInfoItem> getDnnInfoList() const;
    void setDnnInfoList(std::vector<DnnTsctsfInfoItem> const& value);

    friend void to_json(nlohmann::json& j, const SnssaiTsctsfInfoItem& o);
    friend void from_json(const nlohmann::json& j, SnssaiTsctsfInfoItem& o);
protected:
    ExtSnssai m_SNssai;

    std::vector<DnnTsctsfInfoItem> m_DnnInfoList;

    
};

} // namespace org::openapitools::server::model

#endif /* SnssaiTsctsfInfoItem_H_ */

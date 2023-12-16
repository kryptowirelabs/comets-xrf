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
 * AfSliceDnn.h
 *
 * AF specific Slices and Dnns
 */

#ifndef AfSliceDnn_H_
#define AfSliceDnn_H_


#include <string>
#include "SnssaiInfoItem.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// AF specific Slices and Dnns
/// </summary>
class  AfSliceDnn
{
public:
    AfSliceDnn();
    virtual ~AfSliceDnn() = default;


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

    bool operator==(const AfSliceDnn& rhs) const;
    bool operator!=(const AfSliceDnn& rhs) const;

    /////////////////////////////////////////////
    /// AfSliceDnn members

    /// <summary>
    /// 
    /// </summary>
    std::string getAfId() const;
    void setAfId(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<SnssaiInfoItem> getSNssaiInfoList() const;
    void setSNssaiInfoList(std::vector<SnssaiInfoItem> const& value);
    bool sNssaiInfoListIsSet() const;
    void unsetSNssaiInfoList();

    friend void to_json(nlohmann::json& j, const AfSliceDnn& o);
    friend void from_json(const nlohmann::json& j, AfSliceDnn& o);
protected:
    std::string m_AfId;

    std::vector<SnssaiInfoItem> m_SNssaiInfoList;
    bool m_SNssaiInfoListIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* AfSliceDnn_H_ */
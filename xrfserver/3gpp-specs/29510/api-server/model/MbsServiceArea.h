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
 * MbsServiceArea.h
 *
 * MBS Service Area
 */

#ifndef MbsServiceArea_H_
#define MbsServiceArea_H_


#include "NcgiTai.h"
#include "Tai.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// MBS Service Area
/// </summary>
class  MbsServiceArea
{
public:
    MbsServiceArea();
    virtual ~MbsServiceArea() = default;


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

    bool operator==(const MbsServiceArea& rhs) const;
    bool operator!=(const MbsServiceArea& rhs) const;

    /////////////////////////////////////////////
    /// MbsServiceArea members

    /// <summary>
    /// List of NR cell Ids
    /// </summary>
    std::vector<NcgiTai> getNcgiList() const;
    void setNcgiList(std::vector<NcgiTai> const& value);
    bool ncgiListIsSet() const;
    void unsetNcgiList();
    /// <summary>
    /// List of tracking area Ids
    /// </summary>
    std::vector<Tai> getTaiList() const;
    void setTaiList(std::vector<Tai> const& value);
    bool taiListIsSet() const;
    void unsetTaiList();

    friend void to_json(nlohmann::json& j, const MbsServiceArea& o);
    friend void from_json(const nlohmann::json& j, MbsServiceArea& o);
protected:
    std::vector<NcgiTai> m_NcgiList;
    bool m_NcgiListIsSet;
    std::vector<Tai> m_TaiList;
    bool m_TaiListIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* MbsServiceArea_H_ */
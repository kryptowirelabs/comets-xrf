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
 * NefInfo.h
 *
 * Information of an NEF NF Instance
 */

#ifndef NefInfo_H_
#define NefInfo_H_


#include "AfSliceDnn.h"
#include "IdentityRange.h"
#include "PfdData.h"
#include "Tai.h"
#include <string>
#include "AfEventExposureData.h"
#include "TaiRange.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Information of an NEF NF Instance
/// </summary>
class  NefInfo
{
public:
    NefInfo();
    virtual ~NefInfo() = default;


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

    bool operator==(const NefInfo& rhs) const;
    bool operator!=(const NefInfo& rhs) const;

    /////////////////////////////////////////////
    /// NefInfo members

    /// <summary>
    /// Identity of the NEF
    /// </summary>
    std::string getNefId() const;
    void setNefId(std::string const& value);
    bool nefIdIsSet() const;
    void unsetNefId();
    /// <summary>
    /// 
    /// </summary>
    PfdData getPfdData() const;
    void setPfdData(PfdData const& value);
    bool pfdDataIsSet() const;
    void unsetPfdData();
    /// <summary>
    /// 
    /// </summary>
    AfEventExposureData getAfEeData() const;
    void setAfEeData(AfEventExposureData const& value);
    bool afEeDataIsSet() const;
    void unsetAfEeData();
    /// <summary>
    /// 
    /// </summary>
    std::vector<IdentityRange> getGpsiRanges() const;
    void setGpsiRanges(std::vector<IdentityRange> const& value);
    bool gpsiRangesIsSet() const;
    void unsetGpsiRanges();
    /// <summary>
    /// 
    /// </summary>
    std::vector<IdentityRange> getExternalGroupIdentifiersRanges() const;
    void setExternalGroupIdentifiersRanges(std::vector<IdentityRange> const& value);
    bool externalGroupIdentifiersRangesIsSet() const;
    void unsetExternalGroupIdentifiersRanges();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string> getServedFqdnList() const;
    void setServedFqdnList(std::vector<std::string> const& value);
    bool servedFqdnListIsSet() const;
    void unsetServedFqdnList();
    /// <summary>
    /// 
    /// </summary>
    std::vector<Tai> getTaiList() const;
    void setTaiList(std::vector<Tai> const& value);
    bool taiListIsSet() const;
    void unsetTaiList();
    /// <summary>
    /// 
    /// </summary>
    std::vector<TaiRange> getTaiRangeList() const;
    void setTaiRangeList(std::vector<TaiRange> const& value);
    bool taiRangeListIsSet() const;
    void unsetTaiRangeList();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string> getDnaiList() const;
    void setDnaiList(std::vector<std::string> const& value);
    bool dnaiListIsSet() const;
    void unsetDnaiList();
    /// <summary>
    /// 
    /// </summary>
    std::vector<AfSliceDnn> getAfSliceDnnList() const;
    void setAfSliceDnnList(std::vector<AfSliceDnn> const& value);
    bool afSliceDnnListIsSet() const;
    void unsetAfSliceDnnList();

    friend void to_json(nlohmann::json& j, const NefInfo& o);
    friend void from_json(const nlohmann::json& j, NefInfo& o);
protected:
    std::string m_NefId;
    bool m_NefIdIsSet;
    PfdData m_PfdData;
    bool m_PfdDataIsSet;
    AfEventExposureData m_AfEeData;
    bool m_AfEeDataIsSet;
    std::vector<IdentityRange> m_GpsiRanges;
    bool m_GpsiRangesIsSet;
    std::vector<IdentityRange> m_ExternalGroupIdentifiersRanges;
    bool m_ExternalGroupIdentifiersRangesIsSet;
    std::vector<std::string> m_ServedFqdnList;
    bool m_ServedFqdnListIsSet;
    std::vector<Tai> m_TaiList;
    bool m_TaiListIsSet;
    std::vector<TaiRange> m_TaiRangeList;
    bool m_TaiRangeListIsSet;
    std::vector<std::string> m_DnaiList;
    bool m_DnaiListIsSet;
    std::vector<AfSliceDnn> m_AfSliceDnnList;
    bool m_AfSliceDnnListIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* NefInfo_H_ */

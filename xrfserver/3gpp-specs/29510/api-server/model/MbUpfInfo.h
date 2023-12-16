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
 * MbUpfInfo.h
 *
 * Information of an MB-UPF NF Instance
 */

#ifndef MbUpfInfo_H_
#define MbUpfInfo_H_


#include "Tai.h"
#include "InterfaceUpfInfoItem.h"
#include "SnssaiUpfInfoItem.h"
#include <string>
#include "TaiRange.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Information of an MB-UPF NF Instance
/// </summary>
class  MbUpfInfo
{
public:
    MbUpfInfo();
    virtual ~MbUpfInfo() = default;


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

    bool operator==(const MbUpfInfo& rhs) const;
    bool operator!=(const MbUpfInfo& rhs) const;

    /////////////////////////////////////////////
    /// MbUpfInfo members

    /// <summary>
    /// 
    /// </summary>
    std::vector<SnssaiUpfInfoItem> getSNssaiMbUpfInfoList() const;
    void setSNssaiMbUpfInfoList(std::vector<SnssaiUpfInfoItem> const& value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string> getMbSmfServingArea() const;
    void setMbSmfServingArea(std::vector<std::string> const& value);
    bool mbSmfServingAreaIsSet() const;
    void unsetMbSmfServingArea();
    /// <summary>
    /// 
    /// </summary>
    std::vector<InterfaceUpfInfoItem> getInterfaceMbUpfInfoList() const;
    void setInterfaceMbUpfInfoList(std::vector<InterfaceUpfInfoItem> const& value);
    bool interfaceMbUpfInfoListIsSet() const;
    void unsetInterfaceMbUpfInfoList();
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
    int32_t getPriority() const;
    void setPriority(int32_t const value);
    bool priorityIsSet() const;
    void unsetPriority();
    /// <summary>
    /// 
    /// </summary>
    std::string getSupportedPfcpFeatures() const;
    void setSupportedPfcpFeatures(std::string const& value);
    bool supportedPfcpFeaturesIsSet() const;
    void unsetSupportedPfcpFeatures();

    friend void to_json(nlohmann::json& j, const MbUpfInfo& o);
    friend void from_json(const nlohmann::json& j, MbUpfInfo& o);
protected:
    std::vector<SnssaiUpfInfoItem> m_SNssaiMbUpfInfoList;

    std::vector<std::string> m_MbSmfServingArea;
    bool m_MbSmfServingAreaIsSet;
    std::vector<InterfaceUpfInfoItem> m_InterfaceMbUpfInfoList;
    bool m_InterfaceMbUpfInfoListIsSet;
    std::vector<Tai> m_TaiList;
    bool m_TaiListIsSet;
    std::vector<TaiRange> m_TaiRangeList;
    bool m_TaiRangeListIsSet;
    int32_t m_Priority;
    bool m_PriorityIsSet;
    std::string m_SupportedPfcpFeatures;
    bool m_SupportedPfcpFeaturesIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* MbUpfInfo_H_ */

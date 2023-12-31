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
 * BsfInfo.h
 *
 * Information of a BSF NF Instance
 */

#ifndef BsfInfo_H_
#define BsfInfo_H_


#include "IdentityRange.h"
#include "SupiRange.h"
#include <string>
#include "Ipv4AddressRange.h"
#include <vector>
#include "Ipv6PrefixRange.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Information of a BSF NF Instance
/// </summary>
class  BsfInfo
{
public:
    BsfInfo();
    virtual ~BsfInfo() = default;


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

    bool operator==(const BsfInfo& rhs) const;
    bool operator!=(const BsfInfo& rhs) const;

    /////////////////////////////////////////////
    /// BsfInfo members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string> getDnnList() const;
    void setDnnList(std::vector<std::string> const& value);
    bool dnnListIsSet() const;
    void unsetDnnList();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string> getIpDomainList() const;
    void setIpDomainList(std::vector<std::string> const& value);
    bool ipDomainListIsSet() const;
    void unsetIpDomainList();
    /// <summary>
    /// 
    /// </summary>
    std::vector<Ipv4AddressRange> getIpv4AddressRanges() const;
    void setIpv4AddressRanges(std::vector<Ipv4AddressRange> const& value);
    bool ipv4AddressRangesIsSet() const;
    void unsetIpv4AddressRanges();
    /// <summary>
    /// 
    /// </summary>
    std::vector<Ipv6PrefixRange> getIpv6PrefixRanges() const;
    void setIpv6PrefixRanges(std::vector<Ipv6PrefixRange> const& value);
    bool ipv6PrefixRangesIsSet() const;
    void unsetIpv6PrefixRanges();
    /// <summary>
    /// string containing an FQDN or realm as defined in RFC 6733.
    /// </summary>
    std::string getRxDiamHost() const;
    void setRxDiamHost(std::string const& value);
    bool rxDiamHostIsSet() const;
    void unsetRxDiamHost();
    /// <summary>
    /// string containing an FQDN or realm as defined in RFC 6733.
    /// </summary>
    std::string getRxDiamRealm() const;
    void setRxDiamRealm(std::string const& value);
    bool rxDiamRealmIsSet() const;
    void unsetRxDiamRealm();
    /// <summary>
    /// Identifier of a group of NFs.
    /// </summary>
    std::string getGroupId() const;
    void setGroupId(std::string const& value);
    bool groupIdIsSet() const;
    void unsetGroupId();
    /// <summary>
    /// 
    /// </summary>
    std::vector<SupiRange> getSupiRanges() const;
    void setSupiRanges(std::vector<SupiRange> const& value);
    bool supiRangesIsSet() const;
    void unsetSupiRanges();
    /// <summary>
    /// 
    /// </summary>
    std::vector<IdentityRange> getGpsiRanges() const;
    void setGpsiRanges(std::vector<IdentityRange> const& value);
    bool gpsiRangesIsSet() const;
    void unsetGpsiRanges();

    friend void to_json(nlohmann::json& j, const BsfInfo& o);
    friend void from_json(const nlohmann::json& j, BsfInfo& o);
protected:
    std::vector<std::string> m_DnnList;
    bool m_DnnListIsSet;
    std::vector<std::string> m_IpDomainList;
    bool m_IpDomainListIsSet;
    std::vector<Ipv4AddressRange> m_Ipv4AddressRanges;
    bool m_Ipv4AddressRangesIsSet;
    std::vector<Ipv6PrefixRange> m_Ipv6PrefixRanges;
    bool m_Ipv6PrefixRangesIsSet;
    std::string m_RxDiamHost;
    bool m_RxDiamHostIsSet;
    std::string m_RxDiamRealm;
    bool m_RxDiamRealmIsSet;
    std::string m_GroupId;
    bool m_GroupIdIsSet;
    std::vector<SupiRange> m_SupiRanges;
    bool m_SupiRangesIsSet;
    std::vector<IdentityRange> m_GpsiRanges;
    bool m_GpsiRangesIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* BsfInfo_H_ */

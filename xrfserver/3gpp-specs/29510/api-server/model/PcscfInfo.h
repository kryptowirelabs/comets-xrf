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
 * PcscfInfo.h
 *
 * Information of a P-CSCF NF Instance
 */

#ifndef PcscfInfo_H_
#define PcscfInfo_H_


#include <string>
#include "Ipv4AddressRange.h"
#include "Ipv6Addr.h"
#include <vector>
#include "AccessType.h"
#include "Ipv6PrefixRange.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Information of a P-CSCF NF Instance
/// </summary>
class  PcscfInfo
{
public:
    PcscfInfo();
    virtual ~PcscfInfo() = default;


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

    bool operator==(const PcscfInfo& rhs) const;
    bool operator!=(const PcscfInfo& rhs) const;

    /////////////////////////////////////////////
    /// PcscfInfo members

    /// <summary>
    /// 
    /// </summary>
    std::vector<AccessType> getAccessType() const;
    void setAccessType(std::vector<AccessType> const& value);
    bool accessTypeIsSet() const;
    void unsetAccessType();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string> getDnnList() const;
    void setDnnList(std::vector<std::string> const& value);
    bool dnnListIsSet() const;
    void unsetDnnList();
    /// <summary>
    /// Fully Qualified Domain Name
    /// </summary>
    std::string getGmFqdn() const;
    void setGmFqdn(std::string const& value);
    bool gmFqdnIsSet() const;
    void unsetGmFqdn();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string> getGmIpv4Addresses() const;
    void setGmIpv4Addresses(std::vector<std::string> const& value);
    bool gmIpv4AddressesIsSet() const;
    void unsetGmIpv4Addresses();
    /// <summary>
    /// 
    /// </summary>
    std::vector<Ipv6Addr> getGmIpv6Addresses() const;
    void setGmIpv6Addresses(std::vector<Ipv6Addr> const& value);
    bool gmIpv6AddressesIsSet() const;
    void unsetGmIpv6Addresses();
    /// <summary>
    /// 
    /// </summary>
    std::vector<Ipv4AddressRange> getServedIpv4AddressRanges() const;
    void setServedIpv4AddressRanges(std::vector<Ipv4AddressRange> const& value);
    bool servedIpv4AddressRangesIsSet() const;
    void unsetServedIpv4AddressRanges();
    /// <summary>
    /// 
    /// </summary>
    std::vector<Ipv6PrefixRange> getServedIpv6PrefixRanges() const;
    void setServedIpv6PrefixRanges(std::vector<Ipv6PrefixRange> const& value);
    bool servedIpv6PrefixRangesIsSet() const;
    void unsetServedIpv6PrefixRanges();

    friend void to_json(nlohmann::json& j, const PcscfInfo& o);
    friend void from_json(const nlohmann::json& j, PcscfInfo& o);
protected:
    std::vector<AccessType> m_AccessType;
    bool m_AccessTypeIsSet;
    std::vector<std::string> m_DnnList;
    bool m_DnnListIsSet;
    std::string m_GmFqdn;
    bool m_GmFqdnIsSet;
    std::vector<std::string> m_GmIpv4Addresses;
    bool m_GmIpv4AddressesIsSet;
    std::vector<Ipv6Addr> m_GmIpv6Addresses;
    bool m_GmIpv6AddressesIsSet;
    std::vector<Ipv4AddressRange> m_ServedIpv4AddressRanges;
    bool m_ServedIpv4AddressRangesIsSet;
    std::vector<Ipv6PrefixRange> m_ServedIpv6PrefixRanges;
    bool m_ServedIpv6PrefixRangesIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* PcscfInfo_H_ */

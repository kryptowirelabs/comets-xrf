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
 * N2InterfaceAmfInfo.h
 *
 * AMF N2 interface information
 */

#ifndef N2InterfaceAmfInfo_H_
#define N2InterfaceAmfInfo_H_


#include <string>
#include "Ipv6Addr.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// AMF N2 interface information
/// </summary>
class  N2InterfaceAmfInfo
{
public:
    N2InterfaceAmfInfo();
    virtual ~N2InterfaceAmfInfo() = default;


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

    bool operator==(const N2InterfaceAmfInfo& rhs) const;
    bool operator!=(const N2InterfaceAmfInfo& rhs) const;

    /////////////////////////////////////////////
    /// N2InterfaceAmfInfo members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string> getIpv4EndpointAddress() const;
    void setIpv4EndpointAddress(std::vector<std::string> const& value);
    bool ipv4EndpointAddressIsSet() const;
    void unsetIpv4EndpointAddress();
    /// <summary>
    /// 
    /// </summary>
    std::vector<Ipv6Addr> getIpv6EndpointAddress() const;
    void setIpv6EndpointAddress(std::vector<Ipv6Addr> const& value);
    bool ipv6EndpointAddressIsSet() const;
    void unsetIpv6EndpointAddress();
    /// <summary>
    /// FQDN (Fully Qualified Domain Name) of the AMF as defined in clause 28.3.2.5 of 3GPP TS 23.003
    /// </summary>
    std::string getAmfName() const;
    void setAmfName(std::string const& value);
    bool amfNameIsSet() const;
    void unsetAmfName();

    friend void to_json(nlohmann::json& j, const N2InterfaceAmfInfo& o);
    friend void from_json(const nlohmann::json& j, N2InterfaceAmfInfo& o);
protected:
    std::vector<std::string> m_Ipv4EndpointAddress;
    bool m_Ipv4EndpointAddressIsSet;
    std::vector<Ipv6Addr> m_Ipv6EndpointAddress;
    bool m_Ipv6EndpointAddressIsSet;
    std::string m_AmfName;
    bool m_AmfNameIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* N2InterfaceAmfInfo_H_ */

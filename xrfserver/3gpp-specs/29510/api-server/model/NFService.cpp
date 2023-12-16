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


#include "NFService.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

NFService::NFService()
{
    m_ServiceInstanceId = "";
    m_Fqdn = "";
    m_FqdnIsSet = false;
    m_InterPlmnFqdn = "";
    m_InterPlmnFqdnIsSet = false;
    m_IpEndPointsIsSet = false;
    m_ApiPrefix = "";
    m_ApiPrefixIsSet = false;
    m_DefaultNotificationSubscriptionsIsSet = false;
    m_AllowedPlmnsIsSet = false;
    m_AllowedSnpnsIsSet = false;
    m_AllowedNfTypesIsSet = false;
    m_AllowedNfDomainsIsSet = false;
    m_AllowedNssaisIsSet = false;
    m_AllowedOperationsPerNfTypeIsSet = false;
    m_AllowedOperationsPerNfInstanceIsSet = false;
    m_Priority = 0;
    m_PriorityIsSet = false;
    m_Capacity = 0;
    m_CapacityIsSet = false;
    m_Load = 0;
    m_LoadIsSet = false;
    m_LoadTimeStamp = "";
    m_LoadTimeStampIsSet = false;
    m_RecoveryTime = "";
    m_RecoveryTimeIsSet = false;
    m_SupportedFeatures = "";
    m_SupportedFeaturesIsSet = false;
    m_NfServiceSetIdListIsSet = false;
    m_SNssaisIsSet = false;
    m_PerPlmnSnssaiListIsSet = false;
    m_VendorId = "";
    m_VendorIdIsSet = false;
    m_SupportedVendorSpecificFeaturesIsSet = false;
    m_Oauth2Required = false;
    m_Oauth2RequiredIsSet = false;
    m_PerPlmnOauth2ReqListIsSet = false;
    
}

void NFService::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool NFService::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool NFService::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "NFService" : pathPrefix;

                 
    
    /* Versions */ {
        const std::vector<NFServiceVersion>& value = m_Versions;
        const std::string currentValuePath = _pathPrefix + ".versions";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const NFServiceVersion& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".versions") && success;
 
                i++;
            }
        }

    }
                         
    if (ipEndPointsIsSet())
    {
        const std::vector<IpEndPoint>& value = m_IpEndPoints;
        const std::string currentValuePath = _pathPrefix + ".ipEndPoints";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const IpEndPoint& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".ipEndPoints") && success;
 
                i++;
            }
        }

    }
             
    if (defaultNotificationSubscriptionsIsSet())
    {
        const std::vector<DefaultNotificationSubscription>& value = m_DefaultNotificationSubscriptions;
        const std::string currentValuePath = _pathPrefix + ".defaultNotificationSubscriptions";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const DefaultNotificationSubscription& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".defaultNotificationSubscriptions") && success;
 
                i++;
            }
        }

    }
         
    if (allowedPlmnsIsSet())
    {
        const std::vector<PlmnId>& value = m_AllowedPlmns;
        const std::string currentValuePath = _pathPrefix + ".allowedPlmns";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const PlmnId& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".allowedPlmns") && success;
 
                i++;
            }
        }

    }
         
    if (allowedSnpnsIsSet())
    {
        const std::vector<PlmnIdNid>& value = m_AllowedSnpns;
        const std::string currentValuePath = _pathPrefix + ".allowedSnpns";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const PlmnIdNid& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".allowedSnpns") && success;
 
                i++;
            }
        }

    }
         
    if (allowedNfTypesIsSet())
    {
        const std::vector<NFType>& value = m_AllowedNfTypes;
        const std::string currentValuePath = _pathPrefix + ".allowedNfTypes";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const NFType& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".allowedNfTypes") && success;
 
                i++;
            }
        }

    }
         
    if (allowedNfDomainsIsSet())
    {
        const std::vector<std::string>& value = m_AllowedNfDomains;
        const std::string currentValuePath = _pathPrefix + ".allowedNfDomains";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
         
    if (allowedNssaisIsSet())
    {
        const std::vector<ExtSnssai>& value = m_AllowedNssais;
        const std::string currentValuePath = _pathPrefix + ".allowedNssais";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const ExtSnssai& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".allowedNssais") && success;
 
                i++;
            }
        }

    }
         
    if (allowedOperationsPerNfTypeIsSet())
    {
        const std::map<std::string, std::vector<std::string>>& value = m_AllowedOperationsPerNfType;
        const std::string currentValuePath = _pathPrefix + ".allowedOperationsPerNfType";
                
        

    }
         
    if (allowedOperationsPerNfInstanceIsSet())
    {
        const std::map<std::string, std::vector<std::string>>& value = m_AllowedOperationsPerNfInstance;
        const std::string currentValuePath = _pathPrefix + ".allowedOperationsPerNfInstance";
                
        

    }
         
    if (priorityIsSet())
    {
        const int32_t& value = m_Priority;
        const std::string currentValuePath = _pathPrefix + ".priority";
                
        
        if (value < 0)
        {
            success = false;
            msg << currentValuePath << ": must be greater than or equal to 0;";
        }
        if (value > 65535)
        {
            success = false;
            msg << currentValuePath << ": must be less than or equal to 65535;";
        }

    }
         
    if (capacityIsSet())
    {
        const int32_t& value = m_Capacity;
        const std::string currentValuePath = _pathPrefix + ".capacity";
                
        
        if (value < 0)
        {
            success = false;
            msg << currentValuePath << ": must be greater than or equal to 0;";
        }
        if (value > 65535)
        {
            success = false;
            msg << currentValuePath << ": must be less than or equal to 65535;";
        }

    }
         
    if (loadIsSet())
    {
        const int32_t& value = m_Load;
        const std::string currentValuePath = _pathPrefix + ".load";
                
        
        if (value < 0)
        {
            success = false;
            msg << currentValuePath << ": must be greater than or equal to 0;";
        }
        if (value > 100)
        {
            success = false;
            msg << currentValuePath << ": must be less than or equal to 100;";
        }

    }
                 
    if (supportedFeaturesIsSet())
    {
        const std::string& value = m_SupportedFeatures;
        const std::string currentValuePath = _pathPrefix + ".supportedFeatures";
                
        

    }
         
    if (nfServiceSetIdListIsSet())
    {
        const std::vector<std::string>& value = m_NfServiceSetIdList;
        const std::string currentValuePath = _pathPrefix + ".nfServiceSetIdList";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
         
    if (sNssaisIsSet())
    {
        const std::vector<ExtSnssai>& value = m_SNssais;
        const std::string currentValuePath = _pathPrefix + ".sNssais";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const ExtSnssai& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".sNssais") && success;
 
                i++;
            }
        }

    }
         
    if (perPlmnSnssaiListIsSet())
    {
        const std::vector<PlmnSnssai>& value = m_PerPlmnSnssaiList;
        const std::string currentValuePath = _pathPrefix + ".perPlmnSnssaiList";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const PlmnSnssai& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".perPlmnSnssaiList") && success;
 
                i++;
            }
        }

    }
         
    if (vendorIdIsSet())
    {
        const std::string& value = m_VendorId;
        const std::string currentValuePath = _pathPrefix + ".vendorId";
                
        

    }
         
    if (supportedVendorSpecificFeaturesIsSet())
    {
        const std::map<std::string, std::vector<VendorSpecificFeature>>& value = m_SupportedVendorSpecificFeatures;
        const std::string currentValuePath = _pathPrefix + ".supportedVendorSpecificFeatures";
                
        

    }
            
    return success;
}

bool NFService::operator==(const NFService& rhs) const
{
    return
    
    
    (getServiceInstanceId() == rhs.getServiceInstanceId())
     &&
    
    (getServiceName() == rhs.getServiceName())
     &&
    
    (getVersions() == rhs.getVersions())
     &&
    
    (getScheme() == rhs.getScheme())
     &&
    
    (getNfServiceStatus() == rhs.getNfServiceStatus())
     &&
    
    
    ((!fqdnIsSet() && !rhs.fqdnIsSet()) || (fqdnIsSet() && rhs.fqdnIsSet() && getFqdn() == rhs.getFqdn())) &&
    
    
    ((!interPlmnFqdnIsSet() && !rhs.interPlmnFqdnIsSet()) || (interPlmnFqdnIsSet() && rhs.interPlmnFqdnIsSet() && getInterPlmnFqdn() == rhs.getInterPlmnFqdn())) &&
    
    
    ((!ipEndPointsIsSet() && !rhs.ipEndPointsIsSet()) || (ipEndPointsIsSet() && rhs.ipEndPointsIsSet() && getIpEndPoints() == rhs.getIpEndPoints())) &&
    
    
    ((!apiPrefixIsSet() && !rhs.apiPrefixIsSet()) || (apiPrefixIsSet() && rhs.apiPrefixIsSet() && getApiPrefix() == rhs.getApiPrefix())) &&
    
    
    ((!defaultNotificationSubscriptionsIsSet() && !rhs.defaultNotificationSubscriptionsIsSet()) || (defaultNotificationSubscriptionsIsSet() && rhs.defaultNotificationSubscriptionsIsSet() && getDefaultNotificationSubscriptions() == rhs.getDefaultNotificationSubscriptions())) &&
    
    
    ((!allowedPlmnsIsSet() && !rhs.allowedPlmnsIsSet()) || (allowedPlmnsIsSet() && rhs.allowedPlmnsIsSet() && getAllowedPlmns() == rhs.getAllowedPlmns())) &&
    
    
    ((!allowedSnpnsIsSet() && !rhs.allowedSnpnsIsSet()) || (allowedSnpnsIsSet() && rhs.allowedSnpnsIsSet() && getAllowedSnpns() == rhs.getAllowedSnpns())) &&
    
    
    ((!allowedNfTypesIsSet() && !rhs.allowedNfTypesIsSet()) || (allowedNfTypesIsSet() && rhs.allowedNfTypesIsSet() && getAllowedNfTypes() == rhs.getAllowedNfTypes())) &&
    
    
    ((!allowedNfDomainsIsSet() && !rhs.allowedNfDomainsIsSet()) || (allowedNfDomainsIsSet() && rhs.allowedNfDomainsIsSet() && getAllowedNfDomains() == rhs.getAllowedNfDomains())) &&
    
    
    ((!allowedNssaisIsSet() && !rhs.allowedNssaisIsSet()) || (allowedNssaisIsSet() && rhs.allowedNssaisIsSet() && getAllowedNssais() == rhs.getAllowedNssais())) &&
    
    
    ((!allowedOperationsPerNfTypeIsSet() && !rhs.allowedOperationsPerNfTypeIsSet()) || (allowedOperationsPerNfTypeIsSet() && rhs.allowedOperationsPerNfTypeIsSet() && getAllowedOperationsPerNfType() == rhs.getAllowedOperationsPerNfType())) &&
    
    
    ((!allowedOperationsPerNfInstanceIsSet() && !rhs.allowedOperationsPerNfInstanceIsSet()) || (allowedOperationsPerNfInstanceIsSet() && rhs.allowedOperationsPerNfInstanceIsSet() && getAllowedOperationsPerNfInstance() == rhs.getAllowedOperationsPerNfInstance())) &&
    
    
    ((!priorityIsSet() && !rhs.priorityIsSet()) || (priorityIsSet() && rhs.priorityIsSet() && getPriority() == rhs.getPriority())) &&
    
    
    ((!capacityIsSet() && !rhs.capacityIsSet()) || (capacityIsSet() && rhs.capacityIsSet() && getCapacity() == rhs.getCapacity())) &&
    
    
    ((!loadIsSet() && !rhs.loadIsSet()) || (loadIsSet() && rhs.loadIsSet() && getLoad() == rhs.getLoad())) &&
    
    
    ((!loadTimeStampIsSet() && !rhs.loadTimeStampIsSet()) || (loadTimeStampIsSet() && rhs.loadTimeStampIsSet() && getLoadTimeStamp() == rhs.getLoadTimeStamp())) &&
    
    
    ((!recoveryTimeIsSet() && !rhs.recoveryTimeIsSet()) || (recoveryTimeIsSet() && rhs.recoveryTimeIsSet() && getRecoveryTime() == rhs.getRecoveryTime())) &&
    
    
    ((!supportedFeaturesIsSet() && !rhs.supportedFeaturesIsSet()) || (supportedFeaturesIsSet() && rhs.supportedFeaturesIsSet() && getSupportedFeatures() == rhs.getSupportedFeatures())) &&
    
    
    ((!nfServiceSetIdListIsSet() && !rhs.nfServiceSetIdListIsSet()) || (nfServiceSetIdListIsSet() && rhs.nfServiceSetIdListIsSet() && getNfServiceSetIdList() == rhs.getNfServiceSetIdList())) &&
    
    
    ((!sNssaisIsSet() && !rhs.sNssaisIsSet()) || (sNssaisIsSet() && rhs.sNssaisIsSet() && getSNssais() == rhs.getSNssais())) &&
    
    
    ((!perPlmnSnssaiListIsSet() && !rhs.perPlmnSnssaiListIsSet()) || (perPlmnSnssaiListIsSet() && rhs.perPlmnSnssaiListIsSet() && getPerPlmnSnssaiList() == rhs.getPerPlmnSnssaiList())) &&
    
    
    ((!vendorIdIsSet() && !rhs.vendorIdIsSet()) || (vendorIdIsSet() && rhs.vendorIdIsSet() && getVendorId() == rhs.getVendorId())) &&
    
    
    ((!supportedVendorSpecificFeaturesIsSet() && !rhs.supportedVendorSpecificFeaturesIsSet()) || (supportedVendorSpecificFeaturesIsSet() && rhs.supportedVendorSpecificFeaturesIsSet() && getSupportedVendorSpecificFeatures() == rhs.getSupportedVendorSpecificFeatures())) &&
    
    
    ((!oauth2RequiredIsSet() && !rhs.oauth2RequiredIsSet()) || (oauth2RequiredIsSet() && rhs.oauth2RequiredIsSet() && isOauth2Required() == rhs.isOauth2Required())) &&
    
    
    ((!perPlmnOauth2ReqListIsSet() && !rhs.perPlmnOauth2ReqListIsSet()) || (perPlmnOauth2ReqListIsSet() && rhs.perPlmnOauth2ReqListIsSet() && getPerPlmnOauth2ReqList() == rhs.getPerPlmnOauth2ReqList()))
    
    ;
}

bool NFService::operator!=(const NFService& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const NFService& o)
{
    j = nlohmann::json();
    j["serviceInstanceId"] = o.m_ServiceInstanceId;
    j["serviceName"] = o.m_ServiceName;
    j["versions"] = o.m_Versions;
    j["scheme"] = o.m_Scheme;
    j["nfServiceStatus"] = o.m_NfServiceStatus;
    if(o.fqdnIsSet())
        j["fqdn"] = o.m_Fqdn;
    if(o.interPlmnFqdnIsSet())
        j["interPlmnFqdn"] = o.m_InterPlmnFqdn;
    if(o.ipEndPointsIsSet() || !o.m_IpEndPoints.empty())
        j["ipEndPoints"] = o.m_IpEndPoints;
    if(o.apiPrefixIsSet())
        j["apiPrefix"] = o.m_ApiPrefix;
    if(o.defaultNotificationSubscriptionsIsSet() || !o.m_DefaultNotificationSubscriptions.empty())
        j["defaultNotificationSubscriptions"] = o.m_DefaultNotificationSubscriptions;
    if(o.allowedPlmnsIsSet() || !o.m_AllowedPlmns.empty())
        j["allowedPlmns"] = o.m_AllowedPlmns;
    if(o.allowedSnpnsIsSet() || !o.m_AllowedSnpns.empty())
        j["allowedSnpns"] = o.m_AllowedSnpns;
    if(o.allowedNfTypesIsSet() || !o.m_AllowedNfTypes.empty())
        j["allowedNfTypes"] = o.m_AllowedNfTypes;
    if(o.allowedNfDomainsIsSet() || !o.m_AllowedNfDomains.empty())
        j["allowedNfDomains"] = o.m_AllowedNfDomains;
    if(o.allowedNssaisIsSet() || !o.m_AllowedNssais.empty())
        j["allowedNssais"] = o.m_AllowedNssais;
    if(o.allowedOperationsPerNfTypeIsSet() || !o.m_AllowedOperationsPerNfType.empty())
        j["allowedOperationsPerNfType"] = o.m_AllowedOperationsPerNfType;
    if(o.allowedOperationsPerNfInstanceIsSet() || !o.m_AllowedOperationsPerNfInstance.empty())
        j["allowedOperationsPerNfInstance"] = o.m_AllowedOperationsPerNfInstance;
    if(o.priorityIsSet())
        j["priority"] = o.m_Priority;
    if(o.capacityIsSet())
        j["capacity"] = o.m_Capacity;
    if(o.loadIsSet())
        j["load"] = o.m_Load;
    if(o.loadTimeStampIsSet())
        j["loadTimeStamp"] = o.m_LoadTimeStamp;
    if(o.recoveryTimeIsSet())
        j["recoveryTime"] = o.m_RecoveryTime;
    if(o.supportedFeaturesIsSet())
        j["supportedFeatures"] = o.m_SupportedFeatures;
    if(o.nfServiceSetIdListIsSet() || !o.m_NfServiceSetIdList.empty())
        j["nfServiceSetIdList"] = o.m_NfServiceSetIdList;
    if(o.sNssaisIsSet() || !o.m_SNssais.empty())
        j["sNssais"] = o.m_SNssais;
    if(o.perPlmnSnssaiListIsSet() || !o.m_PerPlmnSnssaiList.empty())
        j["perPlmnSnssaiList"] = o.m_PerPlmnSnssaiList;
    if(o.vendorIdIsSet())
        j["vendorId"] = o.m_VendorId;
    if(o.supportedVendorSpecificFeaturesIsSet() || !o.m_SupportedVendorSpecificFeatures.empty())
        j["supportedVendorSpecificFeatures"] = o.m_SupportedVendorSpecificFeatures;
    if(o.oauth2RequiredIsSet())
        j["oauth2Required"] = o.m_Oauth2Required;
    if(o.perPlmnOauth2ReqListIsSet())
        j["perPlmnOauth2ReqList"] = o.m_PerPlmnOauth2ReqList;
    
}

void from_json(const nlohmann::json& j, NFService& o)
{
    j.at("serviceInstanceId").get_to(o.m_ServiceInstanceId);
    j.at("serviceName").get_to(o.m_ServiceName);
    j.at("versions").get_to(o.m_Versions);
    j.at("scheme").get_to(o.m_Scheme);
    j.at("nfServiceStatus").get_to(o.m_NfServiceStatus);
    if(j.find("fqdn") != j.end())
    {
        j.at("fqdn").get_to(o.m_Fqdn);
        o.m_FqdnIsSet = true;
    } 
    if(j.find("interPlmnFqdn") != j.end())
    {
        j.at("interPlmnFqdn").get_to(o.m_InterPlmnFqdn);
        o.m_InterPlmnFqdnIsSet = true;
    } 
    if(j.find("ipEndPoints") != j.end())
    {
        j.at("ipEndPoints").get_to(o.m_IpEndPoints);
        o.m_IpEndPointsIsSet = true;
    } 
    if(j.find("apiPrefix") != j.end())
    {
        j.at("apiPrefix").get_to(o.m_ApiPrefix);
        o.m_ApiPrefixIsSet = true;
    } 
    if(j.find("defaultNotificationSubscriptions") != j.end())
    {
        j.at("defaultNotificationSubscriptions").get_to(o.m_DefaultNotificationSubscriptions);
        o.m_DefaultNotificationSubscriptionsIsSet = true;
    } 
    if(j.find("allowedPlmns") != j.end())
    {
        j.at("allowedPlmns").get_to(o.m_AllowedPlmns);
        o.m_AllowedPlmnsIsSet = true;
    } 
    if(j.find("allowedSnpns") != j.end())
    {
        j.at("allowedSnpns").get_to(o.m_AllowedSnpns);
        o.m_AllowedSnpnsIsSet = true;
    } 
    if(j.find("allowedNfTypes") != j.end())
    {
        j.at("allowedNfTypes").get_to(o.m_AllowedNfTypes);
        o.m_AllowedNfTypesIsSet = true;
    } 
    if(j.find("allowedNfDomains") != j.end())
    {
        j.at("allowedNfDomains").get_to(o.m_AllowedNfDomains);
        o.m_AllowedNfDomainsIsSet = true;
    } 
    if(j.find("allowedNssais") != j.end())
    {
        j.at("allowedNssais").get_to(o.m_AllowedNssais);
        o.m_AllowedNssaisIsSet = true;
    } 
    if(j.find("allowedOperationsPerNfType") != j.end())
    {
        j.at("allowedOperationsPerNfType").get_to(o.m_AllowedOperationsPerNfType);
        o.m_AllowedOperationsPerNfTypeIsSet = true;
    } 
    if(j.find("allowedOperationsPerNfInstance") != j.end())
    {
        j.at("allowedOperationsPerNfInstance").get_to(o.m_AllowedOperationsPerNfInstance);
        o.m_AllowedOperationsPerNfInstanceIsSet = true;
    } 
    if(j.find("priority") != j.end())
    {
        j.at("priority").get_to(o.m_Priority);
        o.m_PriorityIsSet = true;
    } 
    if(j.find("capacity") != j.end())
    {
        j.at("capacity").get_to(o.m_Capacity);
        o.m_CapacityIsSet = true;
    } 
    if(j.find("load") != j.end())
    {
        j.at("load").get_to(o.m_Load);
        o.m_LoadIsSet = true;
    } 
    if(j.find("loadTimeStamp") != j.end())
    {
        j.at("loadTimeStamp").get_to(o.m_LoadTimeStamp);
        o.m_LoadTimeStampIsSet = true;
    } 
    if(j.find("recoveryTime") != j.end())
    {
        j.at("recoveryTime").get_to(o.m_RecoveryTime);
        o.m_RecoveryTimeIsSet = true;
    } 
    if(j.find("supportedFeatures") != j.end())
    {
        j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
        o.m_SupportedFeaturesIsSet = true;
    } 
    if(j.find("nfServiceSetIdList") != j.end())
    {
        j.at("nfServiceSetIdList").get_to(o.m_NfServiceSetIdList);
        o.m_NfServiceSetIdListIsSet = true;
    } 
    if(j.find("sNssais") != j.end())
    {
        j.at("sNssais").get_to(o.m_SNssais);
        o.m_SNssaisIsSet = true;
    } 
    if(j.find("perPlmnSnssaiList") != j.end())
    {
        j.at("perPlmnSnssaiList").get_to(o.m_PerPlmnSnssaiList);
        o.m_PerPlmnSnssaiListIsSet = true;
    } 
    if(j.find("vendorId") != j.end())
    {
        j.at("vendorId").get_to(o.m_VendorId);
        o.m_VendorIdIsSet = true;
    } 
    if(j.find("supportedVendorSpecificFeatures") != j.end())
    {
        j.at("supportedVendorSpecificFeatures").get_to(o.m_SupportedVendorSpecificFeatures);
        o.m_SupportedVendorSpecificFeaturesIsSet = true;
    } 
    if(j.find("oauth2Required") != j.end())
    {
        j.at("oauth2Required").get_to(o.m_Oauth2Required);
        o.m_Oauth2RequiredIsSet = true;
    } 
    if(j.find("perPlmnOauth2ReqList") != j.end())
    {
        j.at("perPlmnOauth2ReqList").get_to(o.m_PerPlmnOauth2ReqList);
        o.m_PerPlmnOauth2ReqListIsSet = true;
    } 
    
}

std::string NFService::getServiceInstanceId() const
{
    return m_ServiceInstanceId;
}
void NFService::setServiceInstanceId(std::string const& value)
{
    m_ServiceInstanceId = value;
}
ServiceName NFService::getServiceName() const
{
    return m_ServiceName;
}
void NFService::setServiceName(ServiceName const& value)
{
    m_ServiceName = value;
}
std::vector<NFServiceVersion> NFService::getVersions() const
{
    return m_Versions;
}
void NFService::setVersions(std::vector<NFServiceVersion> const& value)
{
    m_Versions = value;
}
UriScheme NFService::getScheme() const
{
    return m_Scheme;
}
void NFService::setScheme(UriScheme const& value)
{
    m_Scheme = value;
}
NFServiceStatus NFService::getNfServiceStatus() const
{
    return m_NfServiceStatus;
}
void NFService::setNfServiceStatus(NFServiceStatus const& value)
{
    m_NfServiceStatus = value;
}
std::string NFService::getFqdn() const
{
    return m_Fqdn;
}
void NFService::setFqdn(std::string const& value)
{
    m_Fqdn = value;
    m_FqdnIsSet = true;
}
bool NFService::fqdnIsSet() const
{
    return m_FqdnIsSet;
}
void NFService::unsetFqdn()
{
    m_FqdnIsSet = false;
}
std::string NFService::getInterPlmnFqdn() const
{
    return m_InterPlmnFqdn;
}
void NFService::setInterPlmnFqdn(std::string const& value)
{
    m_InterPlmnFqdn = value;
    m_InterPlmnFqdnIsSet = true;
}
bool NFService::interPlmnFqdnIsSet() const
{
    return m_InterPlmnFqdnIsSet;
}
void NFService::unsetInterPlmnFqdn()
{
    m_InterPlmnFqdnIsSet = false;
}
std::vector<IpEndPoint> NFService::getIpEndPoints() const
{
    return m_IpEndPoints;
}
void NFService::setIpEndPoints(std::vector<IpEndPoint> const& value)
{
    m_IpEndPoints = value;
    m_IpEndPointsIsSet = true;
}
bool NFService::ipEndPointsIsSet() const
{
    return m_IpEndPointsIsSet;
}
void NFService::unsetIpEndPoints()
{
    m_IpEndPointsIsSet = false;
}
std::string NFService::getApiPrefix() const
{
    return m_ApiPrefix;
}
void NFService::setApiPrefix(std::string const& value)
{
    m_ApiPrefix = value;
    m_ApiPrefixIsSet = true;
}
bool NFService::apiPrefixIsSet() const
{
    return m_ApiPrefixIsSet;
}
void NFService::unsetApiPrefix()
{
    m_ApiPrefixIsSet = false;
}
std::vector<DefaultNotificationSubscription> NFService::getDefaultNotificationSubscriptions() const
{
    return m_DefaultNotificationSubscriptions;
}
void NFService::setDefaultNotificationSubscriptions(std::vector<DefaultNotificationSubscription> const& value)
{
    m_DefaultNotificationSubscriptions = value;
    m_DefaultNotificationSubscriptionsIsSet = true;
}
bool NFService::defaultNotificationSubscriptionsIsSet() const
{
    return m_DefaultNotificationSubscriptionsIsSet;
}
void NFService::unsetDefaultNotificationSubscriptions()
{
    m_DefaultNotificationSubscriptionsIsSet = false;
}
std::vector<PlmnId> NFService::getAllowedPlmns() const
{
    return m_AllowedPlmns;
}
void NFService::setAllowedPlmns(std::vector<PlmnId> const& value)
{
    m_AllowedPlmns = value;
    m_AllowedPlmnsIsSet = true;
}
bool NFService::allowedPlmnsIsSet() const
{
    return m_AllowedPlmnsIsSet;
}
void NFService::unsetAllowedPlmns()
{
    m_AllowedPlmnsIsSet = false;
}
std::vector<PlmnIdNid> NFService::getAllowedSnpns() const
{
    return m_AllowedSnpns;
}
void NFService::setAllowedSnpns(std::vector<PlmnIdNid> const& value)
{
    m_AllowedSnpns = value;
    m_AllowedSnpnsIsSet = true;
}
bool NFService::allowedSnpnsIsSet() const
{
    return m_AllowedSnpnsIsSet;
}
void NFService::unsetAllowedSnpns()
{
    m_AllowedSnpnsIsSet = false;
}
std::vector<NFType> NFService::getAllowedNfTypes() const
{
    return m_AllowedNfTypes;
}
void NFService::setAllowedNfTypes(std::vector<NFType> const& value)
{
    m_AllowedNfTypes = value;
    m_AllowedNfTypesIsSet = true;
}
bool NFService::allowedNfTypesIsSet() const
{
    return m_AllowedNfTypesIsSet;
}
void NFService::unsetAllowedNfTypes()
{
    m_AllowedNfTypesIsSet = false;
}
std::vector<std::string> NFService::getAllowedNfDomains() const
{
    return m_AllowedNfDomains;
}
void NFService::setAllowedNfDomains(std::vector<std::string> const& value)
{
    m_AllowedNfDomains = value;
    m_AllowedNfDomainsIsSet = true;
}
bool NFService::allowedNfDomainsIsSet() const
{
    return m_AllowedNfDomainsIsSet;
}
void NFService::unsetAllowedNfDomains()
{
    m_AllowedNfDomainsIsSet = false;
}
std::vector<ExtSnssai> NFService::getAllowedNssais() const
{
    return m_AllowedNssais;
}
void NFService::setAllowedNssais(std::vector<ExtSnssai> const& value)
{
    m_AllowedNssais = value;
    m_AllowedNssaisIsSet = true;
}
bool NFService::allowedNssaisIsSet() const
{
    return m_AllowedNssaisIsSet;
}
void NFService::unsetAllowedNssais()
{
    m_AllowedNssaisIsSet = false;
}
std::map<std::string, std::vector<std::string>> NFService::getAllowedOperationsPerNfType() const
{
    return m_AllowedOperationsPerNfType;
}
void NFService::setAllowedOperationsPerNfType(std::map<std::string, std::vector<std::string>> const& value)
{
    m_AllowedOperationsPerNfType = value;
    m_AllowedOperationsPerNfTypeIsSet = true;
}
bool NFService::allowedOperationsPerNfTypeIsSet() const
{
    return m_AllowedOperationsPerNfTypeIsSet;
}
void NFService::unsetAllowedOperationsPerNfType()
{
    m_AllowedOperationsPerNfTypeIsSet = false;
}
std::map<std::string, std::vector<std::string>> NFService::getAllowedOperationsPerNfInstance() const
{
    return m_AllowedOperationsPerNfInstance;
}
void NFService::setAllowedOperationsPerNfInstance(std::map<std::string, std::vector<std::string>> const& value)
{
    m_AllowedOperationsPerNfInstance = value;
    m_AllowedOperationsPerNfInstanceIsSet = true;
}
bool NFService::allowedOperationsPerNfInstanceIsSet() const
{
    return m_AllowedOperationsPerNfInstanceIsSet;
}
void NFService::unsetAllowedOperationsPerNfInstance()
{
    m_AllowedOperationsPerNfInstanceIsSet = false;
}
int32_t NFService::getPriority() const
{
    return m_Priority;
}
void NFService::setPriority(int32_t const value)
{
    m_Priority = value;
    m_PriorityIsSet = true;
}
bool NFService::priorityIsSet() const
{
    return m_PriorityIsSet;
}
void NFService::unsetPriority()
{
    m_PriorityIsSet = false;
}
int32_t NFService::getCapacity() const
{
    return m_Capacity;
}
void NFService::setCapacity(int32_t const value)
{
    m_Capacity = value;
    m_CapacityIsSet = true;
}
bool NFService::capacityIsSet() const
{
    return m_CapacityIsSet;
}
void NFService::unsetCapacity()
{
    m_CapacityIsSet = false;
}
int32_t NFService::getLoad() const
{
    return m_Load;
}
void NFService::setLoad(int32_t const value)
{
    m_Load = value;
    m_LoadIsSet = true;
}
bool NFService::loadIsSet() const
{
    return m_LoadIsSet;
}
void NFService::unsetLoad()
{
    m_LoadIsSet = false;
}
std::string NFService::getLoadTimeStamp() const
{
    return m_LoadTimeStamp;
}
void NFService::setLoadTimeStamp(std::string const& value)
{
    m_LoadTimeStamp = value;
    m_LoadTimeStampIsSet = true;
}
bool NFService::loadTimeStampIsSet() const
{
    return m_LoadTimeStampIsSet;
}
void NFService::unsetLoadTimeStamp()
{
    m_LoadTimeStampIsSet = false;
}
std::string NFService::getRecoveryTime() const
{
    return m_RecoveryTime;
}
void NFService::setRecoveryTime(std::string const& value)
{
    m_RecoveryTime = value;
    m_RecoveryTimeIsSet = true;
}
bool NFService::recoveryTimeIsSet() const
{
    return m_RecoveryTimeIsSet;
}
void NFService::unsetRecoveryTime()
{
    m_RecoveryTimeIsSet = false;
}
std::string NFService::getSupportedFeatures() const
{
    return m_SupportedFeatures;
}
void NFService::setSupportedFeatures(std::string const& value)
{
    m_SupportedFeatures = value;
    m_SupportedFeaturesIsSet = true;
}
bool NFService::supportedFeaturesIsSet() const
{
    return m_SupportedFeaturesIsSet;
}
void NFService::unsetSupportedFeatures()
{
    m_SupportedFeaturesIsSet = false;
}
std::vector<std::string> NFService::getNfServiceSetIdList() const
{
    return m_NfServiceSetIdList;
}
void NFService::setNfServiceSetIdList(std::vector<std::string> const& value)
{
    m_NfServiceSetIdList = value;
    m_NfServiceSetIdListIsSet = true;
}
bool NFService::nfServiceSetIdListIsSet() const
{
    return m_NfServiceSetIdListIsSet;
}
void NFService::unsetNfServiceSetIdList()
{
    m_NfServiceSetIdListIsSet = false;
}
std::vector<ExtSnssai> NFService::getSNssais() const
{
    return m_SNssais;
}
void NFService::setSNssais(std::vector<ExtSnssai> const& value)
{
    m_SNssais = value;
    m_SNssaisIsSet = true;
}
bool NFService::sNssaisIsSet() const
{
    return m_SNssaisIsSet;
}
void NFService::unsetSNssais()
{
    m_SNssaisIsSet = false;
}
std::vector<PlmnSnssai> NFService::getPerPlmnSnssaiList() const
{
    return m_PerPlmnSnssaiList;
}
void NFService::setPerPlmnSnssaiList(std::vector<PlmnSnssai> const& value)
{
    m_PerPlmnSnssaiList = value;
    m_PerPlmnSnssaiListIsSet = true;
}
bool NFService::perPlmnSnssaiListIsSet() const
{
    return m_PerPlmnSnssaiListIsSet;
}
void NFService::unsetPerPlmnSnssaiList()
{
    m_PerPlmnSnssaiListIsSet = false;
}
std::string NFService::getVendorId() const
{
    return m_VendorId;
}
void NFService::setVendorId(std::string const& value)
{
    m_VendorId = value;
    m_VendorIdIsSet = true;
}
bool NFService::vendorIdIsSet() const
{
    return m_VendorIdIsSet;
}
void NFService::unsetVendorId()
{
    m_VendorIdIsSet = false;
}
std::map<std::string, std::vector<VendorSpecificFeature>> NFService::getSupportedVendorSpecificFeatures() const
{
    return m_SupportedVendorSpecificFeatures;
}
void NFService::setSupportedVendorSpecificFeatures(std::map<std::string, std::vector<VendorSpecificFeature>> const& value)
{
    m_SupportedVendorSpecificFeatures = value;
    m_SupportedVendorSpecificFeaturesIsSet = true;
}
bool NFService::supportedVendorSpecificFeaturesIsSet() const
{
    return m_SupportedVendorSpecificFeaturesIsSet;
}
void NFService::unsetSupportedVendorSpecificFeatures()
{
    m_SupportedVendorSpecificFeaturesIsSet = false;
}
bool NFService::isOauth2Required() const
{
    return m_Oauth2Required;
}
void NFService::setOauth2Required(bool const value)
{
    m_Oauth2Required = value;
    m_Oauth2RequiredIsSet = true;
}
bool NFService::oauth2RequiredIsSet() const
{
    return m_Oauth2RequiredIsSet;
}
void NFService::unsetOauth2Required()
{
    m_Oauth2RequiredIsSet = false;
}
PlmnOauth2 NFService::getPerPlmnOauth2ReqList() const
{
    return m_PerPlmnOauth2ReqList;
}
void NFService::setPerPlmnOauth2ReqList(PlmnOauth2 const& value)
{
    m_PerPlmnOauth2ReqList = value;
    m_PerPlmnOauth2ReqListIsSet = true;
}
bool NFService::perPlmnOauth2ReqListIsSet() const
{
    return m_PerPlmnOauth2ReqListIsSet;
}
void NFService::unsetPerPlmnOauth2ReqList()
{
    m_PerPlmnOauth2ReqListIsSet = false;
}


} // namespace org::openapitools::server::model

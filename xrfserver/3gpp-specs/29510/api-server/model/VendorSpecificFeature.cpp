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


#include "VendorSpecificFeature.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

VendorSpecificFeature::VendorSpecificFeature()
{
    m_FeatureName = "";
    m_FeatureVersion = "";
    
}

void VendorSpecificFeature::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool VendorSpecificFeature::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool VendorSpecificFeature::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "VendorSpecificFeature" : pathPrefix;

            
    return success;
}

bool VendorSpecificFeature::operator==(const VendorSpecificFeature& rhs) const
{
    return
    
    
    (getFeatureName() == rhs.getFeatureName())
     &&
    
    (getFeatureVersion() == rhs.getFeatureVersion())
    
    
    ;
}

bool VendorSpecificFeature::operator!=(const VendorSpecificFeature& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const VendorSpecificFeature& o)
{
    j = nlohmann::json();
    j["featureName"] = o.m_FeatureName;
    j["featureVersion"] = o.m_FeatureVersion;
    
}

void from_json(const nlohmann::json& j, VendorSpecificFeature& o)
{
    j.at("featureName").get_to(o.m_FeatureName);
    j.at("featureVersion").get_to(o.m_FeatureVersion);
    
}

std::string VendorSpecificFeature::getFeatureName() const
{
    return m_FeatureName;
}
void VendorSpecificFeature::setFeatureName(std::string const& value)
{
    m_FeatureName = value;
}
std::string VendorSpecificFeature::getFeatureVersion() const
{
    return m_FeatureVersion;
}
void VendorSpecificFeature::setFeatureVersion(std::string const& value)
{
    m_FeatureVersion = value;
}


} // namespace org::openapitools::server::model


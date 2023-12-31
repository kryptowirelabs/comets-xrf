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


#include "OptionsResponse.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

OptionsResponse::OptionsResponse()
{
    m_SupportedFeatures = "";
    m_SupportedFeaturesIsSet = false;
    
}

void OptionsResponse::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool OptionsResponse::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool OptionsResponse::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "OptionsResponse" : pathPrefix;

         
    if (supportedFeaturesIsSet())
    {
        const std::string& value = m_SupportedFeatures;
        const std::string currentValuePath = _pathPrefix + ".supportedFeatures";
                
        

    }
    
    return success;
}

bool OptionsResponse::operator==(const OptionsResponse& rhs) const
{
    return
    
    
    
    ((!supportedFeaturesIsSet() && !rhs.supportedFeaturesIsSet()) || (supportedFeaturesIsSet() && rhs.supportedFeaturesIsSet() && getSupportedFeatures() == rhs.getSupportedFeatures()))
    
    ;
}

bool OptionsResponse::operator!=(const OptionsResponse& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const OptionsResponse& o)
{
    j = nlohmann::json();
    if(o.supportedFeaturesIsSet())
        j["supportedFeatures"] = o.m_SupportedFeatures;
    
}

void from_json(const nlohmann::json& j, OptionsResponse& o)
{
    if(j.find("supportedFeatures") != j.end())
    {
        j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
        o.m_SupportedFeaturesIsSet = true;
    } 
    
}

std::string OptionsResponse::getSupportedFeatures() const
{
    return m_SupportedFeatures;
}
void OptionsResponse::setSupportedFeatures(std::string const& value)
{
    m_SupportedFeatures = value;
    m_SupportedFeaturesIsSet = true;
}
bool OptionsResponse::supportedFeaturesIsSet() const
{
    return m_SupportedFeaturesIsSet;
}
void OptionsResponse::unsetSupportedFeatures()
{
    m_SupportedFeaturesIsSet = false;
}


} // namespace org::openapitools::server::model


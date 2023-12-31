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


#include "MbsAreaSession.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

MbsAreaSession::MbsAreaSession()
{
    m_AreaSessionId = 0;
    
}

void MbsAreaSession::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool MbsAreaSession::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool MbsAreaSession::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "MbsAreaSession" : pathPrefix;

         
    
    /* AreaSessionId */ {
        const int32_t& value = m_AreaSessionId;
        const std::string currentValuePath = _pathPrefix + ".areaSessionId";
                
        
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
        
    return success;
}

bool MbsAreaSession::operator==(const MbsAreaSession& rhs) const
{
    return
    
    
    (getAreaSessionId() == rhs.getAreaSessionId())
     &&
    
    (getMbsServiceArea() == rhs.getMbsServiceArea())
    
    
    ;
}

bool MbsAreaSession::operator!=(const MbsAreaSession& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const MbsAreaSession& o)
{
    j = nlohmann::json();
    j["areaSessionId"] = o.m_AreaSessionId;
    j["mbsServiceArea"] = o.m_MbsServiceArea;
    
}

void from_json(const nlohmann::json& j, MbsAreaSession& o)
{
    j.at("areaSessionId").get_to(o.m_AreaSessionId);
    j.at("mbsServiceArea").get_to(o.m_MbsServiceArea);
    
}

int32_t MbsAreaSession::getAreaSessionId() const
{
    return m_AreaSessionId;
}
void MbsAreaSession::setAreaSessionId(int32_t const value)
{
    m_AreaSessionId = value;
}
MbsServiceArea MbsAreaSession::getMbsServiceArea() const
{
    return m_MbsServiceArea;
}
void MbsAreaSession::setMbsServiceArea(MbsServiceArea const& value)
{
    m_MbsServiceArea = value;
}


} // namespace org::openapitools::server::model


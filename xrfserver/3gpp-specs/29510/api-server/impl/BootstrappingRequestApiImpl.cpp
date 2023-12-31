/**
* NRF Bootstrapping
* NRF Bootstrapping. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
*
* The version of the OpenAPI document: 1.1.0-alpha.3
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

#include "BootstrappingRequestApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

BootstrappingRequestApiImpl::BootstrappingRequestApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : BootstrappingRequestApi(rtr)
{
}

void BootstrappingRequestApiImpl::bootstrapping_info_request(Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}


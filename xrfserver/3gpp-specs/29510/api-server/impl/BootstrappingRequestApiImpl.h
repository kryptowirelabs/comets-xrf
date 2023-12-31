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

/*
* BootstrappingRequestApiImpl.h
*
* 
*/

#ifndef BOOTSTRAPPING_REQUEST_API_IMPL_H_
#define BOOTSTRAPPING_REQUEST_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <BootstrappingRequestApi.h>

#include <pistache/optional.h>

#include "BootstrappingInfo.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::model;

class BootstrappingRequestApiImpl : public org::openapitools::server::api::BootstrappingRequestApi {
public:
    explicit BootstrappingRequestApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~BootstrappingRequestApiImpl() override = default;

    void bootstrapping_info_request(Pistache::Http::ResponseWriter &response);

};

} // namespace org::openapitools::server::api



#endif

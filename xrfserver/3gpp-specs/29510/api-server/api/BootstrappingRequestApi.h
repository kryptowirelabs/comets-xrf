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
 * BootstrappingRequestApi.h
 *
 * 
 */

#ifndef BootstrappingRequestApi_H_
#define BootstrappingRequestApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>

#include <utility>

#include "BootstrappingInfo.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"

namespace org::openapitools::server::api
{

class  BootstrappingRequestApi {
public:
    explicit BootstrappingRequestApi(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    virtual ~BootstrappingRequestApi() = default;
    void init();

    static const std::string base;

private:
    void setupRoutes();

    void bootstrapping_info_request_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void bootstrapping_request_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    const std::shared_ptr<Pistache::Rest::Router> router;

    /// <summary>
    /// Helper function to handle unexpected Exceptions during Parameter parsing and validation.
    /// May be overridden to return custom error formats. This is called inside a catch block.
    /// Important: When overriding, do not call `throw ex;`, but instead use `throw;`.
    /// </summary>
    virtual std::pair<Pistache::Http::Code, std::string> handleParsingException(const std::exception& ex) const noexcept;

    /// <summary>
    /// Helper function to handle unexpected Exceptions during processing of the request in handler functions.
    /// May be overridden to return custom error formats. This is called inside a catch block.
    /// Important: When overriding, do not call `throw ex;`, but instead use `throw;`.
    /// </summary>
    virtual std::pair<Pistache::Http::Code, std::string> handleOperationException(const std::exception& ex) const noexcept;

    /// <summary>
    /// Bootstrapping Info Request
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    virtual void bootstrapping_info_request(Pistache::Http::ResponseWriter &response) = 0;

};

} // namespace org::openapitools::server::api

#endif /* BootstrappingRequestApi_H_ */


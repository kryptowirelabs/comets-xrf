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
 * NFInstancesStoreApi.h
 *
 * 
 */

#ifndef NFInstancesStoreApi_H_
#define NFInstancesStoreApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>

#include <utility>

#include "NFType.h"
#include "OptionsResponse.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include "UriList.h"

namespace org::openapitools::server::api
{

class  NFInstancesStoreApi {
public:
    explicit NFInstancesStoreApi(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    virtual ~NFInstancesStoreApi() = default;
    void init();

    static const std::string base;

private:
    void setupRoutes();

    void get_nf_instances_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void options_nf_instances_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void nf_instances_store_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

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
    /// Retrieves a collection of NF Instances
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="nfType">Type of NF (optional, default to std::make_shared&lt;NFType&gt;())</param>
    /// <param name="limit">How many items to return at one time (optional, default to 0)</param>
    /// <param name="pageNumber">Page number where the response shall start (optional, default to 0)</param>
    /// <param name="pageSize">Maximum number of items in each returned page (optional, default to 0)</param>
    virtual void get_nf_instances(const org::openapitools::server::model::Pistache::Optional<NFType> &nfType, const Pistache::Optional<int32_t> &limit, const Pistache::Optional<int32_t> &pageNumber, const Pistache::Optional<int32_t> &pageSize, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// Discover communication options supported by NRF for NF Instances
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    virtual void options_nf_instances(Pistache::Http::ResponseWriter &response) = 0;

};

} // namespace org::openapitools::server::api

#endif /* NFInstancesStoreApi_H_ */


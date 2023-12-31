/**
* XRF OAuth2 Token Introspection Request API
* XRF OAuth2 Authorization server, token introspection API 
*
* The version of the OpenAPI document: 1
* Contact: tolgaoa@vt.edu
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * RequestJWKSAccessApi.h
 *
 * 
 */

#ifndef RequestJWKSAccessApi_H_
#define RequestJWKSAccessApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>

#include <utility>

#include "JWKSErr.h"
#include "JWKSKeyReq.h"
#include "JWKSKeyRsp.h"

#include "spdlog/spdlog.h"

namespace xrf::api
{

class  RequestJWKSAccessApi {
public:
    explicit RequestJWKSAccessApi(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    virtual ~RequestJWKSAccessApi() = default;
    void init();

    static const std::string base;

private:
    void setupRoutes();

    void j_wks_req_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void request_jwks_access_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

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
    /// Discover the set of xApp Instances offering a given service
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="keyid">key id in the header of JWT to be validated (optional, default to std::make_shared&lt;JWKSKeyReq&gt;())</param>
    virtual void j_wks_req(const Pistache::Optional<std::string>& keyid, Pistache::Http::ResponseWriter &response) = 0;

};

} // namespace xrf::api

#endif /* RequestJWKSAccessApi_H_ */


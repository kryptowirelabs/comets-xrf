/**
* XRFc Service test API
* XRFc service testing API 
*
* The version of the OpenAPI document: 1
* Contact: tolgaoa@vt.edu
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ServiceTestRequestApi.h
 *
 * 
 */

#ifndef ServiceTestRequestApi_H_
#define ServiceTestRequestApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/http_header.h>
#include <pistache/optional.h>

#include <utility>

#include "ServTestErr.h"
#include "ServTestReq.h"
#include "ServTestRsp.h"

#include "spdlog/spdlog.h"

namespace xrf::api
{

class  ServiceTestRequestApi {
public:
    explicit ServiceTestRequestApi(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    virtual ~ServiceTestRequestApi() = default;
    void init();

    static const std::string base;

private:
    void setupRoutes();

    void serv_test_req_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void service_test_request_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

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
    /// Service request test
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="servTestReq"></param>
    virtual void serv_test_req(const Pistache::Rest::Request &request, std::string& bearer, Pistache::Http::ResponseWriter &response) = 0;

};

} // namespace xrf::api

#endif /* ServiceTestRequestApi_H_ */


/**
* XRF OAuth2 xApp Discvoery API
* XRF OAuth2 Authorization server, xApp Discovery API 
*
* The version of the OpenAPI document: 1
* Contact: tolgaoa@vt.edu
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

#include "XAppDeleteInstanceApi.h"
#include "Helpers.h"

namespace xrf::api
{

using namespace xrf::helpers;
using namespace xrf::model;

const std::string XAppDeleteInstanceApi::base = "";

XAppDeleteInstanceApi::XAppDeleteInstanceApi(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : router(rtr)
{
}

void XAppDeleteInstanceApi::init() {
    setupRoutes();
}

void XAppDeleteInstanceApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Delete(*router, base + "/xapp/disc/:xAppInstanceId", Routes::bind(&XAppDeleteInstanceApi::deletex_app_instance_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&XAppDeleteInstanceApi::x_app_delete_instance_api_default_handler, this));
}

std::pair<Pistache::Http::Code, std::string> XAppDeleteInstanceApi::handleParsingException(const std::exception& ex) const noexcept
{
    try {
        throw;
    } catch (nlohmann::detail::exception &e) {
        return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
    } catch (xrf::helpers::ValidationException &e) {
        return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
    } catch (std::exception &e) {
        return std::make_pair(Pistache::Http::Code::Internal_Server_Error, e.what());
    }
}

std::pair<Pistache::Http::Code, std::string> XAppDeleteInstanceApi::handleOperationException(const std::exception& ex) const noexcept
{
    return std::make_pair(Pistache::Http::Code::Internal_Server_Error, ex.what());
}

void XAppDeleteInstanceApi::deletex_app_instance_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto xAppInstanceId = request.param(":xAppInstanceId").as<std::string>();
    
    try {
        this->deletex_app_instance(request, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}

void XAppDeleteInstanceApi::x_app_delete_instance_api_default_handler(const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

} // namespace xrf::api


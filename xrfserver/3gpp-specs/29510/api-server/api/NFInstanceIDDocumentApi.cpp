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

#include "NFInstanceIDDocumentApi.h"
#include "Helpers.h"

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

const std::string NFInstanceIDDocumentApi::base = "/nnrf-nfm/v1";

NFInstanceIDDocumentApi::NFInstanceIDDocumentApi(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : router(rtr)
{
}

void NFInstanceIDDocumentApi::init() {
    setupRoutes();
}

void NFInstanceIDDocumentApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Delete(*router, base + "/nf-instances/:nfInstanceID", Routes::bind(&NFInstanceIDDocumentApi::deregister_nf_instance_handler, this));
    Routes::Get(*router, base + "/nf-instances/:nfInstanceID", Routes::bind(&NFInstanceIDDocumentApi::get_nf_instance_handler, this));
    Routes::Put(*router, base + "/nf-instances/:nfInstanceID", Routes::bind(&NFInstanceIDDocumentApi::register_nf_instance_handler, this));
    Routes::Patch(*router, base + "/nf-instances/:nfInstanceID", Routes::bind(&NFInstanceIDDocumentApi::update_nf_instance_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&NFInstanceIDDocumentApi::nf_instance_id_document_api_default_handler, this));
}

std::pair<Pistache::Http::Code, std::string> NFInstanceIDDocumentApi::handleParsingException(const std::exception& ex) const noexcept
{
    try {
        throw;
    } catch (nlohmann::detail::exception &e) {
        return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
    } catch (org::openapitools::server::helpers::ValidationException &e) {
        return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
    } catch (std::exception &e) {
        return std::make_pair(Pistache::Http::Code::Internal_Server_Error, e.what());
    }
}

std::pair<Pistache::Http::Code, std::string> NFInstanceIDDocumentApi::handleOperationException(const std::exception& ex) const noexcept
{
    return std::make_pair(Pistache::Http::Code::Internal_Server_Error, ex.what());
}

void NFInstanceIDDocumentApi::deregister_nf_instance_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto nfInstanceID = request.param(":nfInstanceID").as<std::string>();
    
    try {
        this->deregister_nf_instance(nfInstanceID, response);
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
void NFInstanceIDDocumentApi::get_nf_instance_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto nfInstanceID = request.param(":nfInstanceID").as<std::string>();
    
    // Getting the query params
    auto requesterFeaturesQuery = request.query().get("requester-features");
    Pistache::Optional<std::string> requesterFeatures;
    if(!requesterFeaturesQuery.isEmpty()){
        std::string valueQuery_instance;
        if(fromStringValue(requesterFeaturesQuery.get(), valueQuery_instance)){
            requesterFeatures = Pistache::Some(valueQuery_instance);
        }
    }
    
    try {
        this->get_nf_instance(nfInstanceID, requesterFeatures, response);
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
void NFInstanceIDDocumentApi::register_nf_instance_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto nfInstanceID = request.param(":nfInstanceID").as<std::string>();
    
    // Getting the body param
    
    NFProfile nFProfile;
    
    // Getting the header params
    auto contentEncoding = request.headers().tryGetRaw("Content-Encoding");
    auto acceptEncoding = request.headers().tryGetRaw("Accept-Encoding");

    try {
        nlohmann::json::parse(request.body()).get_to(nFProfile);
        nFProfile.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->register_nf_instance(nfInstanceID, nFProfile, contentEncoding, acceptEncoding, response);
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
void NFInstanceIDDocumentApi::update_nf_instance_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto nfInstanceID = request.param(":nfInstanceID").as<std::string>();
    
    // Getting the body param
    std::vector<PatchItem> patchItem;
    
    // Getting the header params
    auto contentEncoding = request.headers().tryGetRaw("Content-Encoding");
    auto acceptEncoding = request.headers().tryGetRaw("Accept-Encoding");
    auto ifMatch = request.headers().tryGetRaw("If-Match");

    try {
        nlohmann::json::parse(request.body()).get_to(patchItem);
        patchItem.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->update_nf_instance(nfInstanceID, patchItem, contentEncoding, acceptEncoding, ifMatch, response);
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

void NFInstanceIDDocumentApi::nf_instance_id_document_api_default_handler(const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

} // namespace org::openapitools::server::api


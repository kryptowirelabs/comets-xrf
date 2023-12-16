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
* SubscriptionIDDocumentApiImpl.h
*
* 
*/

#ifndef SUBSCRIPTION_ID_DOCUMENT_API_IMPL_H_
#define SUBSCRIPTION_ID_DOCUMENT_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <SubscriptionIDDocumentApi.h>

#include <pistache/optional.h>

#include "PatchItem.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include "SubscriptionData.h"
#include <string>
#include <vector>

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::model;

class SubscriptionIDDocumentApiImpl : public org::openapitools::server::api::SubscriptionIDDocumentApi {
public:
    explicit SubscriptionIDDocumentApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~SubscriptionIDDocumentApiImpl() override = default;

    void remove_subscription(const std::string &subscriptionID, Pistache::Http::ResponseWriter &response);
    void update_subscription(const std::string &subscriptionID, const std::vector<PatchItem> &patchItem, const Pistache::Optional<Pistache::Http::Header::Raw> &contentEncoding, const Pistache::Optional<Pistache::Http::Header::Raw> &acceptEncoding, Pistache::Http::ResponseWriter &response);

};

} // namespace org::openapitools::server::api



#endif
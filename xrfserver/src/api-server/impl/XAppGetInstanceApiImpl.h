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

/*
* XAppGetInstanceApiImpl.h
*
* 
*/

#ifndef X_APP_GET_INSTANCE_API_IMPL_H_
#define X_APP_GET_INSTANCE_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <XAppGetInstanceApi.h>

#include <pistache/optional.h>

#include "XAppDiscErr.h"
#include "XAppProfile.h"
#include <string>

namespace xrf::api
{

using namespace xrf::model;

class XAppGetInstanceApiImpl : public xrf::api::XAppGetInstanceApi {
public:
    explicit XAppGetInstanceApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~XAppGetInstanceApiImpl() override = default;

    void getx_app_instance(const std::string &xAppInstanceId, Pistache::Http::ResponseWriter &response);

};

} // namespace xrf::api



#endif

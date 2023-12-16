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
* XAppRegisterInstanceApiImpl.h
*
* 
*/

#ifndef X_APP_REGISTER_INSTANCE_API_IMPL_H_
#define X_APP_REGISTER_INSTANCE_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <XAppRegisterInstanceApi.h>

#include <pistache/optional.h>

#include "XAppDiscErr.h"
#include "XAppProfile.h"
#include <string>
#include <vector>

#include "xrf_main.hpp"
#include "spdlog/spdlog.h"

#include "XAppProfile.h"
#include "xrf_main.hpp"

namespace xrf::api
{

using namespace xrf::model;
using namespace xrf::app;

class XAppRegisterInstanceApiImpl : public xrf::api::XAppRegisterInstanceApi {
public:
    XAppRegisterInstanceApiImpl(std::shared_ptr<Pistache::Rest::Router>& rtr, xrf_main* xrf_main_inst, std::string addr);
    ~XAppRegisterInstanceApiImpl() {};

    void registerx_app_instance(const Pistache::Rest::Request &request, const std::string &xAppInstanceId, const XAppProfile &xAppProfile, Pistache::Http::ResponseWriter &response);
    //void registerx_app_instance(const std::string &xAppInstanceId, const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter &response);

private:
    	xrf_main* m_xrf_main;
	std::string m_addr;


};

} // namespace xrf::api



#endif

/**
* XRF OAuth2 Initial Authentication Request API
* XRF OAuth2 Authorization server, initial authentication with the xApp API 
*
* The version of the OpenAPI document: 1
* Contact: tolgaoa@vt.edu
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

/*
* InitialAuthenticationRequestApiImpl.h
*
* 
*/

#ifndef INITIAL_AUTHENTICATION_REQUEST_API_IMPL_H_
#define INITIAL_AUTHENTICATION_REQUEST_API_IMPL_H_

#include <curl/curl.h>

#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <InitialAuthenticationRequestApi.h>

//#include <pistache/optional.h>

#include "InitAuthErr.h"
#include "InitAuthReq.h"
#include "InitAuthRsp.h"

#include <string>
#include "xrf_main.hpp"
#include "spdlog/spdlog.h"

namespace xrf::api
{

using namespace xrf::model;
using namespace xrf::app;

class InitialAuthenticationRequestApiImpl : public xrf::api::InitialAuthenticationRequestApi {
public:
    InitialAuthenticationRequestApiImpl(std::shared_ptr<Pistache::Rest::Router>& rtr, xrf_main* xrf_main_inst, std::string addr);
    ~InitialAuthenticationRequestApiImpl() {};


    void init_auth_request(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter &response);
    //void init_auth_request(const InitAuthReq &initAuthReq, Pistache::Http::ResponseWriter &response);

private:
	xrf_main* m_xrf_main;
	std::string m_addr;

};

} // namespace xrf::api



#endif
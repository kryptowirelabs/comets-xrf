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

#include "XAppRegisterInstanceApiImpl.h"

namespace xrf {
namespace api {

using namespace xrf::model;
using namespace xrf::app;

XAppRegisterInstanceApiImpl::XAppRegisterInstanceApiImpl(
		std::shared_ptr<Pistache::Rest::Router>& rtr, xrf_main* xrf_main_inst, 
		std::string addr)
    		: XAppRegisterInstanceApi(rtr), m_xrf_main(xrf_main_inst), m_addr(addr) {}

void XAppRegisterInstanceApiImpl::registerx_app_instance(const Pistache::Rest::Request &request, const std::string &xAppInstanceId, const XAppProfile &xAppProfile, Pistache::Http::ResponseWriter &response) {
	spdlog::info("Incoming registration request from an xApp");
	int http_code = 200;
	ProblemDetails problem_details = {};

	m_xrf_main->handle_reg_request(request.body(), http_code, 1, problem_details);	
	spdlog::info("Finished registering the xApp");

	response.send(Pistache::Http::Code::Ok, "You have registered with the XRF");
}

}
}


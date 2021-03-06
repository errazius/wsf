/*
 * Copyright 2005 - 2008 WSO2, Inc. http://wso2.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef WSF_OUT_TRANSPORT_INFO_H
#define WSF_OUT_TRANSPORT_INFO_H

#include <axis2_http_out_transport_info.h>
#include "wsf_defs.h"

#ifdef __cplusplus
extern "C"
{
#endif

axis2_http_out_transport_info_t* 
wsf_out_transport_info_create (const axutil_env_t* env,
                               wsf_req_info_t*     req);


axis2_status_t WSF_CALL 
wsf_out_transport_info_free_void_arg (void*               transport_info,
                                      const axutil_env_t* env);


axis2_status_t WSF_CALL 
wsf_http_out_transport_info_set_content_type (axis2_http_out_transport_info_t* info,
                                              const axutil_env_t*              env,
                                              const axis2_char_t*              content_type);


axis2_status_t WSF_CALL 
wsf_http_out_transport_info_set_char_encoding (axis2_http_out_transport_info_t* info,
                                               const axutil_env_t*              env,
                                               const axis2_char_t*              encoding);


axis2_status_t WSF_CALL 
wsf_http_out_transport_info_free (axis2_http_out_transport_info_t* out_transport_info,
                                  const axutil_env_t*              env);

/** @} */
#ifdef __cplusplus
}
#endif
#endif /* WS_OUT_TRANSPORT_INFO_H */

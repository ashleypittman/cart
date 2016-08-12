/**
 * (C) Copyright 2016 Intel Corporation.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * GOVERNMENT LICENSE RIGHTS-OPEN SOURCE SOFTWARE
 * The Government's rights to use, modify, reproduce, release, perform, display,
 * or disclose this software are subject to the terms of the Apache License as
 * provided in Contract No. B609815.
 * Any reproduction of computer software, computer software documentation, or
 * portions thereof marked with this legend must also reproduce the markings.
 */
/**
 * This file is part of CaRT. It it the common header file which be included by
 * all other .c files of CaRT.
 */

#ifndef __CRT_INTERNAL_H__
#define __CRT_INTERNAL_H__

#include <ctype.h>
#include <errno.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <assert.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>
#include <inttypes.h>
#include <stddef.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <uuid/uuid.h>
/* #include <netinet/in.h> */
#include <arpa/inet.h>
#include <ifaddrs.h>

#include <crt_util/common.h>
#include <crt_api.h>

#include <crt_internal_types.h>
#include <crt_internal_fns.h>
#include <crt_rpc.h>
#include <crt_group.h>

#include <crt_hg.h>
#include <crt_pmix.h>

#endif /* __CRT_INTERNAL_H__ */
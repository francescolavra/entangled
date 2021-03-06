/*
 * Copyright (c) 2018 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef CCLIENT_REQUEST_ADD_NEIGHBORS_H
#define CCLIENT_REQUEST_ADD_NEIGHBORS_H

#include "types/types.h"

#ifdef __cplusplus
extern "C" {
#endif

/* List of neighbors URIs */
typedef struct add_neighbors_req_s {
  UT_array* uris;
} add_neighbors_req_t;

add_neighbors_req_t* add_neighbors_req_new();
void add_neighbors_req_add(add_neighbors_req_t* req, const char* uri);
void add_neighbors_req_free(add_neighbors_req_t** req);

#ifdef __cplusplus
}
#endif

#endif  // CCLIENT_REQUEST_ADD_NEIGHBORS_H

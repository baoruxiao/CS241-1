#ifndef __LIBWFG_H__
#define __LIBWFG_H__

#include <pthread.h>
#include "queue.h"

typedef struct _wfg_t
{

} wfg_t;

void wfg_init(wfg_t *wfg);
int  wfg_add_wait_edge(wfg_t *wfg, pthread_t t_id, unsigned int r_id);
int  wfg_add_hold_edge(wfg_t *wfg, pthread_t t_id, unsigned int r_id);
int  wfg_remove_edge(wfg_t *wfg, pthread_t t_id, unsigned int r_id);
int  wfg_get_cycle(wfg_t *wfg, pthread_t** cycle);
void wfg_print_graph(wfg_t *wfg);
void wfg_destroy(wfg_t *wfg);

#endif

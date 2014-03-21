#ifndef LDF_H
#define LDF_H

#include "graph.h"

#define ORD_LIST_BASE_SIZE 20

Adj_list *sgenOrdList(Graph *G);
Adj_list *pgenOrdList(Graph *G);
void pLDF(Graph *G);
void sLDF(Graph *G);

#endif

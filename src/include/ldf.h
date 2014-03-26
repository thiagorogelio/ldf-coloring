#ifndef LDF_H
#define LDF_H

#include "graph.h"

Adj_list *sgenOrdList(Graph *G);
Adj_list *pgenOrdList(Graph *G);
void pLDF(Graph *G);
void sLDF(Graph *G);

#endif

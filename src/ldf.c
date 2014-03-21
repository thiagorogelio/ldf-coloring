#include <stdlib.h>
#include "include/ldf.h"

// graph.c
void add_adjinList(Adj_list lst, int a){}

Adj_list *sgenOrdList(Graph *G){
    Adj_list *ordlist = calloc(ORD_LIST_BASE_SIZE, sizeof(Adj_list));
    int i;
    for(i=1;i<G->v_count+1;i++)
        add_adjinList(ordlist[G->V[i].degree], i);
    return ordlist;
}

Adj_list *pgenOrdList(Graph *G){
        Adj_list *ordlist = calloc(ORD_LIST_BASE_SIZE, sizeof(Adj_list));



    return ordlist;
}

void pLDF(Graph *G){};
void sLDF(Graph *G){};

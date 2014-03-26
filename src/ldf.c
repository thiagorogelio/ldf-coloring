#include <stdlib.h>
#include <omp.h>
#include "include/ldf.h"

Adj_list *sgenOrdList(Graph *G){
    Adj_list *ordlist = calloc(G->high_degree+1, sizeof(Adj_list));
    size_t i;
    for(i=1;i<G->v_count+1;i++)
        addAdjinList(&ordlist[G->V[i].degree], &G->V[i]);
    return ordlist;
}

Adj_list *pgenOrdList(Graph *G){
    Adj_list *ordlist = calloc(G->high_degree+1, sizeof(Adj_list));
    size_t i;
    //#pragma omp parallel for
    for(i=1;i<G->v_count+1;i++){
        addAdjinList(&ordlist[G->V[i].degree], &G->V[i]);}

    return ordlist;
}

void pLDF(Graph *G){};
void sLDF(Graph *G){
        Adj_list *adj = pgenOrdList(G);
};

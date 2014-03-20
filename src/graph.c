#include <stdlib.h>
#include "include/graph.h"

Graph *newGraph(short n_vertexs){
    Graph *G = malloc(sizeof(Graph));
    G->V = calloc(n_vertexs, sizeof(Vertex));
    return G;
}

void addEdge(Graph *G, short from, short to){
    Adj *n_adj = malloc(sizeof (Adj));
    n_adj->vertex = &G->V[to];
    if(G->V[from].adj.first)
        G->V[from].adj.last->next = n_adj;
    else
        G->V[from].adj.first = n_adj;
    G->V[from].adj.last = n_adj;
    G->V[from].adj.ct++;
}

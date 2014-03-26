#include <stdlib.h>
#include <stdio.h>
#include "include/graph.h"

Graph *loadFile(char file[]){
    FILE* fd;
    if ((fd=fopen(file,"rb")) == NULL) {
       printf("\nFile not found! ");
       exit(1);
    } else {
        char in1[10], in2[30];
        fscanf(fd,"p edge %s %s",in1, in2);
        Graph *G = newGraph(atoi(in1));
        int i, max = atoi(in2);
        for(i=0;i<max;i++){
            fscanf(fd,"\ne %s %s",in1, in2);
            addEdge(G, atoi(in1), atoi(in2));
        }
        fclose(fd);
        return G;
    }
    exit(1);
}

Graph *newGraph(short n_vertexs){
    Graph *G = malloc(sizeof(Graph));
    G->v_count = n_vertexs;
    G->V = calloc(n_vertexs+1, sizeof(Vertex));
    return G;
}

void addAdjinList(Adj_list *from_l,Vertex *to){
    Adj *n_adj = malloc(sizeof (Adj));
    n_adj->vertex = to;
    if(from_l->first)
        from_l->last->next = n_adj;
    else
        from_l->first = n_adj;
    from_l->last = n_adj;
}

void addEdge(Graph *G, short from, short to){
    addAdjinList(&G->V[from].adj, &G->V[to]);
    G->V[from].degree++;
    if(G->V[from].degree > G->high_degree)
        G->high_degree = G->V[from].degree;
}

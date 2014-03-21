#include <stdlib.h>
#include <stdio.h>
#include "include/graph.h"

Graph *loadFile(char file[]){
    char c;
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
    }
}

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
    G->V[from].degree++;
}

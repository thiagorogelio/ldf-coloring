#ifndef GRAPH_H
#define GRAPH_H

typedef struct Adj {
    struct Vertex *vertex;
    struct Adj *next;
} Adj;

typedef struct Adj_list {
    struct Adj *first;
    struct Adj *last;
} Adj_list;

typedef struct Vertex {
    short degree;
    struct Adj_list adj;
} Vertex;

typedef struct Edge {
    struct Vertex *vertex_from;
    struct Vertex *vertex_to;
} Edge;

typedef struct Graph {
    int high_degree;
    int v_count;
    struct Vertex *V;
} Graph;

Graph *newGraph(short);
void addAdjinList(Adj_list*,Vertex*);
void addEdge(Graph*,short,short);
Graph *loadFile(char*);

#endif

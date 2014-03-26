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
    size_t high_degree;
    size_t v_count;
    struct Vertex *V;
} Graph;

Graph *newGraph(size_t);
void addAdjinList(Adj_list*,Vertex*);
void addEdge(Graph*,size_t,short);
Graph *loadFile(char*);

#endif

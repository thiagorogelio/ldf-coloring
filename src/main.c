#include <stdio.h>
#include <string.h>
#include "include/ldf.h"

int main()//int argc, char **argv)
{
    int argc = 3;
    char **argv;
    argv[1] = "-s";
    argv[2] = "gcol10.txt";
    if(argc <= 2)
       printf("Usage: ./ldf-coloring [-s/-p] [input graph file]\n");
    else
    {
        if(!strcmp(argv[1],"-h")){
           printf("Usage: ./ldf-coloring [-s/-p] [input graph file]\n");
        }
        Graph *G = loadFile(argv[2]);
        if(!strcmp(argv[1],"-s")){
            sLDF(G);
        } else
        if(!strcmp(argv[1],"-p")){
            pLDF(G);
        }
    }
    return 0;
}

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int duGraph[10000][10000];
/// duGraph[totalVertices-1][totalVertices-1] has been
/// declared as a global variable. So, all the
/// vertices are assigned to 0. That is,
/// All vertices have been marked unvisited.

int visitedBFS[10000];
int visitedDFS[10000];
unsigned long long totalVertices;

///* Algorithm : BASIC TRAVERSAL TECHNIQUES */
///* Problem : Depth First Search */
///* Author : Mahmudul Hasan Khan CSE */

void DFS(unsigned long long currentVertex)

/// Given an undirected or directed graph,
/// duGraph[0 : totalVertices-1][0 : totalVertices-1] = (V, E) with
/// totalVertices numbered vertices with
/// an array visitedDFS[] initially set
/// to zero, this algorithm visits all vertices
/// reachable from currentVertex.
/// duGraph[0 : totalVertices-1][0 : totalVertices-1]
/// and visitedDFS[] are global.

{
    printf("\t%llu,", currentVertex+1);
    visitedDFS[currentVertex] = 1;
    for(unsigned long long adjcentVertex = 0;
    adjcentVertex < totalVertices; adjcentVertex++)
    {
        if((duGraph[currentVertex][adjcentVertex] == 1)
           &&(visitedDFS[adjcentVertex] == 0))
        {
            DFS(adjcentVertex);
        }
    }
}

int main()
{
    int isDirected;

    ///^ Sample Input */
    /// duGraph[0][1] = 1;
    /// duGraph[0][2] = 1;
    /// duGraph[0][3] = 1;
    /// duGraph[1][4] = 1;
    /// duGraph[4][5] = 1;
    /// duGraph[6][2] = 1;
    /// duGraph[6][3] = 1;
    /// duGraph[6][4] = 1;
    /// duGraph[7][6] = 1;
    /// totalVertices = 8;
    /// isDirected = 1;

    char key = 'y';
    while(tolower(key) == 'y')
    {
        printf("\n\n\n\tIs this Graph Directed or Undirected ? Enter it : ");
        printf("\n\t1 for Undirected Graph or,");
        printf("\n\t2 for Directed Graph : ");
        scanf("%d", &isDirected);
        isDirected--;

        switch(isDirected)
        {
        case 0:
            printf("\n\tHow many edges in the Undirected Graph ? Enter it : ");
            break;
        case 1:
            printf("\n\tHow many edges in the Directed Graph ? Enter it : ");
            break;
        }

        unsigned long long edges;
        unsigned long long i;
        totalVertices = 0;

        scanf("%llu", &edges);

        for(i = 0; i < edges; i++)
        {
            unsigned long long u;
            unsigned long long v;

            printf("\n\tFor edge %llu, Enter start vertex, u : ", i + 1);
            scanf("%llu", &u);
            printf("\n\tEnter End Vertex, v : ");
            scanf("%llu", &v);
            if(totalVertices < u)
            {
                totalVertices = u;
            }
            if(totalVertices < v)
            {
                totalVertices = v;
            }
            u--;
            v--;
            duGraph[u][v] = 1;
            if(isDirected == 0)
            {
                duGraph[v][u] = 1;
            }
        }

        unsigned long long row;
        unsigned long long col;

        for(i = 0; i < totalVertices; i++)
        {
            duGraph[i][i] = 1;
        }

        switch(isDirected)
        {
        case 0:
            printf("\n\tThe given Undirected Graph is : \n\n\t");
            break;
        case 1:
            printf("\n\tThe given Directed Graph is : \n\n\t");
            break;
        }

        for(col = 0; col < totalVertices; col++)
        {
            printf("\t%llu", col + 1);
        }
        for(row = 0; row < totalVertices; row++)
        {
            printf("\n\t%llu", row + 1);
            for(col = 0; col < totalVertices; col++)
            {
                printf("\t%llu", duGraph[row][col]);
            }
        }
        printf("\n\n\tIn the above graph, row == Start Vertex and column == End Vertex");

        printf("\n\n\tGraph Traversal of all vertices by : ");
        printf("\n\tBreadth First Search : ");

        unsigned long long vertex;

        ///* Algorithm : BASIC TRAVERSAL TECHNIQUES */
        ///* Problem : Breadth First Graph Traversal */
        ///* Author : Mahmudul Hasan Khan CSE */

        /// Breadth First Traversal of duGraph

        for(vertex = 0; vertex < totalVertices; vertex++)
        {
            if(visitedBFS[vertex] == 0)
            {
                ///* Algorithm : BASIC TRAVERSAL TECHNIQUES */
                ///* Problem : Breadth First Search */
                ///* Author : Mahmudul Hasan Khan CSE */

                /// A breadth first search of duGraph is carried out beginning
                /// at Vertex : vertex. For any node i, visitedBFS[i] == 1 if i has
                /// already been visited. The graph duGraph and array visitedBFS[]
                /// are global; visitedBFS[] is initialized to zero.

                unsigned long long currentVertex = vertex;

                printf("\t%llu,", vertex+1);
                visitedBFS[vertex] = 1;

                unsigned long long vQueue[10000];

                /// vQueue[] is a queue of unexplored vertices.

                unsigned long long qFront = 0;
                unsigned long long qRear = 0;

                while(true)
                {
                    for(unsigned long long adjacentVertex = 0;
                    adjacentVertex < totalVertices; adjacentVertex++)
                    {
                        if((duGraph[currentVertex][adjacentVertex]) == 1
                           && (visitedBFS[adjacentVertex] == 0))
                        {
                            /// adjacent vertex is unexplored

                            vQueue[qRear++] = adjacentVertex;

                            printf("\t%llu,", adjacentVertex + 1);
                            visitedBFS[adjacentVertex] = 1;
                        }
                    }

                    if(qFront == qRear)
                    {
                        /// vQueue is empty and no unexplored vertex

                        break;
                    }

                    currentVertex = vQueue[qFront++];

                    /// Get the first unexplored vertex
                }
            }
        }

        printf("\n\n\tDepth First Search : ");

        ///* Algorithm : BASIC TRAVERSAL TECHNIQUES */
        ///* Problem : Depth First Graph Traversal */
        ///* Author : Mahmudul Hasan Khan CSE */

        /// Depth First Traversal of duGraph

        for(vertex = 0; vertex < totalVertices; vertex++)
        {
            if(visitedDFS[vertex] == 0)
            {
                DFS(vertex);
            }
        }

        printf("\n\n\tDo you want to try more ? [y/n] : ");
        key = _getche();

        if(tolower(key) == 'y')
        {
            for(row = 0; row < totalVertices; row++)
            {
                for(col = 0; col < totalVertices; col++)
                {
                    duGraph[row][col] = 0;
                }
            }
        }

        for(vertex = 0; vertex < totalVertices; vertex++)
        {
            visitedBFS[vertex] = 0;
            visitedDFS[vertex] = 0;

            /// Mark all vertices unvisited
        }
    }

    return 0;
}

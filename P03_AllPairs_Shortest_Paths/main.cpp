#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>

const double INFINITE = 1.7E+308L;
double costDGraph[10000][10000];
double shortestPathDGraph[10000][10000];

int main()
{
    unsigned long long totalVertices;

    ///* Sample Input */
    /// totalVertices = 3;

    unsigned long long i;
    unsigned long long row;
    unsigned long long col;

    char key = 'y';
    while(tolower(key) == 'y')
    {
        printf("\n\n\n\tHow many vertices in this Directed graph ? Enter it : ");
        scanf("%llu", &totalVertices);

        for(row = 0; row < totalVertices; row++)
        {
            for(col = 0; col < totalVertices; col++)
            {
                costDGraph[row][col] = INFINITE;
            }
        }

        for(i = 0; i < totalVertices; i++)
        {
            costDGraph[i][i] = 0;
        }

        ///* Sample Input */
        /// costDGraph[1 - 1][2 - 1] = 4;
        /// costDGraph[1 - 1][3 - 1] = 11;
        /// costDGraph[2 - 1][3 - 1] = 2;
        /// costDGraph[2 - 1][1 - 1] = 6;
        /// costDGraph[3 - 1][1 - 1] = 3;

        printf("\n\tHow many edges in this Directed graph ? Enter it : ");

        unsigned long long edges;

        scanf("%llu", &edges);

        for(i = 0; i < edges; i++)
        {
            unsigned long long u;
            unsigned long long v;

            printf("\n\tFor Edge %llu, Enter Start Vertex, u : ", i + 1);
            scanf("%llu", &u);
            printf("\n\tEnter End Vertex, v : ");
            scanf("%llu", &v);
            u--;
            v--;
            printf("\n\tEnter the cost : ");
            scanf("%lf", &costDGraph[u][v]);
        }

        printf("\n\tThe given DIRECTED graph is: \n\n\t");

        for(col = 0; col < totalVertices; col++)
        {
            printf("\t%llu", col+1);
        }

        for(row = 0; row < totalVertices; row++)
        {
            printf("\n\t%llu", row + 1);
            for(col = 0; col < totalVertices; col++)
            {
                if(costDGraph[row][col] < INFINITE)
                {
                    if(fabs(costDGraph[row][col]) < 1.000000)
                    {
                        printf("\t%.2lf", costDGraph[row][col]);
                    }
                    else
                    {
                        printf("\t%.0lf", costDGraph[row][col]);
                    }
                }
                else
                {
                    printf("\tINF");
                }
            }
        }

        unsigned long long startVertex;
        unsigned long long endVertex;

        ///* Algorithm : DYNAMIC PROGRAMMING */
        ///* Problem : Multistage Forward Graphs */
        ///* Author : Mahmudul Hasan Khan CSE */

        /// costDGraph[0 : totalVertices-1][0 : totalVertices-1] is the
        /// adjacency matrix of a graph with totalVertices vertices;
        /// shortestPathDGraph[startVertex][endVertex] is the cost of
        /// a shortest path from vertex startVertex to vertex endVertex
        /// costDGraph[vertex][vertex] = 0.00, for 0<=vertex<=totalVertices-1

        for(startVertex = 0; startVertex < totalVertices; startVertex++)
        {
            for(endVertex = 0; endVertex < totalVertices; endVertex++)
            {
                shortestPathDGraph[startVertex][endVertex]
                 = costDGraph[startVertex][endVertex];

                 /// copy costDGraph into shortestPathDGraph
            }
        }

        for(unsigned long long intermediateVertex = 0;
        intermediateVertex < totalVertices; intermediateVertex++)
        {
            for(startVertex = 0; startVertex < totalVertices; startVertex++)
            {
                for(endVertex = 0; endVertex < totalVertices; endVertex++)
                {
                    if(
                       (shortestPathDGraph[startVertex][intermediateVertex]
                        <shortestPathDGraph[startVertex][endVertex])
                       &&(shortestPathDGraph[intermediateVertex][endVertex]
                        <shortestPathDGraph[startVertex][endVertex])
                       )
                    {
                        double sumOfPathCost
                        = shortestPathDGraph[startVertex][intermediateVertex]
                        + shortestPathDGraph[intermediateVertex][endVertex];
                        if(shortestPathDGraph[startVertex][endVertex] > sumOfPathCost)
                        {
                            shortestPathDGraph[startVertex][endVertex] = sumOfPathCost;
                        }
                    }
                }
            }
        }

        printf("\n\n\tThe shortest path DIRECTED graph is: \n\n\t");

        for(col = 0; col < totalVertices; col++)
        {
            printf("\t%llu", col+1);
        }

        for(row = 0; row < totalVertices; row++)
        {
            printf("\n\t%llu", row + 1);
            for(col = 0; col < totalVertices; col++)
            {
                if(shortestPathDGraph[row][col] < INFINITE)
                {
                    if(fabs(shortestPathDGraph[row][col]) < 1.000000)
                    {
                        printf("\t%.2lf", shortestPathDGraph[row][col]);
                    }
                    else
                    {
                        printf("\t%.0lf", shortestPathDGraph[row][col]);
                    }
                }
                else
                {
                    printf("\tINF");
                }
            }
        }

        printf("\n\n\tDo you want to try more ? [y/n] : ");
        key = _getche();
    }


    return 0;
}

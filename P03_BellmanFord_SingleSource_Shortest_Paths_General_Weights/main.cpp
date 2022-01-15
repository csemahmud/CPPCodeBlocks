#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>

const double INFINITE = 1.7E+308L;
double costDGraph[10000][10000];
double distance[10000];

int main()
{
    unsigned long long totalVertices;

    ///* Sample Input */
    /// totalVertices = 7;

    unsigned long long i;
    unsigned long long row;
    unsigned long long col;
    unsigned long long sourceVertex;

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

        ///^ Sample Input */
        /// costDGraph[1 - 1][2 - 1] = 6;
        /// costDGraph[1 - 1][3 - 1] = 5;
        /// costDGraph[1 - 1][4 - 1] = 5;
        /// costDGraph[2 - 1][5 - 1] = -1;
        /// costDGraph[3 - 1][2 - 1] = -2;
        /// costDGraph[3 - 1][5 - 1] = 1;
        /// costDGraph[4 - 1][3 - 1] = -2;
        /// costDGraph[4 - 1][6 - 1] = -1;
        /// costDGraph[5 - 1][7 - 1] = 3;
        /// costDGraph[6 - 1][7 - 1] = 3;
        /// sourceVertex = (1 - 1);

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

        printf("\n\tEnter the source vertex : ");

        scanf("%llu", &sourceVertex);

        sourceVertex--;

        printf("\n\tThe given DIRECTED graph is : \n\n\t");

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
        ///* Problem : Bellman-Ford Single Source Shortest Paths: General Weights */
        ///* Author : Mahmudul Hasan Khan CSE */

        /// single source to all-destinations shortest
        /// paths with negative edge costs

        for(i = 0; i < totalVertices; i++)
        {
            distance[i] = costDGraph[sourceVertex][i];

            /// initialize distance
        }

        printf("\n\n\tThe Matrix of Shortest Paths from the source, %llu is : \n\n\tk",
               sourceVertex + 1);

        unsigned long long vertex;

        for(vertex = 0; vertex < totalVertices; vertex++)
        {
            printf("\t%llu", vertex + 1);
        }

        for(unsigned long long step = 2; step < totalVertices; step++)
        {
            printf("\n\t%llu", step - 1);
            for(vertex =0; vertex < totalVertices; vertex++)
            {
                if(distance[vertex] < totalVertices)
                {
                    if(fabs(distance[vertex]) < 1.000000)
                    {
                        printf("\t%.2lf", distance[vertex]);
                    }
                    else
                    {
                        printf("\t%.0lf", distance[vertex]);
                    }
                }
                else
                {
                    printf("\tINF");
                }
            }

            for(endVertex = 0; endVertex < totalVertices; endVertex++)
            {
                if(endVertex != sourceVertex)
                {
                    /// for each end vertex such that endVertex != sourceVertex
                    /// and endVertex has at least one incoming edge

                    for(startVertex = 0; startVertex < totalVertices; startVertex++)
                    {
                        if(
                           (costDGraph[startVertex][endVertex] < INFINITE)
                           && (distance[startVertex] < INFINITE)
                           )
                        {
                            if(distance[endVertex] >
                               (distance[startVertex] + costDGraph[startVertex][endVertex]))
                            {
                                distance[endVertex] =
                                    (distance[startVertex] + costDGraph[startVertex][endVertex]);
                            }
                        }
                    }
                }
            }
        }

        printf("\n\t%llu", totalVertices - 1);
        for(vertex =0; vertex < totalVertices; vertex++)
        {
            if(distance[vertex] < totalVertices)
            {
                if(fabs(distance[vertex]) < 1.000000)
                {
                    printf("\t%.2lf", distance[vertex]);
                }
                else
                {
                    printf("\t%.0lf", distance[vertex]);
                }
            }
            else
            {
                printf("\tINF");
            }
        }

        printf("\n\n\tDo you want to try more ? [y/n] : ");
        key = _getche();
    }
}

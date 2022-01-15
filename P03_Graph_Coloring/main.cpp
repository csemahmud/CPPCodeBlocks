#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int uGraph[10000][10000];
unsigned long long colorOf[10000];
unsigned long long totalVertices;
unsigned long long maxColor;

///* Algorithm : BACKTRACKING */
///* Problem : Graph Coloring */
///* Author : Mahmudul Hasan Khan CSE */

int NextValue(unsigned long long currentVertex)
{
    /// colorOf[0],...,colorOf[currentVertex-1]
    /// have been assigned to integer values in.
    /// the range [1,maxColor] such that adjacent vertices have distinct
    /// integers. A value for colorOf[currentVertex] is determined in the range
    /// [0,maxColor]
    /// colorOf[currentVertex] is assigned the next highest numbered color
    /// while maintaining distinctness from the adjacent vertices
    /// of currentVertex. If no such color exists,
    /// then colorOf[currentVertex] is 0;

    while(true)
    {
        colorOf[currentVertex] = (colorOf[currentVertex]+1) % (maxColor+1);
        /// Next highest color

        if(colorOf[currentVertex] == 0)
        {
            /// All colors have been used

            return 0;
        }
        unsigned long long vertex;
        for(vertex = 0; vertex < totalVertices; vertex++)
        {
            /// Check if this color is
            /// distinct from adjacent colors

            if((currentVertex != vertex)
               &&(uGraph[currentVertex][vertex] != 0)
               &&(colorOf[currentVertex]==colorOf[vertex]))
            {
                /// if ( currentVertex,vertex ) is an edge and if adjacent
                /// vertices have the same color

                break;
            }
        }
        if(vertex == totalVertices)
        {
            /// New color found

            return 1;
        }

        /// Otherwise try to find another color
    }
    return 0;
}

int mColoring(unsigned long long currentVertex)
{
    /// This algorithm was formed using recursive backtracking
    /// scheme. The graph is represented by its boolean adjacency
    /// matrix. uGraph[0 : totalVertices-1][0 : totalVertices-1]
    /// All assignments of 1,2,...,maxColor to the
    /// vertices of the graph such that adjacent vertices are
    /// assigned distinct integers are printed. currentVertex is the index
    /// of the next vertex to the color.

    int vReturn = 0;
    while(true)
    {
        /// Generate all legal assignments for colorOf[currentVertex]

        int rv = NextValue(currentVertex);
        /// Assign colorOf[currentVertex] to a legal color

        if(rv == 0)
        {
            /// No new color possible

            return vReturn;
        }
        if(currentVertex == totalVertices)
        {
            /// At most m colors have
            /// been used to color the n vertices

            printf("\n\t{\t%llu", colorOf[0]);
            for(unsigned long long vertex = 1; vertex < totalVertices; vertex++)
            {
                printf(",\t%llu", colorOf[vertex]);
            }
            printf("\t}");
            vReturn = 1;
            break;
        }
        else
        {
            vReturn = mColoring(currentVertex + 1);
        }
    }
    return vReturn;
}

int main()
{
    ///* Sample Input */
    /// uGraph[0][1] = 1;
    /// uGraph[1][0] = 1;
    /// uGraph[0][2] = 1;
    /// uGraph[2][0] = 1;
    /// uGraph[0][3] = 1;
    /// uGraph[3][0] = 1;
    /// uGraph[1][2] = 1;
    /// uGraph[2][1] = 1;
    /// uGraph[1][3] = 1;
    /// uGraph[3][1] = 1;
    /// uGraph[1][4] = 1;
    /// uGraph[4][1] = 1;
    /// uGraph[2][3] = 1;
    /// uGraph[3][2] = 1;
    /// uGraph[3][4] = 1;
    /// uGraph[4][3] = 1;
    /// totalVertices = 5;

    char key = 'y';
    while(tolower(key) == 'y')
    {
        printf("\n\n\n\tHow many Edges in this Undirected Graph ? Enter it : ");

        unsigned long long edges;
        unsigned long long i;
        totalVertices = 0;

        scanf("%llu", &edges);

        for(i = 0; i < edges; i++)
        {
            unsigned long long u;
            unsigned long long v;

            printf("\n\tFor Edge %llu, Enter Start Vertex, u : ", i + 1);
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
            uGraph[u][v] = 1;
            uGraph[v][u] = 1;
        }

        unsigned long long row;
        unsigned long long col;

        for(i = 0; i < totalVertices; i++)
        {
            uGraph[i][i] = 1;
        }

        printf("\n\tThe given Undirected Graph is : \n\n\t");
        for(col = 0; col < totalVertices; col++)
        {
            printf("\t%llu", col + 1);
        }
        for(row = 0; row < totalVertices; row++)
        {
            printf("\n\t%llu", row+1);
            for(col = 0; col < totalVertices; col++)
            {
                printf("\t%llu", uGraph[row][col]);
            }
        }

        printf("\n\n\tAll possible color combination of %llu vertices are : ", totalVertices);

        maxColor = 2;
        while(mColoring(0) == 0)
        {
            maxColor++;
        }

        printf("\n\n\tDo you want to try more ? [y/n] : ");
        key = _getche();

        if(tolower(key) == 'y')
        {
            for(row = 0; row < totalVertices; row ++)
            {
                for(col = 0; col < totalVertices; col++)
                {
                    uGraph[row][col] = 0;
                }
            }
        }
    }
    return 0;
}

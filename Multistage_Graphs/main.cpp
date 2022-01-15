#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>

const double INFINITE = 1.7E+308L;
double costDGraph[10000][10000];

int main()
{
	unsigned long long totalVertices;

	///* Sample Input */
	/// totalVertices = 12;

	unsigned long long i;
	unsigned long long row;
	unsigned long long col;

	char key = 'y';
	while (tolower(key) == 'y')
	{
		printf("\n\n\n\tHow many vertices in this Directed Graph ? Enter it : ");
		scanf("%llu", &totalVertices);

		for (row = 0; row < totalVertices; row++)
		{
			for (col = 0; col < totalVertices; col++)
			{
				costDGraph[row][col] = INFINITE;
			}
		}

		for (i = 0; i < totalVertices; i++)
		{
			costDGraph[i][i] = 0.000000;
		}

		///* Sample Input */
		/// costDGraph[0][1] = 9;
		/// costDGraph[0][2] = 7;
		/// costDGraph[0][3] = 3;
		/// costDGraph[0][4] = 2;
		/// costDGraph[1][5] = 4;
		/// costDGraph[1][6] = 2;
		/// costDGraph[1][7] = 1;
		/// costDGraph[2][5] = 2;
		/// costDGraph[2][6] = 7;
		/// costDGraph[3][7] = 11;
		/// costDGraph[4][6] = 11;
		/// costDGraph[4][7] = 8;
		/// costDGraph[5][8] = 6;
		/// costDGraph[5][9] = 5;
		/// costDGraph[6][8] = 4;
		/// costDGraph[6][9] = 3;
		/// costDGraph[7][9] = 5;
		/// costDGraph[7][10] = 6;
		/// costDGraph[8][11] = 4;
		/// costDGraph[9][11] = 2;
		/// costDGraph[10][11] = 5;

		printf("\n\tHow many Edges in this Directed Graph ? Enter it : ");

		unsigned long long edges;

		scanf("%llu", &edges);

		///* Alternative Sample Input */
		/// edges = 21
		/// /*1*/ costDGraph[1-1][2-1] = 9;
		/// /*2*/ costDGraph[1-1][3-1] = 7;
		/// /*3*/ costDGraph[1-1][4-1] = 3;
		/// /*4*/ costDGraph[1-1][5-1] = 2;
		/// /*5*/ costDGraph[2-1][6-1] = 4;
		/// /*6*/ costDGraph[2-1][7-1] = 2;
		/// /*7*/ costDGraph[2-1][8-1] = 1;
		/// /*8*/ costDGraph[3-1][6-1] = 2;
		/// /*9*/ costDGraph[3-1][7-1] = 7;
		/// /*10*/ costDGraph[4-1][8-1] = 11;
		/// /*11*/ costDGraph[5-1][7-1] = 11;
		/// /*12*/ costDGraph[5-1][8-1] = 8;
		/// /*13*/ costDGraph[6-1][9-1] = 6;
		/// /*14*/ costDGraph[6-1][10-1] = 5;
		/// /*15*/ costDGraph[7-1][9-1] = 4;
		/// /*16*/ costDGraph[7-1][10-1] = 3;
		/// /*17*/ costDGraph[8-1][10-1] = 5;
		/// /*18*/ costDGraph[8-1][11-1] = 6;
		/// /*19*/ costDGraph[9-1][12-1] = 4;
		/// /*20*/ costDGraph[10-1][12-1] = 2;
		/// /*21*/ costDGraph[11-1][12-1] = 5;

		for (i = 0; i < edges; i++)
		{
			unsigned long long u;
			unsigned long long v;
			double costValue;

			printf("\n\tFor Edge %llu, Enter Start Vertex, u : ", i + 1);
			scanf("%llu", &u);
			printf("\n\tEnter End Vertex, v : ");
			scanf("%llu", &v);
			printf("\n\tEnter The Cost : ");
			scanf("%lf", &costValue);
			u--;
			v--;
			costDGraph[u][v] = costValue;
		}

		printf("\n\tThe given DIRECTED Graph is : \n\n     ");

		for (col = 0; col < totalVertices; col++)
		{
			printf("%5llu", col + 1);
		}

		for (row = 0; row < totalVertices; row++)
		{
			printf("\n%5llu", row + 1);
			for (col = 0; col < totalVertices; col++)
			{
				if (costDGraph[row][col] < INFINITE)
				{
					if (fabs(costDGraph[row][col]) < 1.000000)
					{
						printf("%5.2lf", costDGraph[row][col]);
					}
					else
					{
						printf("%5.0lf", costDGraph[row][col]);
					}
				}
				else
				{
					printf("  INF");
				}
			}
		}

		unsigned long long stage;

		///* Algorithm : DYNAMIC PROGRAMMING */
		///* Problem : Multistage Forward Graphs */
		///* Author : Mahmudul Hasan Khan CSE */

		/// The input is a stage-Staged graph,
		/// costDGraph[0 : totalVertices - 1][0 : totalVertices - 1] = (V,E)
		/// with totalVertices Vertices indexed in order of stages. E is a
		/// set of edges and costDGraph[startVertex][endVertex] is the cost
		/// of ( startVertex, endVertex) path[0 : stage-1] is a minimum-cost
		/// path

		double vCostOf[10000];
		vCostOf[totalVertices - 1] = 0.000000;
		unsigned long long next[10000];

		for (unsigned long long startVertex = totalVertices - 2;
			startVertex >= 0; startVertex--)
		{
			/// Compute Cost of startVertex, vCostOf[startVertex]

			vCostOf[startVertex] = INFINITE;
			for (unsigned long long endVertex = 1;
				endVertex < totalVertices; endVertex++)
			{
				/// Find endVertex such that ( startVertex, endVertex ) is an
				/// edge of costDGraph and
				/// (costDGraph[startVertex][endVertex] + vCostOf[endVertex])
				/// is minimum

				if ((startVertex != endVertex)
					&& (vCostOf[startVertex] > costDGraph[startVertex][endVertex]))
				{
					if (vCostOf[startVertex] >
						costDGraph[startVertex][endVertex] + vCostOf[endVertex])
					{
						vCostOf[startVertex]
							= costDGraph[startVertex][endVertex] + vCostOf[endVertex];
						next[startVertex] = endVertex;
					}
				}
			}
			if (startVertex == 0)
			{
				break;
			}
		}

		/// Find a minimum-cost path

		unsigned long long path[10000];

		stage = 1;
		path[0] = 0;

		while (path[stage - 1] != (totalVertices - 1))
		{
			path[stage] = next[path[stage - 1]];
			stage++;
		}

		printf("\n\n\tMinimum Cost Forward Path is : %llu", path[0] + 1);

		for (i = 1; i < stage; i++)
		{
			printf(" -> %llu", path[i] + 1);
		}

		printf("\n\n\tMinimum Forward Cost = %lf", vCostOf[0]);

		///* Algorithm : DYNAMIC PROGRAMMING */
		///* Problem : Multistage Backward Graphs */
		///* Author : Mahmudul Hasan Khan CSE */

		/// Same function as Forward Graph

		double backVCostOf[10000];
		backVCostOf[0] = 0.000000;
		unsigned long long previous[10000];

		for (unsigned long long endVertex = 1;
			endVertex < totalVertices; endVertex++)
		{
			/// Compute Cost of endVertex, backVCostOf[endVertex]

			backVCostOf[endVertex] = INFINITE;
			for (unsigned long long startVertex = totalVertices - 2;
				startVertex >= 0; startVertex--)
			{
				/// Find startVertex such that ( startVertex, endVertex ) is an
				/// edge of costDGraph and
				/// (backVCostOf[startVertex] + costDGraph[startVertex][endVertex])
				/// is minimum

				if ((startVertex != endVertex)
					&& (backVCostOf[endVertex] > costDGraph[startVertex][endVertex]))
				{
					if (backVCostOf[endVertex] >
						backVCostOf[startVertex] + costDGraph[startVertex][endVertex])
					{
						backVCostOf[endVertex]
							= backVCostOf[startVertex] + costDGraph[startVertex][endVertex];
						previous[endVertex] = startVertex;
					}
				}
				if (startVertex == 0)
				{
					break;
				}
			}
		}

		/// Find a minimum-cost path

		unsigned long long backPath[10000];

		stage = 1;
		backPath[0] = totalVertices - 1;

		while (backPath[stage - 1] != 0)
		{
			backPath[stage] = previous[backPath[stage - 1]];
			stage++;
		}

		printf("\n\n\tMinimum Cost Backward Path is : %llu", backPath[0] + 1);

		for (i = 1; i < stage; i++)
		{
			printf(" -> %llu", backPath[i] + 1);
		}

		printf("\n\n\tMinimum Backward Cost = %lf", backVCostOf[totalVertices - 1]);

		printf("\n\n\tDo you want to try more ? [y/n] : ");
		key = _getche();
	}

	return 0;
}

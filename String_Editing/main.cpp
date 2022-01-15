#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

unsigned long long cost[10000][10000];

int main()
{
	char givenStr[10000];
	char newStr[10000];

	///* Sample Input */
	/// strcpy(givenStr, "aabab");
	/// strcpy(newStr, "babb");
	/// strcpy_s(givenStr, "aabab");
	/// strcpy_s(newStr, "babb");

	char key = 'y';
	while (tolower(key) == 'y')
	{
		printf("\n\n\n\tEnter a String to Edit : \n\t");
		gets(givenStr);
		printf("\n\tEnter New String : \n\t");
		gets(newStr);
		printf("\n\tThe Given String is : \"%s\"", givenStr);
		printf("\n\tAnd The New String is : \"%s\"", newStr);
		printf("\n\n\tThe String Editing Matrix is : \n");

		unsigned long long row;
		unsigned long long col;

		printf("\n\t");
		for (col = 0; col <= strlen(newStr); col++)
		{
			printf("\t%llu", col);
		}

		///* Algorithm : DYNAMIC PROGRAMMING */
		///* Problem : String Editing */
		///* Author : Mahmudul Hasan Khan CSE */

		cost[0][0] = 0;
		for (row = 0; row <= strlen(givenStr); row++)
		{
			printf("\n\t%llu", row);
			for (col = 0; col <= strlen(newStr); col++)
			{
				if ((col == 0) && (row > 0))
				{
					cost[row][col] = cost[row - 1][0] + 1;
					/// Delete(givenStr[row-1]) == 1
				}
				else if ((row == 0) && (col > 0))
				{
					cost[row][col] = cost[0][col - 1] + 1;
					/// Insert(newStr[col-1]) == 1
				}
				else if ((row > 0) && (col > 0))
				{
					/// find minimum cost for cost[row][col]

					if (givenStr[row - 1] == newStr[col - 1])
					{
						cost[row][col] = cost[row - 1][col - 1];
						/// As, givenStr[row-1] == newStr[col-1]
						/// So, Change(givenStr[row-1], newStr[col-1])
						/// == Change(givenStr[row-1], givenStr[row-1]) == 0
					}
					else
					{
						cost[row][col] = cost[row - 1][col - 1] + 2;
						/// Change(givenStr[row-1], newStr[col-1] == 2
					}

					if (cost[row][col] > (cost[row - 1][col] + 1))
					{
						cost[row][col] = cost[row - 1][col] + 1;
						/// Delete(givenStr[row-1]) == 1
					}

					if (cost[row][col] > (cost[row][col - 1] + 1))
					{
						cost[row][col] = cost[row][col - 1] + 1;
						/// Insert(newStr[col-1]) == 1
					}
				}
				printf("\t%llu", cost[row][col]);
			}
		}

		printf("\n\n\tMinimum String Editing Cost is : %llu", cost[row - 1][col - 1]);

		printf("\n\n\tDo you want to try more ? [y/n] : ");
		key = _getche();
	}

	return 0;
}

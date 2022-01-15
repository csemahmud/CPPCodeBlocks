#include <stdio.h>
#include <conio.h>
#include <ctype.h>

double profit[100000000];
double weight[100000000];

int main()
{
	double maxKnapsackWeight;
	unsigned long long totalElements;
	char key = 'y';
	while (tolower(key) == 'y')
	{
		unsigned long long element;
		unsigned long long i;

		///* Sample Input */
		/// totalElements = 3;
		/// profit[0] = 24;
		/// weight[0] = 15;
		/// profit[1] = 15;
		/// weight[1] = 10;
		/// profit[2] = 25;
		/// weight[2] = 18;
		/// maxKnapsackWeight = 20;

		printf("\n\n\n\tHow many objects do you want to input ? Enter it : ");
		scanf("%llu", &totalElements);

		if (totalElements > 0)
		{
			for (i = 0; i < totalElements; i++)
			{
				double p;
				printf("\n\tEnter profit[%llu] : ", i + 1);
				scanf("%lf", &p);
				double w;
				printf("\n\tEnter weight[%llu] : ", i + 1);
				scanf("%lf", &w);
				unsigned long long j = i - 1;
				while ((j >= 0) && ((profit[j] / weight[j]) < (p / w)))
				{
					profit[j + 1] = profit[j];
					weight[j + 1] = weight[j];
					j--;
				}
				profit[j + 1] = p;
				weight[j + 1] = w;
			}

			printf("\n\n\tEnter Maximum Weight Capacity of Knapsack : ");
			scanf("%lf", &maxKnapsackWeight);

			printf("\n\n\tThe (profit,weight) of Given %llu Objects are : {\t(%lf,%lf)",
				totalElements, profit[0], weight[0]);

			for (element = 1; element < totalElements; element++)
			{
				printf(",\t(%lf,%lf)", profit[element], weight[element]);
			}
			printf("\t}");

			///* Algorithm : THE GREEDY METHOD */
			///* Problem : String Editing */
			///* Author : Mahmudul Hasan Khan CSE */

			/// profit[ 0 : totalElements-1 ] and weight[ 0 : totalElements-1 ]
			/// contains the profits and weights respectively of the
			/// totalElements objects ordered such that,
			/// profit[element]/weight[element] >= profit[element+1]/weight[element+1]
			/// maxKnapsackWeight is the knapsack size

			double remainingWeight = maxKnapsackWeight;
			double totalProfit = 0.000000;
			printf("\n\n\tThe solution set, (profit,weight) is : {\t");

			if (weight[0] > remainingWeight)
			{
				printf("%lf/%lf of %lf",
					remainingWeight, weight[0], profit[0]);
				totalProfit += (remainingWeight * profit[0] / weight[0]);
				remainingWeight = 0;
				element = totalElements;
			}
			else
			{
				printf("(%lf,%lf)", profit[0], weight[0]);
				totalProfit += profit[0];
				remainingWeight -= weight[0];
				element = 1;
			}

			for (; element < totalElements; element++)
			{
				if (weight[element] > remainingWeight)
				{
					printf(",\t%lf/%lf of %lf",
						remainingWeight, weight[element], profit[element]);
					totalProfit += (remainingWeight * profit[element] / weight[element]);
					break;
				}
				printf(",\t(%lf,%lf)", profit[element], weight[element]);
				totalProfit += profit[element];
				remainingWeight -= weight[element];
			}

			printf("\t}");

			printf("\n\n\tTotal profit = %lf", totalProfit);
		}
		else
		{
			printf("\n\tNo object to show ...");
		}

		printf("\n\n\tDo you want to try more ? [y/n] : ");
		key = _getche();
	}
	return 0;
}

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
    while(tolower(key) == 'y')
    {
        unsigned long long element;
        unsigned long long i;

        ///*Sample Input*/
        totalElements = 3;
        profit[0] = 24;
        weight[0] = 15;
        profit[1] = 15;
        weight[1] = 10;
        profit[2] = 25;
        weight[2] = 18;
        maxKnapsackWeight = 20;

        printf("\n\n\tThe (profit,weight) of Given %llu Objects are : {\t(%lf,%lf)",
               totalElements, profit[0], weight[0]);

        for(element = 1; element < totalElements; element++)
        {
            printf(",\t(%lf,%lf)", profit[element], weight[element]);
        }
        printf("\t}");

        double remainingWeight = maxKnapsackWeight;
        double totalProfit = 0.000000;
        printf("\n\n\tThe solution set, (profit,weight) is : ");

        if(weight[0] > remainingWeight)
        {
            printf("%lf/%lf of %lf",
                   remainingWeight, weight[0], profit[0]);
            totalProfit += ( remainingWeight * profit[0] / weight[0]);
            remainingWeight = 0;
            element = totalElements;
        }
        else
        {
            printf("(%lf, %lf)", profit[0], weight[0]);
            totalProfit += profit[0];
            remainingWeight -= weight[0];
            element = 1;
        }



        key = 'n';
    }
    return 0;
}

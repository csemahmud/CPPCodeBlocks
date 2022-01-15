#include <stdio.h>
#include <conio.h>
#include <ctype.h>

double elements[100000000];
int flags[100000000];
double givenSum;

///* Algorithm : BACKTRACKING */
///* Problem : Sum Of Subsets */
///* Author : Mahmudul Hasan Khan CSE */

void SumOfSub(double currentSum, unsigned long long index, double remainingSum)

/// Find All Subsets of elements [ 0 : range-1 ] that can sum to givenSum. The values of flags[j]
/// 0<=j<index, have already been determined.
/// currentSum = SUM_OF( elements[j]*flags[j], where 0<=j<=index-1)
/// and remainingSum = SUM_OF( elements[j], where index<=j<=range). The elements[j]'s are
/// in nondecreasing order.
/// It is assumed that, elements[0] <= givenSum and
/// SUM_OF( elements[i], where 0<=i<range) >= givenSum

{
    /// Generate left child. Note: currentSum + elements[index] <= givenSum since Bk-1 is true
    flags[index] = 1;
    if(currentSum + elements[index] == givenSum) /// subset found
    {
        printf("\n\n\t{");
        unsigned long long i;
        for(i = 0; i <= index; i++)
        {
            if(flags[i] == 1)
            {
                printf("\t%lf", elements[i]);
                break;
            }
        }
        while(i < index)
        {
            i++;
            if(flags[i] == 1)
            {
                printf(",\t%lf",elements[i]);
            }
        }
        printf("\t}");

        ///* There is no recursive call here as elements[j] > 0, 0<=j<range
    }
    else if(currentSum + elements[index] + elements[index+1] <= givenSum)
    {
        SumOfSub(currentSum + elements[index], index + 1, remainingSum - elements[index]);
    }

    /// Generate right child and evaluate Bk

    if((currentSum + remainingSum - elements[index] >= givenSum)
       && (currentSum + elements[index + 1] <= givenSum))
    {
        flags[index] = 0;
        SumOfSub(currentSum, index + 1, remainingSum - elements[index]);
    }
}

int main()
{
    char key = 'y';
    while(tolower(key) == 'y')
    {
        unsigned long long range;
        double totalSum = 0;

        ///range = 11;
        ///elements[0] = 0;
        ///elements[1] = 0.5;
        ///elements[2] = 5;
        ///elements[3] = 10;
        ///elements[4] = 12;
        ///elements[5] = 13;
        ///elements[6] = 15;
        ///elements[7] = 15;
        ///elements[8] = 18;
        ///elements[9] = 18.5;
        ///elements[10] = 30.5;
        ///givenSum = 30.5;
        ///for(unsigned long long i = 0; i < range; i++)
        ///{
        ///    totalSum += elements[i];
        ///}

        printf("\n\n\n\tHow many elements do you want to input ? Enter it : ");
        scanf("%llu", &range);

        if(range < 100000000)
        {
            unsigned long long i;
            for(i = 0; i < range; i++)
            {
                double input;
                printf("\n\tEnter elements[%llu] : ", i+1);
                scanf("%lf", &input);
                totalSum += input;
                unsigned long long j = i - 1;
                while((j >= 0)&&(elements[j] > input))
                {
                    elements[j+1] = elements[j];
                    j--;
                }
                elements[j + 1] = input;
            }
            printf("\n\tEnter the givenSum : ");
            scanf("%lf", &givenSum);

            printf("\n\tThe set of given elements are : \n\n\t%lf{", elements[0]);
            for(i = 0; i < range; i++)
            {
                printf(",\t%lf", elements[i]);
            }
            printf("\t}");

            if(elements[0] > givenSum)
            {
                printf("\n\tERROR : givenSum : %lf must be grater than element[0] : %lf",
                       givenSum, elements[0]);
            }
            else if(totalSum < givenSum)
            {
                printf("\n\tERROR : givenSum %lf must be less than totalSum %lf :",
                       givenSum, totalSum);
            }
            else
            {
                printf("\n\tAll the possible combinations of Sum Of Subsets are : ");
                SumOfSub(0, 0, totalSum);
            }

        }
        else
        {
            printf("\n\tERROR : You can not input more than 10,00,00,000 elements .");
        }
        printf("\n\n\tDo you want to input more [y/n]? : ");
        key = _getche();
    }
    return 0;
}

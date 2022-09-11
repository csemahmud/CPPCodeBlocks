#include<stdio.h>
#include<conio.h>
#include<math.h>

///* Author : Mahmudul Hasan Khan CSE */

const int RANGE = 11;
unsigned long long ofpNumSet[RANGE];

int main()
{

    int index = 0;
    unsigned long long ofpNum1 = 3, ofpNum2 = 5, ofpNum3;

    ofpNumSet[index++] = ofpNum1;
    ofpNumSet[index++] = ofpNum2;

    while(index < RANGE){

        ofpNum3 = ofpNum2 + ofpNum1;
        bool isPrime = true;

        if(!(ofpNum3%2)) {

            isPrime = false;

        } else {

            for(unsigned long long i = 3; i <= sqrt((long double)ofpNum3); i+=2){

                    if(!(ofpNum3%i)){

                        isPrime = false;
                        break;

                    }

            }

        }

        if(isPrime){

            ofpNumSet[index++] = ofpNum3;

        }

        ofpNum1 = ofpNum2;
        ofpNum2 = ofpNum3;

    }

    printf("\n\n\n\t%d Odd Fibonacci Primes Are : \t%llu", RANGE, ofpNumSet[0]);

    for(int i = 1; i < RANGE; i++){

            printf(",\t%llu", ofpNumSet[i]);

    }

    printf("\n\n");

    while(true){

        printf("\n\n\tEnter an Unsigned Long Long Number [ 0 to Exit ..... ] : ");
        unsigned long long ullNum;
        scanf("%llu", &ullNum);

        if(ullNum == 0){

            break;

        }

        printf("\n\t%llu = ", ullNum);

        for(int i = 0; i < RANGE; i++){

            int counter = 0;

            while((ullNum%ofpNumSet[i]) == 0){

                counter++;
                ullNum = ullNum/ofpNumSet[i];

            }

            if(counter > 0){

                printf("%llu^%d\tX\t", ofpNumSet[i], counter);

            }
        }

        printf("\t%llu", ullNum);

    }

    getch();
    return 0;
}

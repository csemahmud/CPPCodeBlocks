#include <stdio.h>
#include <conio.h>
#include <math.h>

///* Author : KHAN MAHMUDUL HASAN CSE BD JP */

const int RANGE = 11;
unsigned long long ofpNumSet[RANGE];

void viewElements(unsigned long long longNum1, unsigned long long longNum2){

    bool isElementSet[sizeof(ofpNumSet)] = {false};

    printf("\n\t%llu = \t", longNum1);

    if(longNum1 > 1){

            for(int i = 0; (i < (sizeof(ofpNumSet)/sizeof(ofpNumSet[i]))&&(ofpNumSet[i] <= longNum1)); i++){

                    int counter = 0;
                    while(!(longNum1%ofpNumSet[i])){

                            counter++;
                            longNum1 /= ofpNumSet[i];

                    }
                    if(counter > 0){

                        isElementSet[i] = true;
                        printf("%llu^%d\tX\t", ofpNumSet[i], counter);

                    }

            }

    }

    printf("%llu\t", longNum1);

    unsigned long long maxCommonOFPElement = 0;
    printf("\n\t%llu = \t", longNum2);

    if(longNum2 > 1){

            for(int i = 0; (i < (sizeof(ofpNumSet)/sizeof(ofpNumSet[i]))&&(ofpNumSet[i] <= longNum2)); i++){

                    int counter = 0;
                    while(!(longNum2%ofpNumSet[i])){

                            counter++;
                            longNum2 /= ofpNumSet[i];

                    }
                    if(counter > 0){

                        printf("%llu^%d\tX\t", ofpNumSet[i], counter);
                        if(isElementSet[i]){
                            maxCommonOFPElement = ofpNumSet[i];
                        }

                    }

            }

    }

    printf("%llu\t", longNum2);

    printf("\n\tThe Greatest Common Odd Fibonacci Prime Element for above two numbers is :: %llu\n",
           maxCommonOFPElement);

}

int main()
{
    int index = 0;
    unsigned long long ofpNum1 = 3, ofpNum2 = 5, ofpNum3;

    ofpNumSet[index++] = ofpNum1;
    ofpNumSet[index++] = ofpNum2;

    while(index < RANGE){

            ofpNum3 = ofpNum2 + ofpNum1;
            bool isPrime = true;

            if(!(ofpNum3%2)){

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

    printf("\n\n\n\t%d Odd Fibonacci Prime Numbers are\t%llu", RANGE, ofpNumSet[0]);

    for(int i = 1; i < RANGE; i++){

            printf("\t%llu", ofpNumSet[i]);

    }

    printf("\n\n");

    viewElements(7800, 11570);
    viewElements(5142290, 2571145);
    viewElements(72, 11570);
    viewElements(3, 11570);
    viewElements(5, 11570);
    viewElements(0, 11570);
    viewElements(297584559284266491, 495974265473777485);
    viewElements(0, 99194853094755497);

    getch();
    return 0;
}

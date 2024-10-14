#include <bits/stdc++.h>
using namespace std;

///* Author : KHAN MAHMUDUL HASAN CSE BD JP */

int main()
{
    int p;

    cin >> p;

    int factorial[11];

    factorial[0] = 1;
    for(int i = 1; i < 11; i++){

            factorial[i] = factorial[i - 1] * i;

    }

    int counter = 0;
    while(p > 0){

        int remainingCoin = 100;
        for(int i = 10; ((i > 0)&&(remainingCoin > 0));){
            if(p >= factorial[i]){
                p -= factorial[i];
                remainingCoin--;
                counter++;
            } else {
                i--;
                remainingCoin = 100;
            }
        }
    }

    cout << counter << endl;

    return 0;
}

/*

Sample input 1

9

Sample output 1

3

Sample input 2

119

Sample output 2

10

Sample input 3

10000000

Sample output 3

24

*/

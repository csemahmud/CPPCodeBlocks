#include <bits/stdc++.h>
using namespace std;

///* Author : KHAN MAHMUDUL HASAN CSE BD JP */

int main()
{
    for(int i = 0; i < 26; i++){

        int n;
        cin >> n;

        cout << (char)(n + 96);
    }
    return 0;
}

/*

Sample input 1

1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26

Sample output 1

abcdefghijklmnopqrstuvwxyz

Sample input 2

2 1 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26

Sample output 2

bacdefghijklmnopqrstuvwxyz

Sample input 3

5 11 12 16 25 17 18 1 7 10 4 23 20 3 2 24 26 19 14 9 6 22 8 13 15 21

Sample output 3

eklpyqragjdwtcbxzsnifvhmou

*/

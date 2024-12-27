#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin >> n;

    int ar[n];
    for(int i = 0; i < n; i++){
        cin >> ar[i];
    }

    bool flag = true;
    int counter = 0;

    while(flag){
        for(int i = 0; (i < n)&&flag; i++){
            if(ar[i]%2 == 0){
                ar[i] = ar[i] / 2;
            } else {
                flag = false;
                break;
            }
        }
        if(flag){
            counter++;
        }
    }
    cout << counter;


    return 0;
}

/*

Sample input 1

3
8 12 40

Sample output 1

2

Sample input 2

4
5 6 8 10

Sample output 2

0

Sample input 3

6
382253568 723152896 37802240 379425024 404894720 471526144

Sample output 3

8

*/
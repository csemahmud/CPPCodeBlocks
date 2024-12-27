#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;
    cin >> str;
    int lower = 0, upper = 0;
    for(int i = 0; i < str.length(); i++){
        if((str[i] >= 'A')&&(str[i] <= 'Z')){
            upper++; 
        } else if((str[i] >= 'a')&&(str[i] <= 'z')){
            lower++;
        }
    }

    if(upper > lower){
        for(int i = 0; i < str.length(); i++){
          cout << (char)toupper(str[i]);
        }
    } else {
        for(int i = 0; i < str.length(); i++){
          cout << (char)tolower(str[i]);
        }
    }

    return 0;
}

/*

Sample input 1

AtCoder

Sample output 1

atcoder

Sample input 2

SunTORY

Sample output 2

SUNTORY

Sample input 3

a

Sample output 3

a

*/

int main1() {

    int n, m;

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int h;
        cin >> h;
        if(m >= h){
            m -= h;
        } else {
            cout << i;
            return 0;
        }
    }

    cout << n;
    return 0;
}

/*

Sample input 1

5 10
2 3 2 5 3

Sample output 1

3

Sample input 2

5 10
2 3 2 3 5

Sample output 2

4

Sample input 3

1 5
1

Sample output 3

1

*/
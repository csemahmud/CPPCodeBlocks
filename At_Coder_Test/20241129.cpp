#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;

    cin >> str;
    
    int sum = 0;
    
    for(int i = 0; i < str.length(); i++){
      if(str[i] == '1'){
        sum++;
      }
    }
    
    cout << sum;

    return 0;
}

/*

Sample input 1

101

Sample output 1

2

Sample input 2

000

Sample output 2

0

*/

int main1() {

    int a, b;

    cin >> a;
    cin >> b;
    
    int sum = a+b;

    if(sum < 10){
      cout << sum;
    } else {
      cout << "error";
    }

    return 0;
}

/*

Sample input 1

6 3

Sample output 1

9

Sample input 2

6 4

Sample output 2

error

*/
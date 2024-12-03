#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

    if(a == 1){
      a = 100;
    }
    
    if(b == 1){
      b = 100;
    }

    if(a > b){
      cout << "Alice";
    } else if(b > a){
      cout << "Bob";
    } else {
      cout << "Draw";
    }

    return 0;
}

/*

Sample input 1

8 6

Sample output 1

Alice

Sample input 2

1 1

Sample output 2

Draw

Sample input 2

13 1

Sample output 2

Bob

*/
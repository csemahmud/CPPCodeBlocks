#include <bits/stdc++.h>
using namespace std;

int main() {

    string str = "ABC";

    char ch;

    cin >> ch;

    if(ch == '>'){
        str = "BAC";
    }

    cin >> ch;

    if(ch == '>'){
        if(str[0] == 'A'){
            str = "CAB";
        } else if(str[0] == 'B'){
            str = "BCA";
        }
    }

    cin >> ch;

    if(ch == '>'){
        if(str[0] == 'A'){
            str = "ACB";
        } else if(str[0] == 'B'){
            str = "CBA";
        }
    }

    cout << str[1];
    
    return 0;
   
}

/*

Sample input 1

< < <

Sample output 1

B

Sample input 2

< < >

Sample output 2

C

*/
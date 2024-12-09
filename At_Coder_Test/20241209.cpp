#include <bits/stdc++.h>
using namespace std;

int main() {

    int h, w;
    
    cin >> h >> w;

    for(int i = 0; i < w+2; i++){
        cout << "#";
    }
    
    cout << endl;

    for(int i = 0; i < h; i++){
        cout << "#";
        for(int i = 0; i < w; i++){
            char ch;
            cin >> ch;
            cout << ch;
        }
        cout << "#" << endl;;
    }

    for(int i = 0; i < w+2; i++){
        cout << "#";
    }

    return 0;
}

/*

Sample input 1

2 3
abc
arc

Sample output 1

#####
#abc#
#arc#
#####

Sample input 2

1 1
z

Sample output 2

###
#z#
###

*/
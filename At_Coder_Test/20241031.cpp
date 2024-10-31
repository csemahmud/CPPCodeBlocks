#include <bits/stdc++.h>
using namespace std;

int main() {
    
    char ch;
    
    cin >> ch;
    
    switch(ch){
        case 'A':
        cout << 'T';
        break;
        case 'T':
        cout << 'A';
        break;
        case 'G':
        cout << 'C';
        break;
        case 'C':
        cout << 'G';
        break;
    }
    
    return 0;

}

/*

Sample input 1

A

Sample output 1

T

Sample input 2

G

Sample output 2

C

*/
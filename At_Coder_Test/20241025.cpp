#include <bits/stdc++.h> 
using namespace std; 

int main() {
    
    string str;
    cin >> str;
    int start = 0;
    int end = 0;
    
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'A'){
            start = i;
            break;
        }
    }
    
    for(int i = str.length() - 1; i >= 0; i--){
        if(str[i] == 'Z'){
            end = i;
            break;
        }
    }
    
    cout << end - start + 1;

	return 0;
	
} 

/*

Sample input 1

QWERTYASDFZXCV

Sample output 1

5

Sample input 2

ZABCZ

Sample output 2

4

Sample input 3

HASFJGHOGAKZZFEGA

Sample output 3

12

*/
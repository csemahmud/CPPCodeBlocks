#include <bits/stdc++.h>
using namespace std;

int main() {

    
    int R1 = -1, R2 = -1, B1 = -1, B2 = -1, K = -1;
    for(int i = 0; i < 8; i++){
        char ch;
        cin >> ch;
        switch(ch){
            case 'B': 
            if(B1 == -1){
                B1 = i;
            } else {
                B2 = i;
            }
            break;
            case 'R': 
            if(R2 == -1){
                R2 = i;
            } else {
                R1 = i;
            }
            break;
            case 'K':
            K = i;
            break;
        }
    }
    
    bool flag = true;
    
    if(((B1 - B2)%2 == 0)){
        flag = false;
    }
    if((K>R1)||(K<R2)){
        flag = false;
    }
    
    if(flag){
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
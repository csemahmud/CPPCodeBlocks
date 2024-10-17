#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
    int n;
    
    cin >> n;
    
    int max = 1;
    
    bool flag = true;
    for(int i = 1; i <= n; i++){
        flag = true;
        for(int j = 2; (j < n)&&flag; j++){
            int pow1 = (int) pow(i, j);
            if(pow1 > max && pow1 <= n){
                max = pow1;
            }
            if(pow1 > n){
                flag = false;
            }
        } 
    }
    
    cout << max;

    return 0;
}
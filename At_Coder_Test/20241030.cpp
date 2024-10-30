#include <bits/stdc++.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    
    long long k;
    
    cin >> k;
    
    string str = "";
    
    while(k > 0){
        long long r = k%2;
        k = k/2;
        if(r == 1){
            str = "2" + str;
        } else {
            str = "0" + str;
        }
    }
    
    cout << str;

}

/*

Sample input 1

3

Sample output 1

22

Sample input 2

11

Sample output 2

2022

Sample input 3

923423423420220108

Sample output 3

220022020000202020002022022000002020002222002200002022002200

*/

int main2() {
    
    int n;
    
    cin >> n;
    
    double x[n];
    double y[n];
    
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }
    
    double max = 0.000000;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            double distance 
            = sqrt((double)(((x[j] - x[i])*(x[j] - x[i])) + ((y[j] - y[i])*(y[j] - y[i]))));
            
            if(max < distance){
                max = distance;
            }
        }
    }
    
    std::cout << std::fixed;
    std::cout << std::setprecision(10);
    cout << max;

}

/*

Sample input 1

3
0 0
0 1
1 1

Sample output 1

1.4142135624

Sample input 2

5
315 271
-2 -621
-205 -511
-952 482
165 463

Sample output 2

1455.7159750446

*/

long long f(long long t){
    return t*t + 2*t + 3;
}

int main1() {
    
    long long t;
    
    cin >> t;
    
    cout << f(f(f(t)+t)+f(f(t)));
    
    return 0;

}

/*

Sample input 1

0

Sample output 1

1371

Sample input 2

3

Sample output 2

722502

Sample input 3

10

Sample output 3

1111355571

*/
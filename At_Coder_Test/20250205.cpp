#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, m1, m2, l1, l2;
    
    cin >> n >> m1;
    l1 = 0;
    m2 = m1;
    l2 = l1;
    
    for(int i = 0; i < n; i++){
        char ch;
        cin >> ch;
        switch(ch){
            case '0':
            m2 = m1;
            l2 = l1;
            break;
            case '1':
            if(m2 > 0){
                m2--;
            } else if(l2 > 0){
                l2--;
            } else {
                l1++;
            }
            break;
            case '2':
            if(l2 > 0){
                l2--;
            } else {
                l1++;
            }
            break;
        }
    }
    
    cout << l1;
     
    return 0;
}

/*

Sample input 1

6 1
112022

Sample output 1

2

Sample input 2

3 1
222

Sample output 2

3

Sample input 3

2 1
01

Sample output 3

0

*/

int main1() {
    
    int k, g1, g2, m1, m2;
    
    cin >> k >> g1 >> m1;
    
    g2 = 0;
    m2 = 0;
    
    for(int i = 0; i < k; i++){
        if(g2 == g1){
            g2 = 0;
        }
        else if(m2 == 0){
            m2 = m1;
        } else {
            int d = g1 - g2;
            if(m2 >= d){
                m2 = m2 - d;
                g2 = d;
            } else {
                g2 = g2 + m2;
                m2 = 0;
            }
        }
    }
    
    cout << g2 << " " << m2;
     
    return 0;
}

/*

Sample input 1

5 300 500

Sample output 1

200 500

Sample input 2

5 100 200

Sample output 2

0 0

*/

int main2() {
    
    int n, s, k;
    
    cin >> n >> s >> k;
    
    int sum = 0;
    
    for(int i = 0; i < n; i++){
        int p, q;
        cin >> p >> q;
        sum += p*q;
    }
    
    if(sum < s){
        cout << sum + k;
    } else{
        cout << sum;
    }
     
    return 0;
}

/*

Sample input 1

2 2000 500
1000 1
100 6

Sample output 1

2100

Sample input 2

3 2000 500
1000 1
100 6
5000 1

Sample output 2

6600

Sample input 3

2 2000 500
1000 1
1000 1

Sample output 3

2000

*/
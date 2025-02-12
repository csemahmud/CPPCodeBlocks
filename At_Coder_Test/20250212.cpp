#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long n;
    
    cin >> n;
    
    long long l[n], x[n], r[n];
    
    long long sum1 = 0, sum2 = 0;
    
    for(int i = 0; i < n; i++){
        cin >> l[i] >> r[i];
        x[i] = l[i];
        sum1 += l[i];
        sum2 += r[i];
    }
    
    if(sum1 > 0){
        cout << "No";
        return 0;
    }
    if(sum2 < 0){
        cout << "No";
        return 0;
    }
    for(int i = 0; (i < n)&&(sum1<0); i++){
        if(sum1 + (r[i]-l[i])<=0){
            sum1 += (r[i]-l[i]);
            x[i] = r[i];
        } else {
            x[i] += (0 - sum1);
            sum1 = 0;
        }
    }
    
    cout << "Yes" << endl;
    for(int i = 0; i <n; i++){
        cout << x[i] << " ";
    }
    
    return 0;
}

/*

Sample input 1

3
3 5
-4 1
-2 3

Sample output 1

Yes
5 -3 -2

Sample input 2

3
1 2
1 2
1 2

Sample output 2

No

Sample input 3

6
-87 12
-60 -54
2 38
-76 6
87 96
-17 38

Sample output 3

Yes
12 -54 38 -66 87 -17

*/

int main1() {
    
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya;
    cin >> xb >> yb;
    cin >> xc >> yc;
    int d1 = (xa-xb)*(xa-xb) + (ya-yb)*(ya-yb);
    int d2 = (xb-xc)*(xb-xc) + (yb-yc)*(yb-yc);
    int d3 = (xc-xa)*(xc-xa) + (yc-ya)*(yc-ya); 
    
    if(d1 == (d2+d3)){
        cout << "Yes";
        return 0;
    } else if(d2 == (d3+d1)){
        cout << "Yes";
        return 0;
    } else if(d3 == (d1+d2)){
        cout << "Yes";
        return 0;
    }
    
    cout << "No";
    return 0;
}

/*

Sample input 1

0 0
4 0
0 3

Sample output 1

Yes

Sample input 2

-4 3
2 1
3 4

Sample output 2

Yes

Sample input 3

2 4
-3 2
1 -2

Sample output 3

No

*/

int main2() {
    
    int r, g, b;
    
    string c;
    
    cin >> r >> g >> b;
    cin >> c;
    
    switch(c[0]){
        case 'R':
        cout << (g < b ? g : b);
        return 0;
        case 'G':
        cout << (r < b ? r : b);
        return 0;
        case 'B':
        cout << (g < r ? g : r);
        return 0;
    }
    
    return 0;
}

/*

Sample input 1

20 30 10
Blue

Sample output 1

20

Sample input 2

100 100 100
Red

Sample output 2

100

Sample input 3

37 39 93
Blue

Sample output 3

37

*/


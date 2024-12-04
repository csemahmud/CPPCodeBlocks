#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin >> n;

    int nxt[n+5];
    int st = 0;

    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;
        if(a == -1){
            st = i;
        } else {
          nxt[a] = i;
        }
    }
    
    cout <<  st;

    for(int i = 1; i < n; i++){
        st = nxt[st];
        cout << " " << st;
    }

    return 0;
}

/*

Sample input 1

6
4 1 -1 5 3 2

Sample output 1

3 5 4 1 2 6

Sample input 2

10
-1 1 2 3 4 5 6 7 8 9

Sample output 2

1 2 3 4 5 6 7 8 9 10

Sample input 3

30
3 25 20 6 18 12 26 1 29 -1 21 17 23 9 8 30 10 15 22 27 4 13 5 11 16 24 28 2 19 7

Sample output 3

10 17 12 6 4 21 11 24 26 7 30 16 25 2 28 27 20 3 1 8 15 18 5 23 13 22 19 29 9 14

*/

int main2() {

    string str;

    cin >> str;

    int i = 0;

    while(i < str.length()&&str[i]=='A'){
        i++;
    }

    while(i < str.length()&&str[i]=='B'){
        i++;
    }

    while(i < str.length()&&str[i]=='C'){
        i++;
    }

    if(i == str.length()){
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}

/*

Sample input 1

AAABBBCCCCCCC

Sample output 1

Yes

Sample input 2

ACABABCBC

Sample output 2

No

Sample input 3

A

Sample output 3

Yes

Sample input 4

ABBBBBBBBBBBBBCCCCCC

Sample output 4

Yes

*/

int main1() {

    int n;

    cin >> n;

    int sumX = 0, sumY = 0;

    for(int i = 0; i < n; i++){
        int x, y;

        cin >> x >> y;

        sumX += x;
        sumY += y;
    }

    if(sumX > sumY){
        cout << "Takahashi";
    } else if(sumX < sumY){
        cout << "Aoki";
    } else {
        cout << "Draw";
    }

    return 0;
}

/*

Sample input 1

4
10 2
10 1
10 2
3 2

Sample output 1

Takahashi

Sample input 2

6
5 4
4 5
2 4
1 6
7 1
3 2

Sample output 2

Draw

Sample input 3

4
0 0
10 10
50 50
0 100

Sample output 3

Aoki

*/
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;

    cin >> n >> m;

    int ar[n];
    
    for(int i = 0; i < n; i++){
        ar[i] = 0;
    }

    for(int i = 0; i < (m*2); i++){
        int x;
        cin >> x;
        ar[x-1]++;
    }

    for(int i = 0; i < n; i++){
        cout << ar[i] << endl;
    }

    return 0;
}

/*

Sample input 1

4 3
1 2
2 3
1 4

Sample output 1

2
2
1
1

Sample input 2

2 5
1 2
2 1
1 2
2 1
1 2

Sample output 2

5
5

Sample input 3

8 8
1 2
3 4
1 5
2 8
3 7
5 2
4 1
6 8

Sample output 3

3
3
2
2
2
1
1
2

*/
#include <bits/stdc++.h>
using namespace std;

int ar[35][35];

int main() {

    int n;

    cin >> n;


    for(int i = 0; i < n; i++){
        ar[i][0] = 1;
        ar[i][i] = 1;
        for(int j = 1; j <= i; j++){
            ar[i][j] = ar[i-1][j-1] + ar[i-1][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*

Sample input 1

3

Sample output 1

1
1 1
1 2 1

Sample input 2

10

Sample output 2

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1
1 7 21 35 35 21 7 1
1 8 28 56 70 56 28 8 1
1 9 36 84 126 126 84 36 9 1

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sq[n];
    int end = 0;
    for(int i = 0; i < n; i++){
        cin >> sq[end];
        while((end > 0)&&(sq[end] == sq[end-1])){
            sq[end-1]++;
            sq[end] = 0;
            end--;
        }
        end++;
    }

    cout << end;

    return 0;
}

/*

Sample input 1

7
2 1 1 3 5 3 3

Sample output 1

3

Sample input 2

5
0 0 0 1 2

Sample output 2

4

*/

int main2() {
    int n;
    cin >> n;
    char grid[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            char ch;
            cin >> ch;
            if(grid[i][j] != ch){
                cout << i+1 << " " << j+1;
                return 0;
            }
        }
    }

    return 0;
}

/*

Sample input 1

3
abc
def
ghi
abc
bef
ghi

Sample output 1

2 1

Sample input 2

1
f
q

Sample output 2

1 1

Sample input 3

10
eixfumagit
vtophbepfe
pxbfgsqcug
ugpugtsxzq
bvfhxyehfk
uqyfwtmglr
jaitenfqiq
acwvufpfvv
jhaddglpva
aacxsyqvoj
eixfumagit
vtophbepfe
pxbfgsqcug
ugpugtsxzq
bvfhxyehok
uqyfwtmglr
jaitenfqiq
acwvufpfvv
jhaddglpva
aacxsyqvoj

Sample output 3

5 9

*/

int main1() {

    int sumA, sumB;

    sumA = 0;
    sumB = 0;

    for(int i = 0; i < 9; i++){
        int n;
        cin >> n;
        sumA += n;
    }

    for(int i = 0; i < 8; i++){
        int n;
        cin >> n;
        sumB += n;
    }

    cout << sumA - sumB + 1;

    return 0;

}

/*

Sample input 1

0 1 0 1 2 2 0 0 1
1 1 0 0 0 0 1 0

Sample output 1

5

Sample input 2

0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0

Sample output 2

1

*/
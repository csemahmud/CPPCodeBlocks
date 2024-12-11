#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n, a, b, sum = 0, max = 0;

    cin >> n;

    for(long long i = 0; i < n; i++){
        cin >> a;
        cin >> b;
        sum += a;
        if(max < (b - a)){
            max = (b - a);
        }
    }

    cout << sum + max;

    return 0;
}

/*

Sample input 1

3
4 10
5 8
2 9

Sample output 1

18

Sample input 2

5
1 1
1 1
1 1
1 1
1 1

Sample output 2

5

Sample input 3

10
690830957 868532399
741145463 930111470
612846445 948344128
540375785 925723427
723092548 925021315
928915367 973970164
563314352 832796216
562681294 868338948
923012648 954764623
691107436 891127278

Sample output 3

7362669937

*/

int main2() {

    string str1, str2;
    cin >> str1;
    cin >> str2;

    for(int i = 0, j = 0; i < str2.length(); i++){
        if(str2[i] == str1[j]){
            cout << i+1 << " ";
            j++;
        }
    }

    return 0;
}

/*

Sample input 1

abc
axbxyc

Sample output 1

1 3 6

Sample input 2

aaaa
bbbbaaaa

Sample output 2

5 6 7 8

Sample input 3

atcoder
atcoder

Sample output 3

1 2 3 4 5 6 7

*/

int main1() {

    long long n, x, y, z;

    cin >> n >> x >> y >> z;

    if((x <= z)&&(z <= y)){
        cout << "Yes";
    } else if((y <= z)&&(z <= x)){
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}

/*

Sample input 1

7 6 1 3

Sample output 1

Yes

Sample input 2

10 3 2 9

Sample output 2

No

Sample input 3

100 23 67 45

Sample output 3

Yes

*/
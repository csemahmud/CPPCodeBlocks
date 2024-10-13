#include <bits/stdc++.h>
using namespace std;

///* Author : KHAN MAHMUDUL HASAN CSE BD JP */

int main() {

    int num_N, num_M, num_L, num_Q;

    cin >> num_N;
    vector<int> vec_A(num_N);
    for (int i = 0; i < num_N; i++){
            cin >> vec_A[i];
    }

    cin >> num_M;
    vector<int> vec_B(num_M);
    for (int i = 0; i < num_M; i++){
            cin >> vec_B[i];
    }

    cin >> num_L;
    vector<int> vec_C(num_L);
    for (int i = 0; i < num_L; i++){
            cin >> vec_C[i];
    }

    cin >> num_Q;
    vector<int> vec_D(num_Q);
    for (int i = 0; i < num_Q; i++){
            cin >> vec_D[i];
    }

    set<int> total_AB;

    for (int i = 0; i < num_N; i++) {

        for (int j = 0; j < num_M; j++) {

            total_AB.insert(vec_A[i] + vec_B[j]);

        }

    }

    for (int i = 0; i < num_Q; i++) {

        bool found = false;
        for (int k = 0; k < num_L; k++) {

            if (total_AB.find(vec_D[i] - vec_C[k]) != total_AB.end()) {

                found = true;
                break;

            }

        }
        if (found) {

            cout << "Yes" << endl;

        } else {

            cout << "No" << endl;

        }
    }

    return 0;
}

/*

Sample input 1

3
1 2 3
2
2 4
6
1 2 4 8 16 32
4
1 5 10 50

Sample output 1

No
Yes
Yes
No

*/

int main2()
{
    int a[100], i = 0;

    do{

        cin >> a[i];

    } while(a[i++] != 0);

    for(int j = i - 1; j >= 0; j--){

        cout << a[j] << endl;

    }

    return 0;
}

/*

Sample input 1

3
2
1
0

Sample output 1

0
1
2
3

Sample input 2

0

Sample output 2

0

Sample input 3

123
456
789
987
654
321
0

Sample output 3

0
321
654
987
789
456
123

*/

int main1()
{
    string str;
    getline(cin, str);

    bool flag = true;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '|'){
            flag = !flag;
        }
        if(flag&&(str[i] != '|')){
            cout << str[i];
        }
    }

    return 0;
}

/*

Sample input 1

atcoder|beginner|contest

Sample output 1

atcodercontest

Sample input 2

|spoiler|

Sample output 2



Sample input 3

||xyz

Sample output 3

xyz

*/

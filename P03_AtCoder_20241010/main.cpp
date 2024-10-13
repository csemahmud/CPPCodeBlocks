#include <bits/stdc++.h>
using namespace std;

///* Author : KHAN MAHMUDUL HASAN CSE BD JP */

int main() {

    long long num_n, num_k;
    long long num_x, num_y;
    cin >> num_n >> num_k;

    vector<pair<long long, long long>> vec_a;

    for (int i = 0; i < num_n; i++) {

        cin >> num_x >> num_y;
        vec_a.push_back({num_x, num_y});

    }

    sort(vec_a.begin(), vec_a.end());

    for (int i = 0; i < num_n; i++) {

        if (vec_a[i].first > num_k) {

            break;

        }
        num_k += vec_a[i].second;
    }

    cout << num_k << endl;
    return 0;
}

/*

Sample input 1

2 3
2 1
5 10

Sample output 1

4

Sample input 2

5 1000000000
1 1000000000
2 1000000000
3 1000000000
4 1000000000
5 1000000000

Sample output 2

6000000000

Sample input 3

3 2
5 5
2 1
2 2

Sample output 3

10

*/

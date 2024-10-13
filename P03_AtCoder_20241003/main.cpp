#include <bits/stdc++.h>
using namespace std;

///* Author : KHAN MAHMUDUL HASAN CSE BD JP */

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int num_x1, num_y1, num_x2, num_y2;
    cin >> num_x1 >> num_y1 >> num_x2 >> num_y2;

    int num_dx = (num_x2 - num_x1), num_dy = (num_y2 - num_y1);
    int num_x = num_x2, num_y = num_y2;

    for (int i = 0; i < 2; ++i) {

        int num__dx = -num_dy;
        int num__dy = num_dx;
        num_dx = num__dx;
        num_dy = num__dy;

        num_x += num_dx;
        num_y += num_dy;

        cout << num_x << " " << num_y;

        if (i == 0) {

            cout << " ";

        } else{

            cout << endl;

        }

    }

    return 0;
}

/*

Sample input 1

0 0 0 1

Sample output 1

-1 1 -1 0

Sample input 2

2 3 6 6

Sample output 2

3 10 -1 7

Sample input 3

31 -41 -59 26

Sample output 3

-126 -64 -36 -131

*/

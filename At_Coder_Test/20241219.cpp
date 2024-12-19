#include <bits/stdc++.h>
using namespace std;

int main() {

    int h, w;
    
    cin >> h >> w;

    char ch[w];

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> ch[j];
        }
        for(int j = 0; j < w; j++){
            cout << ch[j];
        }
        cout << endl;
        for(int j = 0; j < w; j++){
            cout << ch[j];
        }
        cout << endl;
    }

    return 0;
}

/*

Sample input 1

2 2
*.
.*

Sample output 1

*.
*.
.*
.*

Sample input 2

1 1
z

Sample output 2

1 4
***.

Sample input 3

9 20
.....***....***.....
....*...*..*...*....
...*.....**.....*...
...*.....*......*...
....*.....*....*....
.....**..*...**.....
.......*..*.*.......
........**.*........
.........**.........

Sample output 3

.....***....***.....
.....***....***.....
....*...*..*...*....
....*...*..*...*....
...*.....**.....*...
...*.....**.....*...
...*.....*......*...
...*.....*......*...
....*.....*....*....
....*.....*....*....
.....**..*...**.....
.....**..*...**.....
.......*..*.*.......
.......*..*.*.......
........**.*........
........**.*........
.........**.........
.........**.........

*/

int main1() {

    int h, w;
    
    cin >> h >> w;

    for(int i = 0; i < w+2; i++){
        cout << "#";
    }
    
    cout << endl;

    for(int i = 0; i < h; i++){
        cout << "#";
        for(int i = 0; i < w; i++){
            char ch;
            cin >> ch;
            cout << ch;
        }
        cout << "#" << endl;;
    }

    for(int i = 0; i < w+2; i++){
        cout << "#";
    }

    return 0;
}

/*

Sample input 1

2 3
abc
arc

Sample output 1

#####
#abc#
#arc#
#####

Sample input 2

1 1
z

Sample output 2

###
#z#
###

*/
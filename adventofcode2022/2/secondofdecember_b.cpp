//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <map>

#define endl '\n'

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //AX for Rock
    //BY for Paper
    //CZ for Scissors
    map<char, map<char, short>> m = {{'A', {{'X', 4}, {'Y', 8}, {'Z', 3}}},
                                      {'B', {{'X', 1}, {'Y', 5}, {'Z', 9}}},
                                      {'C', {{'X', 7}, {'Y', 2}, {'Z', 6}}}
    };

    map<char, map<char, char>> win_lose_draw_chars = {{'A', {{'X', 'Z'}, {'Y', 'X'}, {'Z', 'Y'}}},
                                     {'B', {{'X', 'X'}, {'Y', 'Y'}, {'Z', 'Z'}}},
                                     {'C', {{'X', 'Y'}, {'Y', 'Z'}, {'Z', 'X'}}}
    };
                             //win: 6
    ifstream infile("input.txt", ios::in);
    int sum = 0;
    char a,b;
    while(infile >> a >> b) {
        sum += m[a][win_lose_draw_chars[a][b]];
    }

    cout << sum << endl;
    return 0;
}
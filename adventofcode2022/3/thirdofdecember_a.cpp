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


    ifstream infile("input.txt", ios::in);
    int sum = 0;
    string s;
    while(infile >> s) {
        string::iterator mid = s.begin() + s.length() / 2;
        sort(s.begin(), mid);
        sort(mid, s.end());
        auto left_iter = s.begin();
        while(left_iter != mid+1) {
            if(*left_iter == *mid) {
                break;
            }

            if(*left_iter < *mid) {
                ++left_iter;
            } else {
                ++mid;
            }
        }

        if(*mid > 'Z') {
            sum += *mid - 96;
        } else {
            sum += *mid - 38;
        }
    }

    cout << sum << endl;
    return 0;
}
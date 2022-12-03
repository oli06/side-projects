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
    string s, s2, s3;
    while(infile >> s >> s2 >> s3) {
        sort(s.begin(), s.end());
        sort(s2.begin(), s2.end());
        sort(s3.begin(), s3.end());

        auto s1_iter = s.begin();
        auto s2_iter = s2.begin();
        auto s3_iter = s3.begin();
        while(s1_iter != s.end()) {
            if(*s1_iter == *s2_iter) {
                //check if it matches with 3
                while(*s3_iter < *s1_iter) {
                    ++s3_iter;
                }
                if(*s1_iter == *s3_iter) {
                    break;
                } else {
                    ++s1_iter;
                    ++s2_iter;
                    continue;
                }
            }

            if(*s1_iter < *s2_iter) {
                ++s1_iter;
            } else {
                ++s2_iter;
            }
        }

        if(*s1_iter > 'Z') {
            sum += *s1_iter - 96;
        } else {
            sum += *s1_iter - 38;
        }
    }

    cout << sum << endl;
    return 0;
}
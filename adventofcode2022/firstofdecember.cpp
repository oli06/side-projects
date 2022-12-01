//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#define endl '\n'

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream infile("input.txt", ios::in);
    int m1,m2,m3 = 0;
    int curr = 0;
    string inp;
    while(getline(infile, inp)) {
        if(inp.length() == 0) {
            if(curr > m1) {
                m3 = m2;
                m2 = m1;
                m1 = curr;
            } else if(curr > m2) {
                m3 = m2;
                m2 = curr;
            } else if(curr > m3) {
                m3 = curr;
            }
            curr = 0;
        } else {
            curr += stoi(inp);
        }
    }

    cout << m1+m2+m3 << endl;
    return 0;
}
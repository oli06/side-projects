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
    char c,d,e;
    int a,b,x,y;
    while(infile >>a >>c>>b>>d>>x>>e>>y) {
        if((a <= x && b >= y) || (a >= x && b <= y)) {
            ++sum;
        }
    }


    cout << sum << endl;
    return 0;
}
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <map>
#include <queue>

#define endl '\n'

using namespace std;
using ll = long long;

struct node {
    char value;
    node* next;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream infile("input.txt", ios::in);
    map<char, int> prime_map = {
            {'a', 2},{'b', 3},{'c',5},{'d',7},{'e',11},{'f',13},{'g',17},{'h',19},{'i',23},{'j',29},{'k',31},{'l',37},{'m',41},{'n',43},{'o',47},{'p',53},{'q',59},{'r',61},{'s',67},{'t',71},{'u',73},{'v',79},{'w',83},{'x',89},{'y',97},{'z',101}
    };
    char inchar;
    int product = 1;
    queue<int> q;
    int count = 1;

    while(infile >> inchar) {
        auto prime = prime_map[inchar];
        if(product % prime != 0) {
            q.push(prime);
            product *= prime;
            if(q.size() == 4) {
                break;
            }
        } else {
            q.push(prime);
            product *= prime;
            auto out = q.front();
            product /= out;
            q.pop();
            while(out != prime) {
                out = q.front();
                product /= out;
                q.pop();
            }
        }

        ++count;
    }

    cout << count << endl;
    return 0;
}
#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A"

#include <bits/stdc++.h>
using namespace std;

#include "../../template.h"
#include "../NumberTheory/Pollard.h"

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    auto facs = factorize(n);
    cout << n << ':';
    for (auto x : facs) cout << ' ' << x;
    cout << '\n';
}
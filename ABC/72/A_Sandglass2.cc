#include<bits/stdc++.h>
constexpr long long INFL = 1LL << 60;
constexpr int INF = 1e9;

using namespace std;

using ll = long long;
using P = pair<int, int>;

int main()
{
    int X,t;
    cin >> X >> t;
    cout << X - min(X,t) << endl;
    return 0;
}


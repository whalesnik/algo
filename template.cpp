#include <bits/stdc++.h>

#define _FORTIFY_SOURCE 0
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("fast-math")

using namespace std;

typedef long long ll;
typedef long double ld;
#define int ll
#define double ld

#ifdef LOCAL
#   define dbg(x) cout << #x " = " << (x) << '\n';
#   define dbgf printf
#else
#   define dbg(x)
#   define dbgf(...)
#endif

#define all(x) std::begin(x), std::end(x)
#define rall(x) std::rbegin(x), std::rend(x)

template<typename T1, typename T2>
ostream &operator<<(ostream &out, pair<T1, T2> &p) {
    return out << p.first << ' ' << p.second;
}

template<typename T1, typename T2>
istream &operator>>(istream &in, pair<T1, T2> &p) {
    return in >> p.first >> p.second;
}

const auto boostIO = []() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout.precision(12);
    return 0;
} ();

void solve() {

}

signed main() {

    solve();

    return 0;
}

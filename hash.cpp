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
ostream& operator<<(ostream& out, pair<T1, T2>& p) {
    return out << p.first << ' ' << p.second;
}

template<typename T1, typename T2>
istream& operator>>(istream& in, pair<T1, T2>& p) {
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

    struct M { // Modular
        int MOD;
        int value;

        explicit M(int value_ = 0, int MOD_ = 1e9 + 7) {
            MOD = MOD_;
            value = value_;
            if (value >= MOD) {
                value %= MOD;
            }
        }

        friend M operator + (const M& a, const M& b) {
            assert(a.MOD == b.MOD);
            int new_value = a.value + b.value;
            if (new_value >= a.MOD) {
                new_value -= a.MOD;
            }
            return M(new_value, a.MOD);
        }

        friend M operator - (const M& a, const M& b) {
            assert(a.MOD == b.MOD);
            int new_value = a.value - b.value;
            if (new_value < 0) {
                new_value += a.MOD;
            }
            return M(new_value, a.MOD);
        }

        friend M operator * (const M& a, const M& b) {
            assert(a.MOD == b.MOD);
            int new_value = a.value * b.value % a.MOD;
            return M(new_value, a.MOD);
        }
    };

    struct Hash {
        const int M1 = 2286661337;
        const int M2 = 1e9 + 1000 - 7;
        const M p1 = M(31, M1);
        const M p2 = M(31, M2);
        vector<M> pre_count1, pre_count2;
        vector<M> h1, h2;

        Hash(const string& s) { // Init
            pre_count1.resize(s.size() + 1, M(1, M1));
            pre_count2.resize(s.size() + 1, M(1, M2));
            h1.resize(s.size() + 1, M(0, M1));
            h2.resize(s.size() + 1, M(0, M2));
            for (int i = 1; i <= static_cast<int>(s.size()); i++) {
                pre_count1[i] = pre_count1[i - 1] * p1;
                pre_count2[i] = pre_count2[i - 1] * p2;
                h1[i] = h1[i - 1] * p1 + M(s[i - 1] - 'a' + 1, M1);
                h2[i] = h2[i - 1] * p2 + M(s[i - 1] - 'a' + 1, M2);
            }
        }

        void operator += (const string& s) { // Add a string to the end
            if (pre_count1.empty()) {
                pre_count1.push_back(M(1, M1));
            }
            if (pre_count2.empty()) {
                pre_count2.push_back(M(1, M2));
            }
            if (h1.empty()) {
                h1.push_back(M(0, M1));
            }
            if (h2.empty()) {
                h2.push_back(M(0, M2));
            }
            for (int i = 1; i <= static_cast<int>(s.size()); i++) {
                pre_count1.push_back(pre_count1.back() * p1);
                pre_count2.push_back(pre_count2.back() * p2);
                h1.push_back(h1.back() * p1 + M(s[i - 1] - 'a' + 1, M1));
                h2.push_back(h2.back() * p2 + M(s[i - 1] - 'a' + 1, M2));
            }
        }

        pair<int, int> get_hash(int l, int r) { // Get hash on [l, r)
            auto first = h1[r] - h1[l] * pre_count1[r - l];
            auto second = h2[r] - h2[l] * pre_count2[r - l];
            return { first.value, second.value };
        }
    };

    void solve() {

    }

    signed main() {

        solve();

        return 0;
    }

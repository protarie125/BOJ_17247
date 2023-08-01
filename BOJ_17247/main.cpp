#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	auto ps = vii{};
	for (auto i = 0; i < n; ++i) {
		for (auto j = 0; j < m; ++j) {
			int x;
			cin >> x;

			if (1 == x) {
				ps.push_back({ i, j });
			}
		}
	}

	cout << abs(ps[0].first - ps[1].first) + abs(ps[0].second - ps[1].second);

	return 0;
}
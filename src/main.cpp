#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	while (0 != a || 0 != b || 0 != c ||
		0 != d || 0 != e || 0 != f) {
		auto v = vector<double>{ a,b,c,d,e,f };
		sort(v.begin(), v.end());

		cout << (v[1] + v[2] + v[3] + v[4]) / 4 << '\n';

		cin >> a >> b >> c >> d >> e >> f;
	}

	return 0;
}
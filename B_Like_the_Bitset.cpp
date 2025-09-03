#include <bits/stdc++.h>
 
void solve() {
	int n, k; std::cin >> n >> k;
	std::string s; std::cin >> s, s = " " + s;
	for (int i = 1, j = 1; i <= n; i = ++j) if (s[i] == '1') {
		while (j < n && s[j + 1] == '1') j++;
		if (j - i + 1 >= k) return (void)puts("NO");
	}
	puts("YES");
	int c1 = 0, c2 = std::count_if(s.begin(), s.end(), [&](char ch) -> bool { return ch == '1'; });
	for (int i = 1; i <= n; ++i) 
		std::cout << (s[i] == '1' ? ++c1 : ++c2) << " \n"[i == n];
}
 
int main() { int t; std::cin >> t; while (t--) solve(); return 0; }
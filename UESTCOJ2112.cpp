#include<iostream>
#define N 20
using namespace std;
int main() {
	int n, i, j, k, a[N];
	long long mul[N], ans = -1;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > ans) ans = a[i];
	for (j = 0; j < n; j++) {
		mul[j] = a[j];
		for (k = j + 1; k < n; k++) {
			mul[k] = mul[k - 1] * a[k];
			if (mul[k] > ans) ans = mul[k];
		}
	}
	cout << ans << endl;
	return 0;
}

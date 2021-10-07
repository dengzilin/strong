#include <iostream>
using namespace std;

#define MAX 20

// 因子暂存在res数组中
int res[20];
int p_res = 0;

// 将n进行分解
int resolve(int n, int min_factor = 1);

int main() {
	while (1) {
		int n;
		cin >> n;
		cout << "total num of res:\t" << resolve(n) << endl;
	}
	return 0;
}

int resolve(int n, int min_factor) {
	if (min_factor > n)
		return 0;
	if (min_factor == n) {
		res[p_res] = min_factor;
		p_res++;
		for (int i = 0; i < p_res; i++)
			cout << res[i] << " ";
		cout << endl;
		p_res--;
		return 1;
	}
	res[p_res] = min_factor;
	p_res++;
	int k = resolve(n - min_factor, min_factor);
	p_res--;

	int s = resolve(n, min_factor + 1);
	return k + s;
}

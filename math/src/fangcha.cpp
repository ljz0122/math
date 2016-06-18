#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cout << "样本容量:";
	cin >> n;
	long double x[n];
	int i;
	for (i = 0; i <= n - 1; i++) {
		cout << "输入第" << i + 1 << "个数据:";
		cin >> x[i];
		cout << endl;
	}
	long double s, s1;
	s1 = 0;
	for (i = 0; i <= n - 1; i++) {
		s = x[i] + s1;
		s1 = s;
	}
	long double p = s / n;
	cout << "平均数为" << p << endl;
	long double k, k1;
	k1 = 0;
	for (i = 0; i <= n - 1; i++) {
		k = (x[i] - p) * (x[i] - p) + k1;
		k1 = k;
	}
	long double f = k / n;
	cout << "方差为:" << f << endl;
	cout << "标准差为:" << sqrt(f) << endl;
	return 0;
}

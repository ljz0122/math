#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cout << "样本容量:";
	cin >> n;
	long double x[n], y[n];
	int i;
	for (i = 0; i <= n - 1; i++) {
		cout << "输入第" << i + 1 << "组数据:";
		cin >> x[i] >> y[i];
		cout << endl;
	}
	long double s, s1, s2, s21;
	s1 = s21 = 0;
	for (i = 0; i <= n - 1; i++) {
		s = x[i] + s1;
		s1 = s;
		s2 = y[i] + s21;
		s21 = s2;
	}
	long double p = s / n, p1 = s2 / n;
	//cout<<"平均数为"<<p<<endl;
	long double k, k1, a, a1;
	k1 = a1 = 0;
	for (i = 0; i <= n - 1; i++) {
		k = x[i] * y[i] + k1;
		k1 = k;
		a = x[i] * x[i] + a1;
		a1 = a;
	}
	long double f = (k - n * p * p1) / (a - n * p * p);
	long double e = p1 - f * p;
	cout << "a=" << e << endl << "b=" << f << endl;
	/*cout<<"方差为:"<<f<<endl;
	 cout<<"标准差为:"<<sqrt(f)<<endl;*/
	return 0;
}

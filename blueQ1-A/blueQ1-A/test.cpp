#include <iostream>
using namespace std;

int main()
{
	int b,n = 0;
	int a,m = 0;
	int c = 0;
	cout << "请输入行数和列数" << endl;
	cin >> n >> m;
	if (m % 5 == 0){
		a = m - (m / 5 - 1);
	}
	else{
		a = m - (m / 5);
	}
	if (n % 3 == 0||n%3==1){
		b = n-(n/3);
	}
	else{
		b =n-(n/3)+1;
	}
	cout << a*b << endl;
	system("pause");
	return 0;

}
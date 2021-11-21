#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
#include <Windows.h>
#pragma warning (disable:4996)
using namespace std;

int main()
{
	int m = 0;
	int count = 0;
	string s;
	getline(cin, s);
	int len = s.size();

	int left = 0, right = 1;
	while (left < right && right < len) {
		while (left < len && !((s[left] >= 'a' && s[left] <= 'z') || (s[left] >= 'A' && s[left] <= 'Z'))){
			left++;
		}

		right = left + 1;

		while (right < len && (s[right] >= 'a' && s[right] <= 'z') || (s[right] >= 'A' && s[right] <= 'Z')){
			right++;
		}

		left = right;
		right++;

		count++;
	}

	cout << count;
	Sleep(10000);
	system("puase");
	return 0;
}





//#include <stdio.h>
//#include <windows.h>
//#include <string.h>
//#pragma warning(disable:4996)
//const int N = 100;
//char a[N];
//int main()
//{
//	int count = 0;
//	//string s;
//
//	//char a[100] = { 0 };
//	for (int i = 0; i < 100; i++){
//		scanf("%s", &a[i]);
//	}
//	for (int i = 0; i < 100; i++){
//		if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')){
//			continue;
//		}
//		else{
//			count++;
//		}
//	}
//	printf("%d", count);
//	system("pause");
//	return 0;
//
//}
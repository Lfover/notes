#include <iostream>
#include <Windows.h>
using namespace std;
#pragma warning(disable:4996)
int my_islower(char c){
	return c >= 97 && c <= 122;
}
int my_toupper(char c)
{
	return my_islower(c) ? c - 32 : c;
}
int main()
{
	int src[5] = { 11, 22, 33, 44, 55 };
	int dst[5];
	memcpy(dst, src, sizeof(src));
	//char str[] = "This Is A String";
	//int len = strlen(str);
	//for (int i = 0; i < len; i++){
	//	if (isalpha(str[i]) && my_islower(str[i])){
	//		str[i]=my_toupper(str[i]);
	//	}
	//}
	//cout << str;
	//const char *src = "abcdefg";
	//char dst[] = "123456789";
	//strncpy(dst, src, strlen(src)+1);
	//puts(dst);
	//const char *src_str = "12345";
	//char dst_str[32] = "abcdef";
	//strcat_s(dst_str, src_str);
	//cout << dst_str;
	//const char *str1 = "abcdef";
	//const char *str2 = "bbb";
	//if (strlen(str2) - strlen(str1) > 0)
	//{
	//	cout << "str2>str1";
	//}
	//else{
	//	cout << "str1>str2";
	//}

	system("pause");
	return 0;
}
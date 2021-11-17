#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <assert.h>
#pragma warning(disable:4996)
void Reverse(char *str, int start, int end)
{
	while (start < end){
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}
void LeftRotate(char *str, int len, int num)
{
	assert(str);
	assert(len > 0);
	assert(num >= 0);
	num %= len;




	//方法二
	//Reverse(str, 0, num - 1);
	//Reverse(str, num, len - 1);
	//Reverse(str, 0, len - 1);

	//方法一
	//while (num){
	//	char temp = str[0];
	//	int i = 0;
	//	for (; i < len - 1; i++)
	//	{
	//		str[i] = str[i + 1];
	//	}
	//	str[i] = temp;
	//	num--;
	//}
}
int main()
{
	char str1[] = "1234abcd";
	char str2[] = "abcd1234";
	int len = strlen(str1);
	int num = 3;

	char *mem = (char *)malloc(2 * len + 1);
	if (mem == NULL){
		return -1;
	}
	strcpy(mem, str1);
	strcat(mem, str1);
	printf("double:%s\n", mem);
	if (strstr(mem, str2) != NULL){
		printf("yes");
	}
	else{
		printf("no");
	}
	free(mem);

	//printf("before:%s\n", str1);
	//int i = 0;
	//for (; i < len; i++){
	//	if (strcmp(str1, str2) == 0){
	//		printf("yes");
	//		break;
	//	}
		LeftRotate(str1, len, 1);
	//	
	//}
	//if (i == len){
	//	printf("no");
	//}
	//printf("after:%s\n", str1);
	system("pause");
	return 0;
}
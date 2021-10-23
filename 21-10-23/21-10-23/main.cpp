#include "class.h"

int main()
{

	//char[]
	//被当成普通的char数组
	//被整体当成字符串使用
	char arr[M] = { 'a', 'b', 'c','\0' };
	int num = sizeof(arr) / sizeof(arr[0]);

//	int i = 0;
	//for (; i < num; i++){
		printf("%s\n", arr);
	//}
	
	
	
	/*int res= nk(2, 10);
	printf("res:%d\n",res);*/
	system("pause");
	return 0;
}
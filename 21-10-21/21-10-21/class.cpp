#include "class.h"

void ReverseString(char *str)
{
	//code 3
	char *start = str;
	char *end = str + strlen(str) - 1;
	char temp = *start;
	*start = *end;
	*end = '\0';
	if (strlen(str + 1) >= 2){
		ReverseString(str+1);
	}
	*end = temp;

	//code2
	//if (*str != '\0'){
	//	ReverseString(str + 1);
	//	printf("%c", *str);
	//}



	//code1
	//char *start = str;
	//char *end = str + strlen(str) - 1;
	//while (start<=end){
	//	char temp = *start;
	//	*start =*start^ *end;
	//	*end = *start^*end;
	//	*start = *start^*end;
	//	start++;
	//	end--;
	//}
}
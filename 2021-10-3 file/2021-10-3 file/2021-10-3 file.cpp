#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)
int main()
{
	FILE *src= fopen("中国.jpg", "rb");
	if (src == NULL){
		perror("fopen");
		return 1;
	}
	FILE *dst = fopen("中国_copy.jpg", "wb");
	if (dst == NULL)
	{
		perror("fopen");
		return 2;
	}
	//copy
	fseek(src, 0, SEEK_END);//将src对应的读取位置设置到最结尾
	int size = ftell(src);//获得结尾偏移量，代表就是文件的大小！！！
	rewind(src);          //将src对应的读取位置恢复到开始
	char *file_content = (char*)malloc(size);
	if (file_content == NULL){
		perror("malloc");
		return 3;
	}
	fread(file_content, size,1, src);//将文件的所有内容读取到file_content
	fwrite(file_content, size, 1, dst);

	//close
	fclose(src);
	fclose(dst);
	free(file_content);


///////////////////////////////////////////////////////////////
	//FILE *fp=fopen("log.txt", "w");//w清空式写入
	//if (fp == NULL){
	//	printf("fopen error!\n");
	//	//perror("fopen");
	//	return 1;
	//}
	//printf("begin:%d\n", ftell(fp));
	//fputs("hello world,hello bit", fp);
	//printf("end:%d\n", ftell(fp));

	//printf("seek before:%d\n", ftell(fp));
	//fseek(fp, 0, SEEK_SET);
	//fputs("HELLO", fp);
	//printf("seek after:%d\n", ftell(fp));



	/*char c = 'a';
	while ((c = fgetc(fp)) != EOF){
		printf("read:%c\n", c);
	}*/
//////////////////////////////////////////////////////////




	//fclose(fp);
	system("pause");
	return 0;



	//FILE *fp = fopen("D:\test.txt", "wb");
	//if (NULL == fp){
	//	perror("fopen");
	//	system("pause");
	//	return 1;
	//}
	//int a = 10000;//4字节
	//fwrite(&a, 4, 1, fp);

	//fclose(fp);
	//
}
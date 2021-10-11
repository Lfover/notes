#include <stdio.h>
#include <Windows.h>

#define SIZE 16

struct Stu
{
	char name[SIZE];
	int age;
	char sex;
	char tel[SIZE];
};
int main()
{
	struct Stu tom = { "TOM", 13, 'M', "1234567" };
	printf("%s,%d,%c,%s\n", tom.name, tom.age, tom.sex, tom.tel);

	struct Stu *s = NULL;
	s=&tom;
	//printf("%s,%d,%c,%s\n", (*s).name, (*s).age, (*s).sex, (*s).tel);
	printf("%s,%d,%c,%s\n", s->name, s->age, s->sex, s->tel);
	printf("%p", s);
	system("pause");
	return 0;
}
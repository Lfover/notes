#include <stdio.h>
#include <assert.h>
#include <Windows.h>

int CompFloat(const void *vx, const void *vy)
{
	float *x = (float *)vx;
	float *y = (float *)vy;

	if (*x>*y){
		return 1;
	}
	else if (*x < *y){
		return -1;
	}
	return 0;
}
void show(float *arr, int num)
{
	for (int i= 0; i < num; i++){
		printf("%.1f", arr[i]);
	}
	printf("\n");
}
void swap(char *x, char *y, int size)
{
	for (int i = 0; i < size; i++){
		*(x + i) ^= *(y + i);
		*(y+i)^= *(x+i);
		*(x+i) ^= *(y+i);
	}
}
void Mysort(void *base,int num,int size,int (*comp)(const void*,const void *))
{
	assert(base);
	assert(comp);
	char *_base = (char *)base;
	for (int i = 0; i < num-1; i++){
        int flag = 0;
		for (int j = 0; j < num - i - 1; j++){
			if (comp(_base+size*j,_base+size*(j+1))>0){
				flag = 1;
				swap(_base + size*j, _base + size*(j + 1), size);
			}
		}
		if (flag == 0){
			break;
		}
	}
}
int main()
{
	//int arr[] = { 4, 3, 2, 5, 6, 7, 9 };
	//int num = sizeof(arr) / sizeof(arr[0]);
	float arr[] = { 4.0, 6.0, 9.0, 1.0, 2.0 };
	int num = sizeof(arr) / sizeof(arr[0]);
	show(arr, num);
	Mysort(arr,num, sizeof(float), CompFloat);
	show(arr, num);
	system("pause");
	return 0;
}
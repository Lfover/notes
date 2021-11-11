//打印杨辉三角
#include <stdio.h>
#include <Windows.h>
void Show()
{
	int arr[10][10];
	for (int i = 0; i < 10; i++){
		for (int j = 0; j <=i; j++){
			arr[i][j] = 1;
		}
	}
	for (int i = 2; i < 10; i++){
		for (int j = 1; j < i; j++){
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	for (int i = 0; i < 10; i++){
		for (int j = 0; j <= i; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}


//猜名次，穷举法
void Game()
{
	for (int a = 1; a <= 5; a++){
		for (int b = 1; b <= 5; b++){
			for (int c = 1; c <= 5; c++){
				for (int d = 1; d <= 5; d++){
					for (int e = 1; e <= 5; e++){
						if (((b == 2) + (a == 3)) == 1 && \
							((b == 2) + (e == 4) == 1) && \
							((c == 1) + (d == 4) == 1) && \
							((c == 5) + (d == 3) == 1) && \
							((e == 4) + (a == 1) == 1)){
							unsigned char flag = 0;
							flag |= (1 << (a - 1));
							flag |= (1 << (b - 1));
							flag |= (1 << (c - 1));
							flag |= (1 << (d - 1));
							flag |= (1 << (e - 1));
							while (flag){
								if (!(flag & 1)){
									break;
								}
								flag >>= 1;
							}
							if (!flag){
								printf("a:%d, b:%d, c:%d, d:%d, e:%d,\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}

	}
}
void Killer(){
	char killer = 'A';
	for (; killer <= 'D'; killer++){
		if (((killer != 'A') + (killer == 'C' )+ (killer == 'D') + (killer != 'D')) == 3){
			printf("found you:%c\n", killer);
		}
	}
}


int main()
{
	Killer();
	Game();
	Show();
	system("pause");
	return 0;
}



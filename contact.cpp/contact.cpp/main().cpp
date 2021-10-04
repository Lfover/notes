#include "contact.h"

void ShowMenu()
{
        printf("#######################\n");
		printf("#1.Add 2.Del 3.Search #\n");
		printf("#4.Mod 5.Show 6.Clear #\n");
		printf("#7.Sort        0.Exit #\n");
		printf("#######################\n");
		printf("please select#");
}
int mian(){
	contact_t *ct = NULL;
	InitContact(&ct);
	int quit = 0;
	while (!quit){
		int select = 0;
		ShowMenu();
		scanf("%d", &select);

		switch (select){
		case 1:
			AddFriend(&ct);//添加用户是要进行自动扩容的
			break;
		case2:
			DelFriend(ct);
			break;
		case3:
			SearchFriend(ct);
			break;
		case4:
			break;
		case5:
			ShowContact(ct);
			break;
		case6:
			ClearContact(ct);
			break;
		case7:
			break;
		case0:
			SaveContact(ct);
			quit = 1;
			break;
		default:
			break;
		}
	}
	free(ct);
	system("pause");
	return 0;
}
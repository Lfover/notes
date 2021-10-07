#include "seqlistr.h"

int main()
{
	SeqList list;
	SeqListInit(&list);

	ElemType item;
	int select = 1;
	while (select)
	{
		printf("*******************************\n");
		printf("*[1] push_back     [2]push_front*\n");
		printf("*[3] show_list     [0]quit_system*\n");
		printf("*[4] pop_back      [5]pop_front*\n");
		printf("*[6] insert_pos    [7]insert_val*\n");
		printf("*[8] erase_pos    [9]erase_val*\n");
		printf("*[10]find         [11]length *\n");
		printf("*[12]capacity   [7]insert_val*\n");
		printf("*********************************\n");
		printf("请选择:>\n");
		scanf("%d", &select);
		if (select == 0)
			break;
		switch (select){
		    case 1:
				printf("请输入插入数据<以-1结束>");
				while (scanf("%d", &item), item != -1);
				{
					SeqListPushBack(&list, item);
				}
				break;
			case 2:
				break;
			case 3:
				SeqListShow(&list);
				break;
			default:
				printf("命令出错");
				break;
		}
	}
	return 0;

}
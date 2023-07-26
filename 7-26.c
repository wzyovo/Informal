#include <stdio.h>

int main()
{
	int ch=0;
//ctrl+z
//EOF-end of file->-1;
    while ((ch=getchar())!=EOF)
    {
    	putchar (ch);
	}
	return 0;
}
//int main()
//{
//	int i=1;
//	while(i<=10)
//	{
//		i++;
//		if (i==5)
//			continue;
////	    	break;
//		printf("%d\n",i);
////		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int day=0;
//	scanf("%d",&day);
//	switch(day)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("工作日\n");
//			break;
//		case 6:
//		case 7:
//			printf("休息日\n");
//			break;
////		case 1:
////			printf("星期一\n");
////			break;
////		case 2:
////			printf("星期二\n");
////			break;
////		case 3:
////			printf("星期三\n");
////			break;
////		case 4:
////			printf("星期四\n");
////			break;
////		case 5:
////			printf("星期五\n");
////			break;
////		case 6:
////			printf("星期六\n");
////			break;
////		case 7:
////			printf("星期天\n");
////			break;
//		default:
//			printf("error\n");
//	}
////	if(1==day)
////		printf("星期一\n");
////	else if(2==day)
////		printf("星期二\n");
////	else if(3==day)
////		printf("星期三\n");
////	else if(4==day)
////		printf("星期四\n");
////	else if(5==day)
////		printf("星期五\n");
////	else if(6==day)
////		printf("星期六\n");
////	else if(7==day)
////		printf("星期天\n");
//	return 0;
//}

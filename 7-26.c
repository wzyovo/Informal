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
//			printf("������\n");
//			break;
//		case 6:
//		case 7:
//			printf("��Ϣ��\n");
//			break;
////		case 1:
////			printf("����һ\n");
////			break;
////		case 2:
////			printf("���ڶ�\n");
////			break;
////		case 3:
////			printf("������\n");
////			break;
////		case 4:
////			printf("������\n");
////			break;
////		case 5:
////			printf("������\n");
////			break;
////		case 6:
////			printf("������\n");
////			break;
////		case 7:
////			printf("������\n");
////			break;
//		default:
//			printf("error\n");
//	}
////	if(1==day)
////		printf("����һ\n");
////	else if(2==day)
////		printf("���ڶ�\n");
////	else if(3==day)
////		printf("������\n");
////	else if(4==day)
////		printf("������\n");
////	else if(5==day)
////		printf("������\n");
////	else if(6==day)
////		printf("������\n");
////	else if(7==day)
////		printf("������\n");
//	return 0;
//}

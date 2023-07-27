#include <stdio.h>

int main()
{
	int i=1;
	do
	{
		if(i==5)
//		break;
		continue;
		printf("%d ",i);
		i++;
	}
	while(i<=10);
	return 0;
}
//int main()
//{
//	int i=0;
//	for(i=1; i<=10; i++)
////不可在for循环内修改循环变量,防止失去控制
//
//	{
//		if(i==5)
////			break;
//			continue;
//		printf("%d\n",i);
//	}
//	return 0;
//}
//{
//	int ch=0;
//	while((ch=getchar())!=EOF)
//	{
//		if(ch<'0'||ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main ()
//{
//	int ret=0;
//	int ch=0;
//	char password[20]= {0};
//	printf("请输入密码:>");
//	scanf("%s",password);//输入密码，并存放在password数组中
//	//缓冲区还剩余一个\n
//	while((ch=getchar())!='\n')
//	{
//		;
//	}
//	printf("请确认（Y/N):>");
//	ret=getchar();
//	if(ret=='Y')
//		printf("确认成功!");
//	else
//		printf("放弃确认！");
//	return 0;
//}

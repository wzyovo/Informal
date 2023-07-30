#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//关机程序 
	//shutdown -s -t 60  关机
	//shutdoen -a 取消关机
	//system（）执行系统命令
	char input[20]={0};
	system("shutdown -s -t 60");
	again:
	printf("请注意，你的电脑在1分钟内关机，输入“我是猪”，就取消关机\n请输入:>");
	scanf("%s",input);
	if(strcmp(input,"我是猪")==0)
	{
		system("shutdown -a"); 
		printf("取消关机，祝您生活愉快！");
	}
	else
	{
		goto again;
	}
	return 0;
} 

//int main()
//{
//	again:
//	printf("hello\n");
//	goto again;
//	return 0;
//}

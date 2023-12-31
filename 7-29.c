#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

void menu()
{
	printf("*****************************\n");
	printf("****   1.play   0.exit   ****\n");
	printf("*****************************\n");
}

//0~RAND_MAX(32767)

void game()
{
	int ret=0;
	int guess=0;//接收猜的数字 
	printf("猜数字游戏开始！\n");
	//1、生成一个1~1000之间的随机数
    ret=rand()%1000+1;
	//2、猜数字 
	while(1)
	{
		printf("请猜数字:>");
		scanf("%d",&guess); 
		if(guess>ret)
		{
			printf("猜大了！\n"); 
		}
		else if(guess<ret)
		{
			printf("猜小了！\n"); 
		}
		else{
			printf("恭喜你，猜对了\n");
			break;
		}
	} 
}

int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	//时间戳 
	//time_t time(time_t *time)
	printf("猜数字游戏开始！来试试你的运气吧\n");
	Sleep(2000);
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();//猜数字游戏
				break;
			case 0:
				printf("退出游戏!\n");
				break;
			default:
				printf("选择错误\n");
				break;
		}
	}
	while(input);
	return 0;
}

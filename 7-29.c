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
	int guess=0;//���ղµ����� 
	printf("��������Ϸ��ʼ��\n");
	//1������һ��1~1000֮��������
    ret=rand()%1000+1;
	//2�������� 
	while(1)
	{
		printf("�������:>");
		scanf("%d",&guess); 
		if(guess>ret)
		{
			printf("�´��ˣ�\n"); 
		}
		else if(guess<ret)
		{
			printf("��С�ˣ�\n"); 
		}
		else{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	} 
}

int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	//ʱ��� 
	//time_t time(time_t *time)
	printf("��������Ϸ��ʼ�����������������\n");
	Sleep(2000);
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();//��������Ϸ
				break;
			case 0:
				printf("�˳���Ϸ!\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
		}
	}
	while(input);
	return 0;
}

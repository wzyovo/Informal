#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//�ػ����� 
	//shutdown -s -t 60  �ػ�
	//shutdoen -a ȡ���ػ�
	//system����ִ��ϵͳ����
	char input[20]={0};
	system("shutdown -s -t 60");
	again:
	printf("��ע�⣬��ĵ�����1�����ڹػ������롰����������ȡ���ػ�\n������:>");
	scanf("%s",input);
	if(strcmp(input,"������")==0)
	{
		system("shutdown -a"); 
		printf("ȡ���ػ���ף��������죡");
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

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
////������forѭ�����޸�ѭ������,��ֹʧȥ����
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
//	printf("����������:>");
//	scanf("%s",password);//�������룬�������password������
//	//��������ʣ��һ��\n
//	while((ch=getchar())!='\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N):>");
//	ret=getchar();
//	if(ret=='Y')
//		printf("ȷ�ϳɹ�!");
//	else
//		printf("����ȷ�ϣ�");
//	return 0;
//}

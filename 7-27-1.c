#include <stdio.h>
#include <string.h>
#include <windows.h> 
#include <stdlib.h>

int main()
{
	int i=0;
	char password1[20]={0},password2[20]={0};
	printf("����������:>");
	scanf("%s",password1);
	for(i=0;i<3;i++)
	{
		printf("��ȷ������:>");
		scanf("%s",password2);
		getchar();
		if (strcmp(password1,password2)==0)//�ȺŲ��������Ƚ����ַ����Ƿ����,Ӧʹ��strcmp 
		{
			printf("��¼�ɹ�!\n");
			break;
		}
		else
		{
			printf("�������!\n");
		}
	}
	if(i==3)
	{
		printf("�����������,�����ѱ�����!\n");
	}
	return 0;
}
 
//int main()
//{
//	char arr1[]="welcome to SHU!!!!!";
//	char arr2[]="###################";
//	int left=0;
////	int right=sizeof(arr1)/sizeof(arr[0])-2;//\0
//    int right=strlen(arr1)-1;
//    while(left<=right)
//	{
//		arr2[left]=arr1[left];
//		arr2[right]=arr1[right];
//		printf("%s\n",arr2);
//		//��Ϣһ��
//		Sleep(1000); 
//		system("cls");//ִ��ϵͳ�����- cls-�����Ļ 
//		left++;
//		right--;
//	}
//	printf("%s\n",arr2);
//	return 0;
//}

//int main()
//{
//	int arr[]= {1,2,3,4,5,6,7,8,9,10};
//	int k=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);//����Ԫ�ظ���
//	int left=0,right=sz-1;
//	int mid=0;
//	printf("��������Ҫ���ҵ�����:>");
//	scanf("%d",&k);
//	while(left<=right)
//	{
//		mid=(left+right)/2;
//		if(arr[mid]>k)
//		{
//			right=mid-1;
//		}
//		else if(arr[mid]<k)
//		{
//			left=mid+1;
//		}
//		else
//		{
//			printf("�ҵ���,�±�Ϊ%d\n",mid);
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[]= {1,2,3,4,5,6,7,8,9,10}; .
//
//	int k=7,i=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		if(k==arr[i])
//		{
//			printf("�ҵ���,�±���:%d\n",i);
//			break;
//		}
//	}
//	if(i==sz)
//		printf("�Ҳ���\n");
//	return 0;
//}
//int main(){
//	int i=0,n=0,ret=1,sum=0;
//	printf("n=");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		ret=ret*i;
//		sum+=ret;
//	}
//	printf("%d",sum);
//	return 0;
//}
//int main()
//{
//	int i=0,j=0,n=0,ret=1,sum=0;
//	printf("n=");
//	scanf("%d",&n);
//	for(i=1; i<=n; i++)
//	{
//		ret=1;
//		for(j=1; j<=i; j++)
//		{
//			ret=ret*j;
//		}
//		sum+=ret;
//	}
//	//1!+2!+3!+  +n!
//	printf("������n!=%d",sum);
//	return 0;
//}
//int main()
//{
//     int i=0,n=0,ret=1;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//     	ret=ret*i;
//	 }
//	 //n�Ľ׳�
//	 printf("n!=%d",ret);
//	 return 0;
//}

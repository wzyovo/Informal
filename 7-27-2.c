#include <stdio.h>
#include <windows.h>
#include <math.h>

//int main()
//{
//	int m=0,n=0,r=0;
//	scanf("%d%d",&m,&n);
//	while(m%n)
//	{
//		r=m%n;
//		m=n;
//		n=r;
//	}
//	printf("最大公约数为%d\n",n);
//	return 0;
//}

//int main()
//{
//	int i=0;
//	for(i=0; i<=100; i++)
//	{
//		if(i%3==0){
//			printf("%d\n",i);
//			Sleep(100);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a=0,b=0,c=0,tmp=0;
//	scanf("%d%d%d",&a,&b,&c);
//	if(a<b)
//	{
//		tmp=a;
//		a=b;
//		b=tmp;
//	}
//	if(a<c)
//	{
//		tmp=a;
//		a=c;
//		c=tmp;
//	}
//	if(b<c)
//	{
//		tmp=b;
//		b=c;
//		c=tmp;
//	}
//	printf("%d %d %d\n",a,b,c);
//	return 0;
//}

//int main()
//{
//	int year=0,count=0;
//	for(year=1000; year<=2000; year++)
//	{
////		if(year%4==0&&year%100!=0){
////			printf("%d ",year);
////			count++;
////		}
////		else if(year%400==0){
////			printf("%d ",year);
////			count++;
////		}
//		if(((year%4==0)&&(year%100!=0))||(year%400==0))
//		{
//			printf("%d ",year);
//			count++;
//		}
//	}
//	printf("\n共有%d个闰年！",count);
//	return 0;
//}

//int main()
//{
//	int i=0,j=0,count=0;
//	for(i=100; i<=200; i++)
//	{
//		//素数判断的方法
//		//1、试除法
//		for(j=2; j<i; j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//		if(j==i)
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\n共有“%d”个素数",count); 
//	return 0;
//}

int main(){
	int i=0,count=0,j=0;
	for(i=100;i<=200;i++)
	{
		for(j=2;j<aqrt(i);j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j>sqrt(i))
		{
			count++;
			printf("%d ",i);
		}
	}
	printf("\n有“%d”个素数！",count);
	return 0;
}

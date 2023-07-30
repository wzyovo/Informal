#include <stdio.h>

//int main()
//{
////	int age = 100;
////	if(age<18)
////		printf("未成年\n");
////	else if(age>=18 && age<28)
////		printf("青年\n");
////	else if(age>=28 && age <50)
////		printf("壮年\n");
////	else if(age>=50 && age<90)
////		printf("老年\n");
////	else
////		printf("神仙\n");
//    return 0;
//}
//int main()
//{
//	int a=0;
//	int b=2;
//	if(a==1)
//		//if(b==2)-不够好
//		if (2==b)//好
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}
int main()
{
	int a=0,b=1;
	scanf("%d",&a);
	if(a%2==1)
		printf("a=%d\n",a);
	for(b=1; b<=100; b++)
	{
		if(b%2==1)
			printf("%d\n",b);
	}
}

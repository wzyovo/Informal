#include <stdio.h>

int main()
{
	int i=0,j=0;
	//打印9行
	for(i=1; i<=9; i++)
	{
		//打印i列
		for(j=1; j<=i; j++)
		{
			printf("%d*%d=%-2d ",i,j,i*j);//-2右对齐 
//			printf("%d*%d=%2d ",i,j,i*j);//  2左对齐 
		}
		printf("\n");
	}
}

//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int max=0,i=0,sz=0;
//	sz=sizeof(arr)/sizeof(arr[0]);
//	max=arr[0];
//	for(i=0;i<sz;i++)
//	{
//		if(arr[i]>max)
//		{
//			max=arr[i];
//		}
//	 }
//	 printf("max=%d",max);
//	return 0;
//}

//int main()
//{
//	int i=0,j=1;
//	double sum=0.0;
//	for(i=1; i<=100; i++)
//	{
//		sum+=1.0/i*j;
//		j=-j;
//	}
//	printf("%lf",sum);
//	return 0;
//}

//int main()
//{
//	int i=0,count=0;
//	for(i=0;i<=100;i++)
//	{
//		if(i%10==9)
//		count++;
//		if(i/10==9)
//		count++;
//	}
//	//1~100出现了几个九
//	printf("count=%d\n",count);
//	return 0;
//}

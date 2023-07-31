#include <stdio.h>

int get_max(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}

//交换两整形变量
//void swap(int x,int y)
//{
//	int tmp=0;
//	tmp=x;
//	x=y;
//	y=tmp;
//}
void swap(int* pa,int* pb)
{
	int tmp=*pa;
	*pa=*pb;
	*pb=tmp;
}

int main()
{
	int a=10,b=20;
	int max=get_max(a,b);
	swap(&a,&b); 
	printf("max=%d\n",max);
	printf("a=%d,b=%d\n",a,b);
	return 0;
}

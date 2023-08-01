#include <stdio.h>
#include <math.h> 

//是素数返回1，不是则返回0 
int is_prinme(int j){
	int n=0,m=0;
	n=sqrt(j);
	for(m=2;m<=n;m++)
	{
		if(j%m==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	//打印100~200之间的素数
	int i=0;
	for(i=100;i<=200;i++)
	{
		//判断i是否为素数
		if(is_prime(i)==1)
		printf("%d",i); 
	 } 
	return 0;
}

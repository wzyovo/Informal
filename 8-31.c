#include <stdio.h>
#include <math.h> 

//����������1�������򷵻�0 
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
	//��ӡ100~200֮�������
	int i=0;
	for(i=100;i<=200;i++)
	{
		//�ж�i�Ƿ�Ϊ����
		if(is_prime(i)==1)
		printf("%d",i); 
	 } 
	return 0;
}

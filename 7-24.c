#include <stdio.h>
#include <string.h>

struct Book {
	char name[20];
	short price;
};

int main() {
	struct Book b1= {"C���Գ������",55};
	printf("����:%s\n",b1.name);
	printf("�۸�:%dԪ\n",b1.price);
	b1.price=15;
	printf("�޸ĺ�ļ۸�:%dԪ\n",b1.price);
	struct Book *pb=&b1;
	printf("%s\n",(*pb).name);
	printf("%d\n",(*pb).price);
	printf("%s\n",pb->name);
	printf("%d\n",pb->price);
	strcpy(b1.name,"C++");//strcpy-string copy-�ַ�������-�⺯��-string.h
	printf("%s\n",pb->name);
	
//	printf("%d\n",sizeof(char*));
//	printf("%d\n",sizeof(short*));
//	printf("%d\n",sizeof(int*));
//	printf("%d\n",sizeof(double*));

//	double d=3.14;
//	double* pd=&d;
//	printf("pd=%p\n",pd);

//	int a=10;
//	int* p=&a;
//	*p=20;
//	printf("a=%d\n",a);
	return 0;
}

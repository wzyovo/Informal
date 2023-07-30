#include <stdio.h>
#include <string.h>

struct Book {
	char name[20];
	short price;
};

int main() {
	struct Book b1= {"C语言程序设计",55};
	printf("书名:%s\n",b1.name);
	printf("价格:%d元\n",b1.price);
	b1.price=15;
	printf("修改后的价格:%d元\n",b1.price);
	struct Book *pb=&b1;
	printf("%s\n",(*pb).name);
	printf("%d\n",(*pb).price);
	printf("%s\n",pb->name);
	printf("%d\n",pb->price);
	strcpy(b1.name,"C++");//strcpy-string copy-字符串拷贝-库函数-string.h
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

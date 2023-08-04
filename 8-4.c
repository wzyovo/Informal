#include <stdio.h>
#include <windows.h>

/* void add(int* p)
{
    (*p)++;
}

int main()
{
    int num = 0,i=0;
    for (i = 0; i < 5;i++)
    {
        add(&num);
        printf("num = %d\n", num);
        Sleep(1000);
    }
    return 0;
} */

/* void new_line()
{
    printf("hehe\n");
}

void three_line()
{
    int i = 0;
    for (i = 0; i < 3;i++)
    {
        new_line();
    }
}

int main()
{
    three_line();
    return 0;
} */

/* int main()
{
    int len = 0;
    len = strlen("abc");
    printf("%d\n", len);
    printf("%d\n", strlen("abc"));
    return 0;
} */

/* int main()
{
    printf("%d", printf("%d", printf("%d", 43)));
    return 0;
} */

//函数声明
int add(int x, int y);//add.h

// 函数定义
int add(int x, int y)//add.c
{
    int z = x + y;
    return z;
}

int main()//test.c
{
    int a = 10, b = 20;
    int sum = 0;
    //函数调用
    sum = add(a, b);
    printf("sum = %d\n", sum);
    return 0;
}


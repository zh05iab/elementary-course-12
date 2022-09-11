#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>
int add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 1;
	int b = 2;
	printf("%p\n", add);//&funtion and funtion are both funtion's address.
	printf("%p\n", &add);
	int (*pa)(int, int) = add;//define function's pointer.
	printf("%d\n",(*pa)(12,34));
	return 0;
}
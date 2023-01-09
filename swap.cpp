#include <stdio.h>

void swap(int *a,int *b)
{
	int temp = *a;
	*a=*b;
	*b= temp;
}

void display(int a, int b)
{
	printf("Values %d and %d\n", a, b);	
}

int main(void)
{
	int x=10;
	int y=12;
	swap(&x, &y);
	display(x, y);

}

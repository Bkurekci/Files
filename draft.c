#include <stdio.h>
#include <string.h>
#define max 15


typedef union {
	
	int X;
	float Y;
	double Z;

}bla;

int main()
{
	bla test;
	
	printf("%d",sizeof(test));
	printf("%d",sizeof(int));
	printf("%d",sizeof(float));
	printf("%d",sizeof(double));
	
	return 0;
}

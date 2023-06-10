#include <stdio.h>

int i;

typedef struct{
	char name[20];
	int roll;
	char gender;
	int marks[5];
}student;

student increaseBy5(student b)
{
	for(i = 0;i<5;i++)
	{
		if(b.marks[i]+5 <= 100)
			b.marks[i]+=5;
	}
	return b;
}

void main()
{
	student stu1 = {"Busra", 22, 'f', {45, 17, 98, 68, 75}};
	stu1 = increaseBy5(stu1);
	
	printf("Name: %s\n", stu1.name);
	printf("Roll: %d\n", stu1.roll);
	printf("Gender: %c\n", stu1.gender);
	
	for(i = 0;i < 5;i++)
	{
		printf("Marks in %dth subject: %d\n", i, stu1.marks[i]);
	}
	
}

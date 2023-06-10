#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 20
#define lssn 5
#define DamVal 50.00

int i, j;

typedef struct{
	char name[max];
	char surname[max];
	int lesson[5];
	float average;
	char result[6];
}stdntId;

void passedorfailed(stdntId *a)
{
	int total = 0;
	for(i = 0;i < lssn;i++)
	{
		total += a->lesson[i];
	}
	
	a->average = (float)total/lssn;
	
	(a->average >= DamVal) ? strcpy(a->result, "passed") : strcpy(a->result, "fail");
}

void enternotes(stdntId *a)
{
	for(i = 0;i < lssn;i++)
	{
		printf("Lesson %d: ", i+1);
		scanf("%d", &a->lesson[i]);	
	}
}

void create_students(stdntId *b)
{
	int total = 0;
	
	printf("Enter the student's name and surname one by one: ");
	scanf("%s", b->name);
	scanf("%s", b->surname);
	
}

void sortbynote(stdntId *b, int size)
{
	stdntId bos;
	for(i = 0;i < size-1;i++)
	{
		for(j = 0;j < size-1-i;j++)
		{
			if(b[j].average > b[j+1].average)
			{
				bos = b[j+1];
				b[j+1]=b[j];
				b[j] = bos;
			}
		}
	}
}

void writestdnt(stdntId *t)
{
	printf("Student's name: %s\n", t->name);
	printf("Student's surname: %s\n", t->surname);
	printf("Student's average: %.2f\n", t->average);
	printf("Student's situation: %s\n", t->result);
}

int main()
{
	int n;
	
	printf("How many students will there be? ->");
	scanf("%d", &n);
	
	stdntId IDs[n];
	
	for(i = 0;i < n;i++)
	{
		create_students(&IDs[i]);
		enternotes(&IDs[i]);
	}
	
	
	//sortbynote(IDs, n);
	
	for(i = 0;i < n;i++)
	{
		//passedorfailed(&IDs[i]);
		//writestdnt(&IDs[i]);
	}
		
	
	return 0;
}

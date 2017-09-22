#include<stdio.h>
int main(void)
{
	int NumberOfGrades, i, grade;
	int gradeTotal = 0;
	int failureCount = 0;
	float average;

	printf("Ile ocen zamierzasz wprowadzic?");
	scanf("%d", &NumberOfGrades);
	for (i=1; i<=NumberOfGrades; ++i)
		{
		printf("podaj ocene nr %d: ", i);
		scanf("%d", &grade);
		gradeTotal = gradeTotal + grade;
		if(grade<65)
			++failureCount;
		}
	average= (float)gradeTotal / NumberOfGrades;
	printf("\nSrednia ocen = %.2f\n", average);
	printf("liczba ocen negatywnych = %d\n", failureCount);
	return 0;
}

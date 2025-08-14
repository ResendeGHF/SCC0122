#include <stdio.h>
#include <stdlib.h>

void get_data(float array[], int N);
float eval_mean(float array[], int N);

int main()
{
	int N;
	float *grades;
	printf("Entre com o nu\'mero de notas: \n");
	scanf("%d", &N);
	grades = malloc(sizeof(float) * N);
	
	get_data(grades, N);

	printf("A me\'dia e\': %.2f\n", eval_mean(grades, N));

	return 0;
}

void get_data(float grades[], int N)
{
	printf("Entre com as notas: \n");
	for (int i = 0; i <= ( N - 1 ); i++)
	{
		scanf("%f", &grades[i]);
	}
}

float eval_mean(float grades[], int N)
{
	float mean = 0;
	for (int i = 0; i <= ( N - 1 ); i++)
	{
		mean += grades[i];
	}
	return mean/N;
}

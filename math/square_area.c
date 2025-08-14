#include <stdio.h>

float read_data();
float eval_area(float var);

float read_data()
{
	float var;
	printf("Entre com a aresta:\n");
	scanf("%f", &var);
	return var;
}

float eval_area(float var)
{
	return var * var;
}

int main()
{
	float var;
	var = read_data();
	printf("A A\'rea e\': %0.2f\n", eval_area(var));

	return 0;
}

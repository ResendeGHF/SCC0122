#include <stdio.h>

float perform_operation_with_var();
float perform_operation_with_ref();

int main(void) {
	float var;
	printf("Enter with var: ");
	scanf("%f", &var);
	float *ptr = &var;
	printf("%f\n", perform_operation_with_var(var));
	printf("%f\n", perform_operation_with_ref(ptr));
	return 0;
}

float perform_operation_with_var(float var) {
	return ( 10 + var );
}

float perform_operation_with_ref(float ptr) {
	return ( 10 + ptr );
}


#include <stdio.h>

typedef struct {
	char name[49];
	int age;
	float grade;
} Data;

void print_data(Data *student); 
void read_data(Data *student); 

void read_data(Data *student) {
	printf("Enter with the name:\n");
	scanf("%s", student->name);
	printf("Enter with age:\n");
	scanf("%d", &student->age);
	printf("Enter with grade:\n");
	scanf("%f", &student->grade);
}

void print_data(Data *student) {
	printf("Student\'s name is: %s\n", student->name);
	printf("Student\'s age is: %d\n", student->age);
	printf("Student\'s grade is: %f\n", student->grade);
}

int main(void) {
	Data student;
	read_data(&student);
	print_data(&student);
	return 0;
}

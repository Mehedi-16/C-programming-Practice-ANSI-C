#include <stdio.h>
#include <string.h>

struct person
{
    char name[20]; 
    int age;
    float salary;
};

int main()
{
    struct person person1,person2; 
    strcpy(person1.name, "Mehedi Hasan");
    person1.age = 20;
    person1.salary = 2300.00;
    
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Salary: %.2f\n", person1.salary);

strcpy(person1.name, "mamun");
    person1.age = 20;
    person1.salary = 23077.00;
    
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Salary: %.2f\n", person1.salary);
    return 0;
}

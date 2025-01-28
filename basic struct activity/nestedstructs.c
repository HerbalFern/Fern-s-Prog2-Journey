#include <stdio.h>

struct Address{
    char city[50];
    char state[50];
};

struct Employee{
    char name[50];
    int id;
    struct Address address;
};

int main(){

    struct Employee employee;
    printf("Enter name: ");
    scanf("%s", employee.name);
    printf("Enter ID: ");
    scanf("%d", &employee.id);
    printf("Enter City: ");
    scanf("%s", employee.address.city);
    printf("Enter State: ");
    scanf("%s", employee.address.state);

    printf("\nEmployee Information\n");
    printf("Name: %s\n", employee.name);
    printf("ID: %d\n", employee.id);
    printf("City: %s\n", employee.address.city);
    printf("State: %s", employee.address.state);

    return 0;
}
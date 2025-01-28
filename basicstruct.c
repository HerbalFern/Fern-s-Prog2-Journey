#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int main(){
    struct Student stud1;
    printf("Enter the name: ");
    scanf("%s", stud1.name);
    
    printf("Enter age: ");
    scanf("%d", &stud1.age);

    printf("Enter grade: ");
    scanf("%f", &stud1.grade);

    printf("\nName: %s\nAge: %d\nGrade: %.2f", stud1.name, stud1.age, stud1.grade);
    

    return 0;
}



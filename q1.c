
// Write a program Display the details of employees whose salary is less than given salary
//


#include <stdio.h>


int main(){
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    int i;
    int id[n];
    char name[n][25];
    float salary[n];
    for(i=0; i<n; i++){
        printf("Enter data of employee %d: ", i+1);
        scanf("\n%d %24s %f", &id[i], name[i], &salary[i]);
    }
    float sal;
    printf("Enter salary to be checked:");
    scanf("%f", &sal);
    printf("Employees with salary less than %f are:\n", sal);
    for(i=0; i<n; i++){
        if(salary[i]<sal){
            printf("\n%d %s %f\n", id[i], name[i], salary[i]);
        }
    }
}


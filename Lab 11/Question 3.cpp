#include <stdio.h>
#include <string.h>
#define MAX_EMPLOYEES 10

struct Employee{
    char name[100];
    char dob[15];
    int emp_id;
    char department[50];
    float salary;
};
struct Employee employees[MAX_EMPLOYEES];
int employeeCount = 0;
void addEmployee(){
    if (employeeCount < MAX_EMPLOYEES){
        struct Employee newEmployee;
        printf("\nEnter Name: ");
        getchar();
        fgets(newEmployee.name, sizeof(newEmployee.name), stdin);
        newEmployee.name[strcspn(newEmployee.name, "\n")] = '\0';
        printf("Enter Date of Birth (DD-MM-YYYY): ");
        fgets(newEmployee.dob, sizeof(newEmployee.dob), stdin);
        newEmployee.dob[strcspn(newEmployee.dob, "\n")] = '\0';
        printf("Enter Employee ID: ");
        scanf("%d", &newEmployee.emp_id);

        printf("Enter Department: ");
        getchar();
        fgets(newEmployee.department, sizeof(newEmployee.department), stdin);
        newEmployee.department[strcspn(newEmployee.department, "\n")] = '\0';

        printf("Enter Salary: ");
        scanf("%f", &newEmployee.salary);

        employees[employeeCount++] = newEmployee;

        printf("\nEmployee added successfully!\n");
    } else {
        printf("\nEmployee list is full. Cannot add more employees.\n");
    }
}
void deleteEmployee() {
    int emp_id;
    printf("\nEnter Employee ID to delete: ");
    scanf("%d", &emp_id);
    int found = 0;
    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].emp_id == emp_id) {
            for (int j = i; j < employeeCount - 1; j++){
                employees[j] = employees[j + 1];
            }
            employeeCount--;
            found = 1;
            printf("\nEmployee with ID %d deleted successfully.\n", emp_id);
            break;
        }
    }
    if (!found) {
        printf("\nEmployee with ID %d not found.\n", emp_id);
    }
}
void displayEmployees() {
    if (employeeCount == 0) {
        printf("\nNo employees to display.\n");
        return;
    }
    printf("\nEmployee List:\n");
    printf("---------------------------------------------------\n");
    printf("Name\t\tDOB\t\tEmployee ID\tDepartment\tSalary\n");
    printf("---------------------------------------------------\n");

    for (int i = 0; i < employeeCount; i++) {
        printf("%s\t%s\t%d\t%s\t%.2f\n", 
                employees[i].name, 
                employees[i].dob, 
                employees[i].emp_id, 
                employees[i].department, 
                employees[i].salary);
    }

    printf("---------------------------------------------------\n");
}
int main() {
    int choice;

    while (1) {
        printf("\nEmployee Management System\n");
        printf("1. Add an Employee\n");
        printf("2. Delete an Employee\n");
        printf("3. Display All Employees\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                deleteEmployee();
                break;
            case 3:
                displayEmployees();
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}


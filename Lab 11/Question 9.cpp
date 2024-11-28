
#include <stdio.h>
#include <string.h>
#define MAX_DEPARTMENTS 5
#define MAX_COURSES 10
#define MAX_STUDENTS 50

typedef struct {
    char name[50];
    int rollNo;
} Student;
typedef struct {
    char name[50];
    char qualification[50];
} Instructor;

typedef struct {
    char code[10];
    char title[50];
    Instructor instructor;
    int studentCount;
    Student students[MAX_STUDENTS];
} Course;
typedef struct {
    char name[50];
    int courseCount;
    Course courses[MAX_COURSES];
} Department;

Department departments[MAX_DEPARTMENTS];
int departmentCount = 0;
void addDepartment();
void addCourse();
void addStudent();
void viewDetails();
void viewDepartmentDetails();
void menu();

void addDepartment() {
    if (departmentCount >= MAX_DEPARTMENTS) {
        printf("Maximum number of departments reached.\n");
        return;
    }

    printf("Enter department name: ");
    scanf(" %[^\n]", departments[departmentCount].name);
    departments[departmentCount].courseCount = 0;
    departmentCount++;
    printf("Department added successfully!\n");
}

void addCourse() {
    if (departmentCount == 0) {
        printf("No departments available. Add a department first.\n");
        return;
    }

    int deptIndex;
    printf("Enter department index (0 to %d): ", departmentCount - 1);
    scanf("%d", &deptIndex);

    if (deptIndex < 0 || deptIndex >= departmentCount) {
        printf("Invalid department index.\n");
        return;
    }

    Department *dept = &departments[deptIndex];
    if (dept->courseCount >= MAX_COURSES) {
        printf("Maximum number of courses reached for this department.\n");
        return;
    }

    Course *course = &dept->courses[dept->courseCount];
    printf("Enter course code: ");
    scanf(" %[^\n]", course->code);
    printf("Enter course title: ");
    scanf(" %[^\n]", course->title);
    printf("Enter instructor name: ");
    scanf(" %[^\n]", course->instructor.name);
    printf("Enter instructor qualification: ");
    scanf(" %[^\n]", course->instructor.qualification);

    course->studentCount = 0;
    dept->courseCount++;
    printf("Course added successfully!\n");
}

void addStudent() {
    if (departmentCount == 0) {
        printf("No departments available. Add a department first.\n");
        return;
    }

    int deptIndex, courseIndex;
    printf("Enter department index (0 to %d): ", departmentCount - 1);
    scanf("%d", &deptIndex);

    if (deptIndex < 0 || deptIndex >= departmentCount) {
        printf("Invalid department index.\n");
        return;
    }

    Department *dept = &departments[deptIndex];
    if (dept->courseCount == 0) {
        printf("No courses available in this department. Add a course first.\n");
        return;
    }

    printf("Enter course index (0 to %d): ", dept->courseCount - 1);
    scanf("%d", &courseIndex);

    if (courseIndex < 0 || courseIndex >= dept->courseCount) {
        printf("Invalid course index.\n");
        return;
    }

    Course *course = &dept->courses[courseIndex];
    if (course->studentCount >= MAX_STUDENTS) {
        printf("Maximum number of students reached for this course.\n");
        return;
    }

    Student *student = &course->students[course->studentCount];
    printf("Enter student name: ");
    scanf(" %[^\n]", student->name);
    printf("Enter roll number: ");
    scanf("%d", &student->rollNo);

    course->studentCount++;
    printf("Student added successfully!\n");
}

void viewDetails() {
    if (departmentCount == 0) {
        printf("No departments available.\n");
        return;
    }

    for (int i = 0; i < departmentCount; i++) {
        Department dept = departments[i];
        printf("\nDepartment: %s\n", dept.name);
        for (int j = 0; j < dept.courseCount; j++) {
            Course course = dept.courses[j];
            printf("  Course: %s (%s)\n", course.title, course.code);
            printf("    Instructor: %s (%s)\n", course.instructor.name, course.instructor.qualification);
            printf("    Students:\n");
            for (int k = 0; k < course.studentCount; k++) {
                Student student = course.students[k];
                printf("      %d. %s (Roll No: %d)\n", k + 1, student.name, student.rollNo);
            }
        }
    }
}
void viewDepartmentDetails() {
    if (departmentCount == 0) {
        printf("No departments available.\n");
        return;
    }
    int deptIndex;
    printf("Enter department index (0 to %d): ", departmentCount - 1);
    scanf("%d", &deptIndex);
    if (deptIndex < 0 || deptIndex >= departmentCount) {
        printf("Invalid department index.\n");
        return;
    }
    Department dept = departments[deptIndex];
    printf("\nDepartment: %s\n", dept.name);
    for (int j = 0; j < dept.courseCount; j++) {
        Course course = dept.courses[j];
        printf("  Course: %s (%s)\n", course.title, course.code);
        printf("    Instructor: %s (%s)\n", course.instructor.name, course.instructor.qualification);
        printf("    Students:\n");
        for (int k = 0; k < course.studentCount; k++) {
            Student student = course.students[k];
            printf("      %d. %s (Roll No: %d)\n", k + 1, student.name, student.rollNo);
        }
    }
}
void menu() {
    int choice;
    do {
        printf("\nUniversity Management System\n");
        printf("1. Add Department\n");
        printf("2. Add Course\n");
        printf("3. Add Student\n");
        printf("4. View All Details\n");
        printf("5. View Department Details\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addDepartment();
                break;
            case 2:
                addCourse();
                break;
            case 3:
                addStudent();
                break;
            case 4:
                viewDetails();
                break;
            case 5:
                viewDepartmentDetails();
                break;
            case 0:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 0);
}
int main() {
    menu();
    return 0;
}



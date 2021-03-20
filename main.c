#include<stdio.h>
typedef struct Student{
    char name[30];
    int age;
    int rollno;
    char collegeName[50]
}studentData;

int main(){
    int numberOfStudent = 0;
    studentData* pointToDymanicMemory = NULL;
    getTheData(&numberOfStudent);
    createTheDynamicMemory(&numberOfStudent);
}

#include <stdio.h>

int main(){
    int marks[] = {70, 60, 65, 89, 90};
    int size = sizeof(marks) / sizeof(marks[0]);
    printf("%d", size);
}
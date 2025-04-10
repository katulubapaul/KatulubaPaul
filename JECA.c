// CAROL AND PAULS WEDDING
#include <stdio.h> // preprocessor directive
// printf and scanf

int main(){ // main function
    /*
    int %d or %i
    float %f
    char %c
    double %lf
    */
   /* Variables
   \n - newline 
   */
 // declaration
  //int age1 = 23; // initialising a variable 
  //printf("%d\n", age1);
  //printf("Happy belated birthday sweetheart");
  //printf("Enter age");
  //scanf("%i", &age);
  //printf("%d",age);

  char name[10];
  int age;

  printf("Enter name:");
  scanf("%s", &name);
  printf("Enter age:");
  scanf("%i", &age);

  printf(" %s you %i years old", name, age);
  
  
  
}

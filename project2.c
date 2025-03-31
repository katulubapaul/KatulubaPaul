#include <stdio.h>//Preprocessor directive
#include <stdlib.h>
#include <time.h>

int main(){//Main function.
printf("I am starting a new project in C!\n");

struct Cars{
char CarName[20];
int CarPrice;
};

struct Cars Toyota[5];
int size = sizeof(Toyota) / sizeof(Toyota[0]);
printf("%d", size);
}
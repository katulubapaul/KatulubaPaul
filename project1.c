#include <stdio.h>// preprocessor directive
#include <stdlib.h>

 // This the structures of the menu
 struct foods{
    int item_code;
    char name[50];
    int price;
};

//struct array of items on the menu
struct foods food[] =
{
    {001, "Pizza", 32},
    {002, "Burger", 25},
    {003, "Rolex", 19},
    {004, "Chips", 10},
    {005, "Chicken", 14},
    {006, "Roasted_meat", 12},
    {007, "Fish", 20},
};

//Function for showing the menu to the user
int ShowMenu(){
    int i; 
    for( i = 0; i < 7; i++){
        printf("ITEM_CODE: %d  NAME: %s PRICE: $%d \n", food[i].item_code, food[i].name, food[i].price);
       

    }
}


int main(){//Main function

    //variable to store user choice
    int choice;

    //variable to stores user name
    char name[25];

    //Prompt user to make inputs.
    printf("Enter your name:\n");
    scanf("%s", &name);

    // Welcome message to a user
    printf("%s! Welcome to KICKNACKS\n", name);

    //list of choices for the user to continue.
    printf("Enter a number to make choice and continue: \n");
    printf("1. Menu\n");
    printf("2. Place Order\n");
    printf("3. View Order\n");
    printf("4. Exit\n");
    scanf("%d", &choice);

    //switch to test the user input and carries out the logic
    switch(choice){
        case 1:
        ShowMenu();
        break;

        default:
        printf("Please enter the valid choice!");
    }
 
}
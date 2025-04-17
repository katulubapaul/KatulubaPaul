// (*** GROUP I ***)
/* RESTUARANT FOOD ORDERING SYSTEM IN C.
 Customer can:
 - Place order.
 - View the menu.
 - View the receipt after placing order.
 - Calculate the grand total, sub total, tax.
 - Decide how many items to order (Maximum is 3).

ShowMenu() is to display itemised menu to the customers.
calculateTotal() passes in the order array to calculate the subtotal, tax, grand_total. 
placeOrder() accepts multiple items, when the user is placing orders.
ViewOrder() prints or displays itemised reciept with the orders made.

struct foods - defines the structure or template of the food array.
struct Order - defines the structure or template of the order array. 
struct foods food[] - array that stores the menu items. 
struct order orders[] - array to store the placed orders.
 */

#include <stdio.h>// preprocessor directive
#include <stdlib.h>

//variable to store user name
char name[25];

// function declaration
int ViewOrder();
int ShowMenu();
int PlaceOrder();
int calculateTotal();

 // This is the structures of the menu
 struct foods{
    int item_code;
    char name[50];
    double price;
};

//This is the structure of the order.
struct Order{
    int code;
    int quantity;
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

//struct array to store orders placed by customer.
struct Order orders[3];

//Function for showing the menu to the user
int ShowMenu(){

    //index for the struct array.
    int i; 
    int max = sizeof(food) / sizeof(food[0]);
    
    //The title of the menu to be printed out.
    printf("*** O U R M E N U. ***\n");
    printf("\n");

    //loop through the struct array.
    for( i = 0; i < max; i++){

       //print out the iterations.
        printf("CODE: %d  ITEM: %s PRICE: $%.2lf \n", food[i].item_code, food[i].name, food[i].price);
    }
}

//Place order function
int PlaceOrder(){

    //the function to display a menu to the user is called.
    ShowMenu();
    printf("\n");
    printf("Enter 0 when you reach the number of items you want...\n");

    //prompt the user to enter the item code for order placing.
    //"int i" is the maximum number of orders a user can make.
    for(int i = 0; i < 3; i++){

    //Prompt user to take the item code
    printf("Enter the item code to continue:\n");
    scanf("%d", &orders[i].code);

    /* User can decide to take one item and this gives him/her
    a right by entering 0 */
    if(orders[i].code == 0){
        break;
    }
    
    //Prompt user to take the quantity of the item.
    printf("Quantity:\n");
    scanf("%d", &orders[i].quantity);
    }

    ViewOrder();
}

//ViewOrder function for viewing products a user have chosen.
int ViewOrder(){  
    
    //title of the receipt for user.
    printf("*****YOUR RECEIPT*****\n");

    //Customer details
    printf("NAME: %s\n", name);
    printf("PAYMENT METHOD: credit card\n");
    printf("\n");

    //Loop through the items stored in the struct orders array.
    // "int i" is the maximum number of orders a user can make.
    for(int i = 0; i < 3; i++){

        /*Since the product codes starts from 001, this 
        item_index variable make there indexing easy.*/
        int item_index = orders[i].code - 1;
        printf("%d %s  @  $%.2lf \n", orders[i].quantity, food[item_index].name, food[item_index].price*orders[i].quantity);

        }
        printf("\n");
        calculateTotal(orders);
}

//calculateTotal() helps to calculate and print out the overall total.
int calculateTotal(struct Order orders[]){
    double tax; //variable to store the tax.
    double sum = 0; //initial sum of the prices.
    double Grand_total; //variable to store Grand total.

    for(int i = 0; i < 3; i++){
        int item_index = orders[i].code - 1;
        sum += food[item_index].price*orders[i].quantity;
    }

    tax = sum * 7/100; //tax
    Grand_total = sum + tax; //Grand total

    //All totals printed out after the calculations.
    printf("Subtotal: $%.2lf\n", sum);
    printf("Tax: 7%% ($%.2lf)\n", tax);
    printf("Grand total: $%.2lf\n", Grand_total);
    printf("\n");
    printf("Your order is on the way...\n");
    printf("***Thank you for ordering with us!***");
}

int main(){ //Main function

    //variable to store user choice
    int choice;

    //Prompt user to make inputs.
    printf("Enter your name:\n");
    fgets(name, 25, stdin);

    // Welcome message to a user
    printf("%s! Welcome to KICKNACKS\n ", name);

    //list of choices for the user to continue.
    printf("Enter a number to make choice and continue: \n");
    printf("1. Menu\n");
    printf("2. Place Order\n");
    printf("3. View Order\n");
    printf("4. Exit\n");
    scanf("%d", &choice);
    printf("\n");

    //switch to test the user input and carries out the logic
    switch(choice){

        //switch case 1 shows the menu to the user
        case 1:
        ShowMenu();
        break;

        //switch case 2 help the user to place an order.
        case 2:
        PlaceOrder();
        break;

        //switch case 3 helps the user to view the current order.
        case 3:
        ViewOrder();
        break;

        //switch case 4 helps the user to exit the system.
        case 4:
        printf("Thank you for ordering with us!\n");
        printf("Exiting...");
        break;

        //This displays when a wrong choice is made
        default:
        printf("Please enter the valid choice!");
    }
 
}
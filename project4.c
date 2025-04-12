/*
LIBRARY INVENTORY MANAGEMENT
- Check the availabilty of the book.
- Borrow book.
- Mark those which are unavailable.
- checkout
*/
 #include <stdio.h> // preprocessor directive.
 #include <stdlib.h>

 // Function declarations.
 int checkAvailability(int); // this checks whether the book is available.
 int borrowBook(); // this mark the book unavailable 

 // Function defination.
 int checkAvailability(int Book_Id){// this checks the availability of the book
    int i;
    int availableBooks[5] = {1, 2, 3, 4, 5}; // array of book ids.
    for(i = 0; i < 5; i++){
        if( i == Book_Id){
            printf("This book is available!");
            break;
        }
    }
 }

 int main(){ // Main function
    int Book_id;
    printf("Enter the Book_Id:\n");
    scanf("%d", &Book_id);
    checkAvailability(Book_id);

 }
/*
Documentation:
Name : Akshata Babaleshwar.
Batch id : 26018F
Project name:Addressbook .
Description :Addressbook  Project is used to store and manage contact details such as name,phone number,email ID.
             It allows users to add,search,edit,delete and display contacts.
             It also performs input validation and duplicate checking.
             Contacts can be saved and loaded using file handling.  */


#include <stdio.h>
#include "contact.h"
//colour Definitions
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN    "\033[1;36m"
#define WHITE   "\033[1;37m"
#define RESET   "\033[0m"

int main() 
{
    int choice;
    AddressBook addressBook;
    initialize(&addressBook); // Initialize the address book

    do
{
    printf(CYAN "\n========== ADDRESS BOOK MENU ==========\n" RESET);

    printf(GREEN "1. Create contact\n" RESET);
    printf(YELLOW "2. Search contact\n" RESET);
    printf(BLUE "3. Edit contact\n" RESET);
    printf(RED "4. Delete contact\n" RESET);
    printf(MAGENTA "5. List all contacts\n" RESET);
    printf(WHITE "6. Exit\n" RESET);

    printf(CYAN "=======================================\n" RESET);

    printf(YELLOW "Enter your choice: " RESET);
    scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                createContact(&addressBook);
                break;
            case 2:
                searchContact(&addressBook);
                break;
            case 3:
                editContact(&addressBook);
                break;
            case 4:
                deleteContact(&addressBook);
                break;
            case 5:
                printf("Select sort criteria:\n");
                printf("1. Sort by name\n");
                printf("2. Sort by phone\n");
                printf("3. Sort by email\n");
                printf("Enter your choice: ");
                int sortChoice;
                scanf("%d", &sortChoice);
                listContacts(&addressBook, sortChoice);
                break;
            case 6:
                printf("Saving and Exiting...\n");
                saveContactsToFile(&addressBook);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);
    
       return 0;
}


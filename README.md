Address Book Management System

Description:
A menu-driven Address Book Management System developed using C programming.



 1. Project Overview

The Address Book Management System is a menu-driven application developed using the C programming language. It is designed to store, manage, and maintain contact information efficiently.

The application allows users to create, search, edit, delete, and display contacts. It uses file handling to store contact details in a CSV file, allowing the information to be loaded again when the application is restarted.

 2. Features

- Create Contact:Add a new contact with name, phone number, and email address.
- Search Contact: Find existing contacts using name, phone number, or email address.
- Edit Contact: Update the details of an existing contact.
- Delete Contact: Remove unwanted contacts from the address book.
- List Contacts:  Display all saved contacts.
- Input Validation: Validate names, phone numbers, and email addresses.
- Duplicate Checking: Prevent duplicate phone numbers and email addresses.
- File Handling:Save contact information in a CSV file and load it when the application starts.
- Contact Limit:Manage up to 100 contacts.

 3. Technologies Used

- Programming Language: C
- Compiler: GCC
- Data Structures: Structures and Arrays
- Concepts: Pointers, Functions, Strings, Conditional Statements and Loops
- File Handling: CSV file operations

 4. Input Validation

The application performs validation to maintain correct contact information.

- Name should contain alphabetic characters and spaces.
- Phone number should contain 10 digits and start with a digit between 6 and 9.
- Email address is checked for basic format requirements, including lowercase characters and a `.com` ending.
- Duplicate phone numbers and email addresses are checked.
- Invalid inputs are given limited retry attempts.

5. Project Structure


Address_Book_Management_System/
│
├── main.c
├── contact.c
├── contact.h
├── file.c
├── file.h
├── populate.c
├── populate.h
├── contacts.csv
├── contacts.txt
├── README.md
├── .gitignore
│
└── screenshots/
    ├── main-menu.png
    ├── create-contact.png
    ├── search-contact.png
    ├── edit-contact.png
    ├── delete-contact.png
    └── list-contacts.png


 6. Advantages

- Simple and user-friendly menu-driven interface.
- Makes contact management easier.
- Avoids duplicate phone numbers and email addresses.
- Provides input validation to reduce incorrect entries.
- Uses file handling to preserve contact information.
- Demonstrates modular programming by dividing the application into multiple source and header files.
- Helps understand practical implementation of C programming concepts.

 7. Disadvantages and Limitations

- The application supports a maximum of 100 contacts.
- It uses a command-line interface rather than a graphical interface.
- Contact information is stored in a plain CSV file without encryption.
- It does not provide cloud storage or online synchronization.
- It is designed for local, single-user use.
- Email validation supports only a limited format and is not a complete email verification system.

8. Applications / Uses

- Maintaining personal contact information.
- Managing contact details for small businesses.
- Storing customer information for small-scale applications.
- Learning file handling and data management in C.
- Understanding CRUD operations: Create, Read, Update and Delete.

9. Compilation

Compile the project using GCC:
bash
gcc *.c


## 10. Execution

Run the application:

bash
./a.out


11. Data Storage

Contact information is stored in `contacts.csv`.

The application loads previously saved contacts when it starts and saves the current contacts when the user exits.

12. Output Screenshots

Screenshots demonstrating the different operations of the Address Book Management System are available in the `screenshots` folder.

Main Menu:

<img width="475" height="226" alt="Main-Menu" src="https://github.com/user-attachments/assets/57c07207-bb7b-44a4-aca9-f3dd7ea177ad" />

### Create Contact
<img width="443" height="636" alt="contact c" src="https://github.com/user-attachments/assets/8b01314e-5e08-47af-9e4a-91104eb771a7" />
<img width="552" height="315" alt="contact1 c" src="https://github.com/user-attachments/assets/8b198dc2-4d46-4c71-a4c9-827366f7df7f" />

### Search Contact
<img width="587" height="796" alt="Screenshot 2026-11-20 115536" src="https://github.com/user-attachments/assets/280354c3-2540-4e98-b077-6c7c9bac5559" />
<img width="535" height="461" alt="Screenshot 2026-11-20 115701" src="https://github.com/user-attachments/assets/1587dffb-2f1f-4bfb-bda8-acbc31f86954" />




### Edit Contact
<img width="562" height="743" alt="edit c" src="https://github.com/user-attachments/assets/f99a9073-4b59-4969-8811-4e757af34637" />
<img width="566" height="263" alt="edit1 c" src="https://github.com/user-attachments/assets/03664bd7-6d13-43b2-95d0-c6681ea45d93" />




### Delete Contact
<img width="661" height="813" alt="delete c" src="https://github.com/user-attachments/assets/5996f03d-c009-40f8-af22-27f8d3d79133" />




### List Contacts
<img width="651" height="541" alt="print c" src="https://github.com/user-attachments/assets/c8a7949a-ec3d-4c4e-814e-cd93aa2eb8ec" />

13. Learning Outcomes

Through this project, I gained practical experience in:

- Writing modular C programs.
- Using structures and pointers.
- Implementing functions.
- Performing string manipulation and validation.
- Reading and writing files.
- Implementing CRUD operations.
- Organizing a multi-file C project.

 14. Author
Akshata Babaleshwar

Project: Address Book Management System

Language:C Programming








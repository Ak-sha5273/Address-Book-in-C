#include <stdio.h>
#include "file.h"

// Save contacts into CSV file
void saveContactsToFile(AddressBook *addressBook)
{
    FILE *fp;

    fp = fopen("contacts.csv", "w");

    if (fp == NULL)
    {
        printf("Unable to open contacts.csv\n");
        return;
    }

    // Write column headings
    fprintf(fp, "Name,Phone,Email\n");

    // Write all contacts
    for (int i = 0; i < addressBook->contactCount; i++)
    {
        fprintf(fp, "%s,%s,%s\n",
                addressBook->contacts[i].name,
                addressBook->contacts[i].phone,
                addressBook->contacts[i].email);
    }

    fclose(fp);

    printf("Contacts saved successfully\n");
}

// Load contacts from CSV file
void loadContactsFromFile(AddressBook *addressBook)
{
    FILE *fp;

    fp = fopen("contacts.csv", "r");

    if (fp == NULL)
    {
        return;
    }

    // Skip the first line containing headings
    fscanf(fp, "%*[^\n]\n");

    addressBook->contactCount = 0;

    // Read contacts from CSV file
    while (addressBook->contactCount < MAX_CONTACTS &&
           fscanf(fp, "%49[^,],%19[^,],%49[^\n]\n",
                  addressBook->contacts[addressBook->contactCount].name,
                  addressBook->contacts[addressBook->contactCount].phone,
                  addressBook->contacts[addressBook->contactCount].email) == 3)
    {
        addressBook->contactCount++;
    }

    fclose(fp);
}

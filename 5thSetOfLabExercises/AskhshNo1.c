//Tsala Zafeiria // 1084963 // Lab 1// A13 //
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100 //max contacts in address book 100

typedef struct info{

char first_name[50];
char last_name[50];
unsigned long long int mobile_phone;
unsigned long long int landline;
char address[100];
char city[50];
int postal_code;
char email[50];
int special_code;

}Info;

///global variable
Info Info_List[MAX_ENTRIES]; //array that stores up to 100 contacts
int Entry_Counter=0; //counts the contacts into the user's address book

///Functions used for when the user wants to sort their address book
int compareByNameInc(const void* a, const void* b) {
  const Info* infoA = (const Info*)a;
  const Info* infoB = (const Info*)b;
  return strcmp(infoA->first_name, infoB->first_name);
} //function to sort the address book by name in ascending order


int compareByNameDec(const void* a, const void* b) {
  const Info* infoA = (const Info*)a;
  const Info* infoB = (const Info*)b;
  return strcmp(infoB->first_name, infoA->first_name);
} //function to sort the address book by name in descending order


int compareByCityInc(const void* a, const void* b) {
  const Info* infoA = (const Info*)a;
  const Info* infoB = (const Info*)b;
  return strcmp(infoA->city, infoB->city);
} //function to sort the address book by city name in ascending order


int compareByCityDec(const void* a, const void* b) {
  const Info* infoA = (const Info*)a;
  const Info* infoB = (const Info*)b;
  return strcmp(infoB->city, infoA->city);
} ////function to sort the address book by city name in descending order


int compareByLastNameInc(const void* a, const void* b) {
  const Info* infoA = (const Info*)a;
  const Info* infoB = (const Info*)b;
  return strcmp(infoA->last_name, infoB->last_name);
} //function to sort the address book by last name in ascending order


int compareByLastNameDec(const void* a, const void* b) {
  const Info* infoA = (const Info*)a;
  const Info* infoB = (const Info*)b;
  return strcmp(infoB->last_name, infoA->last_name);
} //function to sort the address book by last name in descending order


///FUNCTION THAT PROMPTS THE USER TO ENTER A CONTACT'S INFORMATION
void getEntry(void){
printf("\n\t\t\t\t\t\t\tCurrent no. of contacts:%d\n" , Entry_Counter); //diplays the number of contacts the user has entered
    if(Entry_Counter>MAX_ENTRIES)
        {
            printf("\e[1;37m WARNING: Your address book is full !!! Try deleting contacts to enter a new one\e[0m\n");
            exit(0); //program exits because the address book is full and action is needed from the user
        }

printf("\n\e[1;37mFirst Name\e[0m: ");
fflush(stdin);
fgets(Info_List[Entry_Counter].first_name, sizeof(Info_List[Entry_Counter].first_name), stdin);
Info_List[Entry_Counter].first_name[strcspn(Info_List[Entry_Counter].first_name, "\n")] = 0;    /*removes the extra spaces that get created
                                                                                           when the user enters those strings and hits enter */

printf("\e[1;37mLast Name\e[0m: ");
fflush(stdin);
fgets(Info_List[Entry_Counter].last_name, sizeof(Info_List[Entry_Counter].last_name), stdin);
Info_List[Entry_Counter].last_name[strcspn(Info_List[Entry_Counter].last_name, "\n")] = 0; /*removes the extra spaces that get created
                                                                                           when the user enters those strings and hits enter */

printf("\e[1;37mMobile Phone\e[0m: ");
scanf("%llu" ,&Info_List[Entry_Counter].mobile_phone);

printf("\e[1;37mLandline\e[0m: ");
scanf("%llu" , &Info_List[Entry_Counter].landline);

printf("\e[1;37mAddress\e[0m: ");
fflush(stdin);
fgets(Info_List[Entry_Counter].address, sizeof(Info_List[Entry_Counter].address),stdin);
Info_List[Entry_Counter].address[strcspn(Info_List[Entry_Counter].address, "\n")] = 0;  /*removes the extra spaces that get created
                                                                                           when the user enters those strings and hits enter */
printf("\e[1;37mCity\e[0m: ");
fflush(stdin);
fgets(Info_List[Entry_Counter].city, sizeof(Info_List[Entry_Counter].city),stdin);
Info_List[Entry_Counter].city[strcspn(Info_List[Entry_Counter].city, "\n")] = 0;    /*removes the extra spaces that get created
                                                                                           when the user enters those strings and hits enter */
printf("\e[1;37mPostal Code\e[0m: ");
scanf("%d" , &Info_List[Entry_Counter].postal_code);

printf("\e[1;37mE-mail\e[0m: ");
fflush(stdin);
fgets(Info_List[Entry_Counter].email, sizeof(Info_List[Entry_Counter].email),stdin);
Info_List[Entry_Counter].email[strcspn(Info_List[Entry_Counter].email, "\n")] = 0;   /*removes the extra spaces that get created
                                                                                    when the user enters those strings and hits enter */
printf("Enter a \e[1;37m special code\e[0m for the person here: ");
scanf("%d" , &Info_List[Entry_Counter].special_code);


///LOOP THAT CHECKS WHETHER THE SPECIAL USER CODE HAS BEEN USED BEFORE , IN ANOTHER ENTRY
int i,j;
for (i = 0; i < Entry_Counter ; i++)
{
    for (j = i+1; j <= Entry_Counter; j++)
        {
            while(Info_List[j].special_code == Info_List[i].special_code)
                {
                    printf("Code already exists. Enter a new one: ");
                    scanf("%d" , &Info_List[Entry_Counter].special_code); /*program will keep asking the user to
                                                                        enter the correct special code until he does. If he doesnt,
                                                                            the program will never exit!*/
                }
        }
}

Entry_Counter++; //counter increase after an entry has been entered
}

///FUNCTION THAT DISPLAYS THE ENTERED CONTACTS
void displayEntries(void){
 if (Entry_Counter==0)
    {
        printf("\t\tError! Your address Book is empty\n"); //if there's no contact , the program will throw an error text
    }
    else {
        printf(" \t\t\t\t\t\t\t\e[1;37m C  O  N  T  A  C  T  S  \e[0m\n");
        int i;
        for (i = 0; i < Entry_Counter; i++)
        {
            char* name = strtok(Info_List[i].first_name, " \t\n");
            char* lastname = strtok(Info_List[i].last_name, " \t\n");
            int len = strcspn(Info_List[i].address, "\n"); /*this function is used so we can use full strings
                                                                    of addresses up until the user hits enter. For example if we had an address like
                                                                    "kanakarh 21" , we wouldnt want to use the strtok function, because then
                                                            the program would just print "Kanakarh" and we wouldn't be able to get the number of the building */
            char* city = strtok(Info_List[i].city, " \t\n");
            char* email = strtok(Info_List[i].email, " \t\n");

            // time to print our elements in a nice and aesthetic way!!!!
            printf("\n%s | %s | %llu |", name, lastname, Info_List[i].mobile_phone);
            printf(" %llu ", Info_List[i].landline);
            printf("| %.*s | ", len, Info_List[i].address);
            printf("%s | %d | %s |", city, Info_List[i].postal_code, email);
            printf(" %d |\n", Info_List[i].special_code);
            printf("---------------------------------------------------------------------------------------------------------------------------------------------");
        }
    }
}

///FUNCTION THAT PROMPTS THE USER TO MODIFY SOME CONTACT'S INFO FIELD
void modifyEntries(struct info Info){
int num,i;
int choice;
printf("\nEnter the special code of the contact: "); //We're gonna search up the contact by the special code
                                                    //the user had given , back in "GetEntry" function
scanf("%d" , &num);

for (i=0; i < Entry_Counter; i++)
{
//program checks for the special number and if it's found , a menu appears
  if(num == Info_List[i].special_code)
        {
            printf("    \n****  ****\n");
            printf("    1- Modify Name\n");
            printf("    2- Modify Last Name\n");
            printf("    3- Modify Mobile Number\n");
            printf("    4- Modify Landline number\n");
            printf("    5- Modify Address\n");
            printf("    6- Modify City\n");
            printf("    7- Modify Postal Code\n");
            printf("    8- Modify Mail\n");
            printf("    0- Exit to main menu");
            printf("\nWhat would you like to do? Select: ");
            scanf("%d",&choice);

        switch(choice){
        case 1:
            printf("\nEnter new name: ");
            fflush(stdin);
            fgets(Info_List[i].first_name, sizeof(Info_List[i].first_name), stdin);
            break;
        case 2:
            printf("\nEnter new last name: ");
            fflush(stdin);
            fgets(Info_List[i].last_name, sizeof(Info_List[i].last_name), stdin);
            break;
        case 3:
            printf("\nEnter new mobile number: ");
            scanf("%llu" , &Info_List[i].mobile_phone);
            break;
        case 4:
            printf("Enter new landline number: ");
            scanf("%llu" , &Info_List[i].landline);
            break;
        case 5:
            printf("\nEnter new address: ");
            fflush(stdin);
            fgets(Info_List[i].address, sizeof(Info_List[i].address), stdin);
            break;
        case 6:
            printf("Enter new city: ");
            fflush(stdin);
            fgets(Info_List[i].city, sizeof(Info_List[i].city), stdin);
            break;
        case 7:
            printf("\nEnter new postal code: ");
            scanf("%d" , &Info_List[i].postal_code);
            break;
        case 8:
            printf("Enter new email: ");
            fflush(stdin);
            fgets(Info_List[i].email, sizeof(Info_List[i].email), stdin);
            break;
        case 0:
            printf("\nExiting to main menu...\n");
            break;
        default:
            printf("\n No command found.Exiting to main menu...\n");
            break;
                }

        break;
            }

}
//If the special code is not found , then there's no contact with that code
    if (num!=Info_List[i].special_code)
    {
        printf("No contact found with this code\n");
    }

}

///FUNCTION THAT SAVES CONTACTS INTO THE FILE
void savetofile(void){
FILE *addressbook;
//we open the file in append mode , so every new entry gets appended in the end of the file
    addressbook = fopen("AddressBook.txt", "a+");
    if (addressbook == NULL) //error checking
    {
        printf("Cannot open file :( \n");
    }
    int i;
    for(i = 0; i < Entry_Counter; i++)
        { //same method as "DisplayEntries" function , although now we are trying to print the elements INTO the txt file
            //(we're using commas so we can read more easily the file later and assign the contents into the struct members

                char* name = strtok(Info_List[i].first_name, " \t\n");
                char* lastname = strtok(Info_List[i].last_name, " \t\n");
                int len = strcspn(Info_List[i].address, "\n");
                char* city = strtok(Info_List[i].city, " \t\n");
                char* email = strtok(Info_List[i].email, " \t\n");

                fprintf(addressbook,"\n%s,%s,%llu,", name, lastname, Info_List[i].mobile_phone);
                fprintf(addressbook,"%llu", Info_List[i].landline);
                fprintf(addressbook,",%.*s,", len, Info_List[i].address);
                fprintf(addressbook,"%s,%d,%s,", city, Info_List[i].postal_code, email);
                fprintf(addressbook,"%d\n", Info_List[i].special_code);
        }
    fclose(addressbook);
    printf("\nSave was successful!\n"); //yay!
}

///FUNCTION THAT SORTS OUR ADDRESS BOOK IN EVERY ORDER POSSIBLE
void sortEntries(void) {
//menu
int usercommand;
printf("How would you like to sort your address book ?\n");
printf("1- By Name(A-Z)\n");
printf("2- By Last Name(A-Z)\n");
printf("3- By City(A-Z)\n");
printf("4- By Name(Z-A)\n");
printf("5- By Last Name(Z-A)\n");
printf("6- By City(Z-A)\n");
printf("0- Exit to main menu\n");
printf("=================================\n");
printf("Enter your selection here : ");
scanf("%d" , &usercommand);

switch(usercommand){
case 1:
    qsort(Info_List, Entry_Counter, sizeof(Info), compareByNameInc);
    printf("Address Book sorted by name(increasing order)successfully!\n");
    break;
case 2:
    qsort(Info_List, Entry_Counter, sizeof(Info), compareByLastNameInc);
    printf("Address Book sorted by last name(increasing order)successfully!\n");
    break;
case 3:
    qsort(Info_List, Entry_Counter, sizeof(Info), compareByCityInc);
    printf("Address Book sorted by city(increasing order)successfully!\n");
    break;
case 4:
    qsort(Info_List, Entry_Counter, sizeof(Info), compareByNameDec);
    printf("Address Book sorted by name(descending order)successfully!\n");
    break;
case 5:
    qsort(Info_List, Entry_Counter, sizeof(Info), compareByLastNameDec);
    printf("Address Book sorted by last name(descending order)successfully!\n");
    break;
case 6:
    qsort(Info_List, Entry_Counter, sizeof(Info), compareByCityDec);
    printf("Address Book sorted by city(descending order)successfully!\n");
    break;
case 0:
    printf("Exiting to main menu...\n");
    break;
default:
    printf("Invalid Command.Exiting to main menu...\n");
    break;
}
}

///FUNCTION THAT PROMPTS THE USER TO ENTER A LAST NAME TO SEARCH FOR AND THEN PRINTS EVERY INFO FIELD
void search_by_lastname() {
    char last_name[50];
    printf("\nEnter last name to search for: ");
    fflush(stdin);
    fgets(last_name, sizeof(last_name), stdin);
    last_name[strcspn(last_name, "\n")] = 0; //same logic as in getEntry function

    Info user; //used so we can copy the last name the user wants to this and use it below
    strcpy(user.last_name, last_name);
    qsort(Info_List, Entry_Counter, sizeof(Info), compareByLastNameInc); //bsearch function wants the array to be sorted
                                                                    //in ascending order or else there might be created some potential problems

    Info* result = (Info*) bsearch(&user, Info_List, Entry_Counter, sizeof(Info), compareByLastNameInc);
   //checking whether this last name exists in our address book
    if(result!=NULL){
        printf("\t\t\t\t*** C O N T A C T   I N F O *** ");
        printf("\n\t\tFirst Name: %s", result->first_name);
        printf("\n\t\tLast Name: %s", result->last_name);
        printf("\n\t\tMobile Phone: %llu", result->mobile_phone);
        printf("\n\t\tLandline: %llu", result->landline);
        printf("\n\t\tAddress: %s", result->address);
        printf("\n\t\tCity: %s", result->city);
        printf("\n\t\tPostal Code: %d", result->postal_code);
        printf("\n\t\tE-mail: %s", result->email);
        printf("\n\t\tSpecial Code: %d", result->special_code);
    }
    else
        printf("Contact not found.\n");
}

///FUNCTION TO ASSIGN CONTENTS FROM FILE TO STRUCT MEMBERS
/*
void readfromtext(void){
    FILE *addressbook;
    addressbook = fopen("AddressBook.txt", "r");
    if (addressbook == NULL) {
        printf("Cannot open file :( \n");
        return;
    }
    int i = 0;
    while(fscanf(addressbook, "%[^,],%[^,],%[^,]llu,%[^,]llu,%[^,],%[^,],%[^,]d,%[^,],%[^\n]d", Info_List[i].first_name,
             Info_List[i].last_name, &Info_List[i].mobile_phone, &Info_List[i].landline, Info_List[i].address, Info_List[i].city,
              &Info_List[i].postal_code, Info_List[i].email,&Info_List[i].special_code) != EOF) {
        i++;

    }
    Entry_Counter = i;
    fclose(addressbook);
return;
}




antimetwpisa provlhma edw , den mporesa na diamorfwsw katallhla
ton kwdika gia na ginei swsta h anagnwsh
 apo to arxeio kai ustera na perasw ta dedomena sta struct members
 kai na ta aksiopoihsw katallhla.


*/
void printfile(void){
    FILE *print;
    char c;
    print = fopen("AddressBook.txt" , "r");
     if (print == NULL)
        {
            printf("Cannot open file :( \n");
        }
    else
        {
            c = fgetc(print);
            while (c != EOF)
            {
                printf ("%c", c);
                c = fgetc(print);
            }
        }
    fclose(print);
}
int main(){
     int userinput;
    struct info Entries;
    // User Menu
    while(1){
       printf("\n\t \t.......................................................................................................................... \n");
       printf(" 1- Add New Contact\n");
       printf(" 2- Display Contacts\n");
       printf(" 3- Modify Contact\n");
       printf(" 4- Save Contacts to file\n");
       printf(" 5- Load Contacts from file\n");
       printf(" 6- Sort Contacts\n");
       printf(" 7- Find A Contact\n");
       printf(" 8- Print contents of file\n");
       printf(" 0- Exit App\n");
       printf("\n");
       printf("Enter your selection: ");
       scanf("%d", &userinput);

switch(userinput){
case 1:
    getEntry();
    break;
case 2:
    displayEntries();
    break;
case 3:
    modifyEntries(Entries);
    break;
case 4:
    savetofile();
    break;
//case 5:
   // readfromtext();
   // break;
case 6:
    sortEntries();
    break;
case 7:
    search_by_lastname();
    break;
case 8:
    printfile();
    break;
case 0:
    printf("Thanks for using our app! Exiting now...");
    exit(0);
    break;
default:
    printf("No command found. Exiting...\n");
    return 0;
    break;
}
    }
return 0;

}

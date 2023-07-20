//Askhsh 1 // Tsala Zafeiria 1084963
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

///Definition of each bottle's cost in cents
#define SBPRICE 8 //0.008 euros
#define BBPRICE 20 // 0.2 euros
#define DISCOUNT1 8 //8% discount
#define DISCOUNT2 20 //20% discount

///Struct
struct order{

char name[50]; //array that stores the name of the customer
char lastname[50]; // array that stores the last name of the customer
int smallbottles; //used to store number of small bottles
int bigbottles; //used to store number of big bottles
int cost; //cost without discount
int sum; //big bottles + small bottles
int finalcost;//final cost after special discounts
char status[100]; //to define whether the order is pending , handled or closed

};

typedef struct order Order; //using typedef to save some time typing this every time

///Global Variable
Order orderList[100]; //single array

///Counters used throughout our program
int lastOrder = 0; //changes when we insert a new order
int lastHandled = 0; //changes when we handle an order
int lastClosed = 0; //change when we close an order

///Function to get the order from the user
void getorder(void){

    printf("\nName: ");
    fflush(stdin); //to clear the buffer and get the correct input
    fgets(orderList[lastOrder].name, sizeof(orderList[lastOrder].name), stdin);

    printf("Last Name: ");
    fflush(stdin);
    fgets(orderList[lastOrder].lastname, sizeof(orderList[lastOrder].lastname), stdin);

    printf("Number of small bottles: ");
    scanf("%d" , &orderList[lastOrder].smallbottles);

    printf("Number of big bottles: ");
    scanf("%d", &orderList[lastOrder].bigbottles);

   orderList[lastOrder].status=="Pending";  //set status to help with the printing of pending orders
   lastOrder++;
}
///Function that calculates the cost(handles the order)
void calculatecost(void){

    if (orderList[lastHandled].name[1] == '\0' && lastHandled > lastOrder)
        {
           printf("\nNo order found\n");
        }
    else
        {
            orderList[lastHandled].cost = SBPRICE * orderList[lastHandled].smallbottles + BBPRICE * orderList[lastHandled].bigbottles;

            orderList[lastHandled].sum = orderList[lastHandled].smallbottles + orderList[lastHandled].bigbottles;

            printf("Customer %s order has been handled successfully!\n",orderList[lastHandled].name);
        }
        orderList[lastHandled].status=="Handled"; //will use it later on to print stuff
        lastHandled++;
}
///Function that calculates discount and final cost
void calculatefinal(void){

    ///everything is calculated in cents
    if(lastClosed <= lastHandled || orderList[lastClosed].status == "Handled")
        {
            if (orderList[lastClosed].cost>=20000 || orderList[lastClosed].sum>=3000)
                {
                    orderList[lastClosed].finalcost = orderList[lastClosed].cost - (orderList[lastClosed].cost * DISCOUNT1)/100;
                }
            else if (orderList[lastClosed].cost>=60000)
                {
                      orderList[lastClosed].finalcost = orderList[lastClosed].cost - (orderList[lastClosed].cost * DISCOUNT2)/100;
                }
            else
                {
                    printf("\nThere is no discount\n");
                    orderList[lastClosed].finalcost==orderList[lastClosed].cost;
                }

    printf("Order %shas been closed!" , orderList[lastClosed].name); //no space after %s because it ruins the format

    orderList[lastClosed].status=="Closed";
            lastClosed++;
    }
}
///Function that displays pending orders(NOT FROM A FILE)
void displaypending(void){
    int i;
        for (i = lastHandled; i < lastOrder; i++)
            {
                printf("\n\t***Pending orders***\n");

                if (orderList[i].status!="Handled" && orderList[i].status!="Closed")
                {
                    printf("----%d----",i+1);
                    printf("-Name: %s ",orderList[i].name);
                    printf("-Last Name: %s",orderList[i].lastname);
                    printf("\n-Number of small bottles:%d",orderList[i].smallbottles );
                    printf("\n-Number of big bottles:%d", orderList[i].bigbottles);
                }

                else
                {
                    printf("No pending orders to display");
                }
            }
}
///Function that saves pending orders in a file
void savepending(void){
FILE *orderLists;
    char c;
    orderLists = fopen("Pending.txt", "a+");
    if (orderLists == NULL)
    {
        printf("Cannot open file \n");
    }
    int i;
    for(i = lastHandled; i < lastOrder; i++)
    {
        fprintf(orderLists,"\n*Name:%s", orderList[i].name);
        fprintf(orderLists,"*Last Name:%s", orderList[i].lastname);
        fprintf(orderLists,"*No Of Small Bottles:%d", orderList[i].smallbottles);
        fprintf(orderLists,"\n*No Of Big Bottles:%d\n", orderList[i].bigbottles);
    }
    fclose(orderLists);
    printf("\nSaved successfully!\n");
}
///Function that prints pending orders
void printpending(void){
    FILE *printpending;
    char c;
    printpending = fopen("Pending.txt" , "r");
     if (printpending == NULL)
        {
            printf("Cannot open file \n");
        }
    else
        {
            c = fgetc(printpending);
            while (c != EOF)
            {
                printf ("%c", c);
                c = fgetc(printpending);
            }
        }
    fclose(printpending);
}
///Function to display closed orders(NOT FROM A FILE)
void displayclosed(void){
    int i;
    for (i=0; i < lastClosed; i++)
    {
        if (orderList[i].status == "Pending" && orderList[i].status == "Handled")
            {
                printf("\nNo closed orders to display!");
            }
            else if (orderList[i].status != "Pending" || orderList[i].status != "Handled")
                {
                    printf("\n---------%d---------", i+1);
                    printf("\n-Name:%s ", orderList[i].name);
                    printf("-Last Name:%s",orderList[i].lastname);
                    printf("-Number of small bottles:%d",orderList[i].smallbottles );
                    printf("\n-Number of big bottles:%d", orderList[i].bigbottles);
                }
    }
}
///Function to save the closed orders in a file
void saveclosed(void){
FILE *closedorders;
    closedorders = fopen("Closed.txt", "a+");

    int j;
    for(j = 0; j < lastClosed; j++)
    {
      fprintf(closedorders,"\n*Name:%s", orderList[j].name);
      fprintf(closedorders,"\n*Last Name:%s", orderList[j].lastname);
      fprintf(closedorders,"\n*No Of Small Bottles:%d", orderList[j].smallbottles);
      fprintf(closedorders,"\n*No Of Big Bottles:%d", orderList[j].bigbottles);
      fprintf(closedorders,"\n*Final cost:%d cents\n",orderList[j].cost);
      fprintf(closedorders,"-----------------------------------------------");
    }

    fclose(closedorders);
    printf("\nSave was successful!\n");
}
///Function to print closed orders from a txt file
void printclosed(void){
    FILE *printclosed;
    char d;
    printclosed = fopen("Closed.txt" , "r");
     if (printclosed == NULL)
        {
            printf("File is empty\n");
        }
    else
        {
         d = fgetc(printclosed);
        while (d != EOF)
            {
                printf ("%c", d);
                d=fgetc(printclosed);
            }

    }
fclose(printclosed);
}
///Function to show a customer's orders
void showcustomer(void){
    int i;
    for (i=0; i<=lastOrder; i++)
        {
            if (orderList[i].name==orderList[i++].name)
            {
                printf("Customer has multiple orders\n");
                printf("*No Of Small Bottles: %d\n" , orderList[i].smallbottles);
                printf("*No of Big Bottles: %d\n", orderList[i].bigbottles);
                printf("--------------------------\n");
                printf("*No Of Small Bottles: %d\n" , orderList[i-i++].smallbottles);
                printf("*No Of Big Bottles: %d\n" , orderList[i-i++].bigbottles);
            }
            else
            {
                printf("\nNo duplicates\n");
            }
        }
}
int main(){

    int userinput;
    struct order order;

    printf("\t \t * * * * M E N U * * * * \n");
    while(1){
       printf("\n1.INSERT ORDER\n");
       printf("2.CALCULATE ORDER COST (HANDLE ORDER)\n");
       printf("3.CALCULATE DISCOUNTS & FINAL COST (CLOSE ORDER)\n");
       printf("4.DISPLAY PENDING ORDERS\n");
       printf("5.SAVE PENDING ORDERS IN .TXT FILE\n");
       printf("6.LOAD PENDING ORDERS FROM .TXT FILE\n");
       printf("7.DISPLAY CLOSED ORDERS\n");
       printf("8.DISPLAY CUSTOMER'S ORDERS\n");
       printf("9.SAVE CLOSED ORDERS IN .TXT FILE\n");
       printf("10.LOAD CLOSED ORDERS FROM .TXT FILE\n");
       printf("0.EXIT\n");
       printf("----------------------------------------\n");
       printf("Enter your selection: ");
       scanf("%d", &userinput);

    switch(userinput){
    case 1:
        printf("Last Order=%d Last Handled=%d  Last Closed=%d\n", lastOrder,lastHandled,lastClosed);
        getorder();
        break;
    case 2:
        printf("Last Order=%d Last Handled=%d  Last Closed=%d\n", lastOrder,lastHandled,lastClosed);
        calculatecost();
        break;
    case 3:
        printf("Last Order=%d Last Handled=%d  Last Closed=%d\n", lastOrder,lastHandled,lastClosed);
        calculatefinal();
        break;
    case 4:
        displaypending();
        break;
    case 5:
        savepending();
        break;
   case 6:
        printpending(); //this prints every pending order
        break;          //that has been written in the file
   case 7:
        displayclosed(); //this here prints the handled orders only
        break;
   case 8:
        showcustomer();
        break;
   case 9:
        saveclosed();
        break;
   case 10:
        printclosed();
        break;
    case 0:
        printf("Exiting..."); //0 exits the program
        exit(0);
        break;
    default:
        printf("Command not found. Signing off ..."); //Invalid command
        exit(0);
        break;
            }
        }
return 0;
}

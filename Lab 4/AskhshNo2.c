#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
     ///variables
    char keimeno[1000]={0}; //we initialize the array with 0 so it can get every character the user types
	int wordlength[10]={0}; //used to measure each string's length
	int length=0,i=0,j=0; //counters to user later
	//"i" counter will scan the whole text , "j" counter has to do with the length of each word

	printf("Type some text here:");
	scanf("%[^\n]s",keimeno); //user input , we can take blank spaces as inputs as well

	///scaning the whole text the user entered
	while(1)
	{ /*whenever there's a blank space(meaning the user pressed the spacebar) we stop measuring the string's length
        and we set the counter to 0 again. We do so , because we want to move to the next string(word)
         and count the characters of it */
		if(keimeno[i]==' ' || keimeno[i]=='\0')
		{
			if(keimeno[i]=='\0')
			{
				if(length>0)           //if we are met with a blank space and
				{                       //the word length is not zero(meaning we reached the end of the word)
					wordlength[j++]=length; //we increase the length counter
					length=0;           // and then set it to zero and start over.
				}
				break; //terminate the loop and start over
			}
			wordlength[j++]=length; //if we are met with a blank space
			length=0;               //we set the counter to zero and repeat the process
		}
		else                //if there's no blank space
		{                  //we increase the counter to count the number of characters in the string
			length++;    //until we reach a blank space and start over the whole process
		}
		i++;
	}

/* here we initialize counters that will save the number of times words of same length showed up.
for example if there are words with 4 letters(characters) and they showed up multiple times (eg 7)
our counter will reach the frequency (here is 7) and print that many times the asterisk */
int lencount1=0 , lencount2=0, lencount3=0 , lencount4=0, lencount5=0;
int lencount6=0, lencount7=0, lencount8=0, lencount9=0;

///loop for word length and frequency of each length
	for(i=0;i<j;i++)
	{
	    switch (wordlength[i]){
        case 1:
            lencount1++;
            break;
        case 2:
            lencount2++;
            break;
        case 3:
            lencount3++;
            break;
        case 4:
           lencount4++;
            break;
        case 5:
           lencount5++;
            break;
        case 6:
           lencount6++;
            break;
        case 7:
            lencount7++;
            break;
        case 8:
            lencount8++;
            break;
        case 9:
            lencount9++;
            break;
                }
	}

	printf("\n");//Tried to match the exercise's output format example
	printf("   WORD LENGTH \t \t |NUMBER OF OCCURRENCES");
    //counters to print the asterisk as many times needed
    //each number is similar to the length count
    int c1, c2 , c3 , c4 , c5 , c6, c7 , c8 , c9;
	printf("\n\t1\t\t | ");
	for(c1=1;c1<=lencount1;c1++)
    {
       printf("%c" ,'*');
    }
    printf("\n\t2\t\t | ");
    for(c2=1;c2<=lencount2;c2++)
    {
        printf("%c" ,'*');
    }
    printf("\n\t3\t\t | ");
    for(c3=1;c3<=lencount3;c3++)
    {
       printf("%c" ,'*');
    }
    printf("\n\t4\t\t | ");
    for(c4=1;c4<=lencount4;c4++)
    {
        printf("%c" ,'*');
    }
    printf("\n\t5\t\t | ");
    for(c5=1;c5<=lencount5;c5++)
    {
       printf("%c" ,'*');
    }
    printf("\n\t6\t\t | ");
    for(c6=1;c6<=lencount6;c6++)
    {
        printf("%c" ,'*');
    }
    printf("\n\t7\t\t | ");
    for(c7=1;c7<=lencount7;c7++)
    {
       printf("%c" ,'*');
    }
    printf("\n\t8\t\t | ");
    for(c8=1;c8<=lencount8;c8++)
    {
        printf("%c" ,'*');
    }
    printf("\n\t9\t\t | ");
    for(c9=1;c9<=lencount9;c9++)
    {
        printf("%c" ,'*');
    }
return 0;
}

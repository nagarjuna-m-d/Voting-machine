#include <stdio.h>
#include<stdlib.h>
#include <windows.h>
#include <stdbool.h>

bool Unique(int id, int ids[], int length) {
    for(int i = 0; i < length; i++) {
        if(ids[i] == id) {
            return false;
        }
    }
    return true;
}
int nameandID(int ids[], int length,FILE *ptr) {

    int Id, age;

    printf("Enter the ID: ");
    scanf("%d", &Id);

    if (!Unique(Id, ids, length) || Id > 23) {

        printf("\t\t\t\t\t  NOT ELIGIBLE FOR VOTING\n");
        return 100;
    }

    printf("ENTER THE AGE: ");
    scanf("%d", &age);

    if (age < 18) {
        printf("\t\t\t\t\t  NOT ELIGIBLE FOR VOTING\n");
        return 100;
    }

    ids[length] = Id;
    if(Id == 1 && age >= 18) {
        fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : NAGARAJUN \n");
    }
    else if(Id == 2 && age >= 18) {
        fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : VINAY \n");
    }
     else if(Id == 3 && age >= 18) {
        fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : ACHINTYA \n");
    }
    else if(Id == 4 && age >= 18) {
             fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : VINAYAK \n");
    }
     else if(Id == 5 && age >= 18) {
          fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME :  \n");
    }
    else if(Id == 6 && age >= 18) {
         fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : \n");
    }
    else if(Id == 7 && age >= 18) {
         fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : \n");
    }
    else if(Id == 8 && age >= 18) {
         fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : \n");
    }
    else if(Id == 9 && age >= 18) {
         fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : \n");
    }
    else if(Id == 10 && age >= 18) {
         fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : \n");
    }
    else if(Id == 11 && age >= 18) {
         fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : \n");
    }
    else if(Id == 12 && age >= 18) {
         fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : \n");
    }
    else if(Id == 13 && age >= 18) {
         fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : \n");
    }
    else if(Id == 14 && age >= 18) {
         fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : \n");
    }
    else if(Id == 15 && age >= 18) {
         fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : \n");
    }
    else if(Id == 16 && age >= 18) {
         fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : \n");
    }
    else if(Id == 17 && age >= 18) {
         fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : \n");
    }
    else if(Id == 18 && age >= 18) {
         fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : \n");
    }
    else if(Id == 19 && age >= 18) {
         fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : \n");
    }
    else if(Id == 20 && age >= 18) {
         fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : \n");
    }
    else if(Id == 21 && age >= 18) {
         fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : \n");
    }
    else if(Id == 22 && age >= 18) {
         fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : \n");
    }
    else if(Id == 23 && age >= 18) {
         fprintf(ptr, "ID: %d NAME: \n", Id);
        printf("NAME : \n");
    }
    else {
        printf("\t\t\t\t\t  NOT ELIGIBLE FOR VOTING\n");
        return 1;
    }
}
int main()
{
    int DARSHAN = 0, NAGARJUN = 0,  VINAY = 0,ACHINTYA=0,none=0, total_vote, i, choice;
    int ids[23] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
    int len = 0;

   FILE *ptr;
    ptr = fopen("Acharya.txt","a");
    if(ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
        printf("\t\t\t\t\t*************\n");
        printf("\t\t\t\t\t\t| VOTING MACHINE |\n");
        printf("\t\t\t\t\t*************\n");

     while (len < 2) {
        printf("*************\n");

        if (nameandID(ids, len,ptr) == 100) {
            continue;
        }

        len++;

        printf("\t\t\t\t\t|----------------------------|\n");
        printf("\t\t\t\t\t|Welcome to the voting system|\n");
        printf("\t\t\t\t\t|----------------------------|\n");
        printf("\t\t\t\t\t|Enter 1 to vote for DARSHAN |\n");
        printf("\t\t\t\t\t|Enter 2 to vote for NAGARJUN|\n");
        printf("\t\t\t\t\t|Enter 3 to vote for VINAY   |\n");
        printf("\t\t\t\t\t|Enter 4 to vote for ACHINTYA|\n");
        printf("\t\t\t\t\t|Enter 5 to vote for NOTA    |\n");
        printf("\t\t\t\t\t|----------------------------|\n");

        printf("YOUR CHOICE IS: ");
        scanf("%d", &choice);
       fprintf(ptr, "VOTE: %d\n", choice);

        if (choice == 1)
        {
            DARSHAN++;
        }
        else if (choice == 2)
        {
            NAGARJUN++;
        }
        else if (choice == 3)
        {
            VINAY++;
        }
        else if (choice == 4)
        {
            ACHINTYA++;
        }
        else if (choice == 5)
        {
            none++;
        }
        else
        {
            printf("Invalid vote\n");
        }

    }
    printf("\t\t\t\t\t*************\n");
    printf("\t\t\t\t\t      Result of the vote\n");
     printf("\t\t\t\t\t*************\n");
    printf("\t\t\t\t\t      DARSHAN got %d vote\n", DARSHAN);
       printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t      NAGARJUN got %d vote\n", NAGARJUN);
       printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t      VINAY got %d vote\n", VINAY);
       printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t      ACHINTYA got %d vote\n", ACHINTYA);
       printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t      NOTA got %d vote\n", none);
       printf("\t\t\t\t\t----------------------------\n\n\n");

    if (DARSHAN > NAGARJUN && DARSHAN > VINAY && DARSHAN > ACHINTYA && DARSHAN > none)
    {
        printf("\t\t\t\t\t-------------------------------\n");
        printf("\t\t\t\t\t**DARSHAN wins the ELECTION**\n");
        printf("\t\t\t\t\t-------------------------------\n");
    }
    else if (NAGARJUN > DARSHAN && NAGARJUN > VINAY && NAGARJUN > ACHINTYA && NAGARJUN > none)
    {
        printf("\t\t\t\t\t-------------------------------\n");
        printf("\t\t\t\t\t**NAGARJUN win the Election**\n");
        printf("\t\t\t\t\t-------------------------------\n");
    }
    else if (VINAY > DARSHAN && VINAY > NAGARJUN && VINAY > ACHINTYA && VINAY > none)
    {
        printf("\t\t\t\t\t----------------------------\n");
        printf("\t\t\t\t\t**VINAY win the Election**\n");
        printf("\t\t\t\t\t----------------------------\n");
    }
    else if (ACHINTYA > DARSHAN && ACHINTYA > NAGARJUN && ACHINTYA > VINAY && ACHINTYA > none)
    {
        printf("\t\t\t\t\t-------------------------------\n");
        printf("\t\t\t\t\t**ACHINTYA win the Election**\n");
        printf("\t\t\t\t\t-------------------------------\n");
    }
    else if (none > DARSHAN && none > NAGARJUN && none > VINAY && ACHINTYA < none)
    {
        printf("\t\t\t\t\t----------------------------\n");
        printf("\t\t\t\t\t**        NOTA          **\n");
        printf("\t\t\t\t\t----------------------------\n");
    }
     else if (VINAY == ACHINTYA == DARSHAN == NAGARJUN)
    {
        printf("\t\t\t\t\t-------------------------------------\n");
        printf("\t\t\t\t\t EVERYBODY GOT SAME NUMBER OF VOTE\n");
        printf("\t\t\t\t\t-------------------------------------\n");
        return;
    }
    else if (DARSHAN == NAGARJUN )
    {
        printf("\t\t\t\t\t---------------------------------\n");
        printf("\t\t\t\t\tTIE BETWEEN DARSHAN AND NAGARJUN\n");
        printf("\t\t\t\t\t--------------------------------\n");
    }
    else if (DARSHAN == VINAY )
    {
        printf("\t\t\t\t\t-------------------------------\n");
        printf("\t\t\t\t\tTIE BETWEEN DARSHAN AND VINAY\n");
        printf("\t\t\t\t\t--------------------------------\n");
    }
    else if (DARSHAN == ACHINTYA )
    {
        printf("\t\t\t\t\t--------------------------------\n");
        printf("\t\t\t\t\tTIE BETWEEN DARSHAN AND ACHINTYA\n");
        printf("\t\t\t\t\t-------------------------------\n");
    }
    else if (NAGARJUN == VINAY )
    {
        printf("\t\t\t\t\t-------------------------------\n");
        printf("\t\t\t\t\tTIE BETWEEN NAGARJUN AND VINAY\n");
        printf("\t\t\t\t\t--------------------------------\n");

    }
    else if (NAGARJUN == ACHINTYA )
    {
        printf("\t\t\t\t\t---------------------------------\n");
        printf("\t\t\t\t\tTIE BETWEEN NAGARJUN AND ACHINTYA\n");
        printf("\t\t\t\t\t---------------------------------\n");
    }
    else if (VINAY == ACHINTYA )
    {
        printf("\t\t\t\t\t------------------------------\n");
        printf("\t\t\t\t\tTIE BETWEEN VINAY AND ACHINTYA\n");
        printf("\t\t\t\t\t------------------------------\n");
    }
    else if(none == ACHINTYA)
    {
        printf("bend");
    }
    else
    {
        printf("\t\t\t\t\t------------------------------\n");
        printf("\t\t\t\t\t    The vote result is TIE\n");
        printf("\t\t\t\t\t------------------------------\n");
    }
    return 0;
}
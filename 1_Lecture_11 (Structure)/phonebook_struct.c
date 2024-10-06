#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct phone_card {
  char First_Name[10];
  char Last_Name[10];
  char Phone_Num[11];
};

int main() {

  int Choice = 0;
  struct phone_card Phone_Book[100];
  short unsigned int Count = 0;
  char Breack = 'n';
  char Search_Name[10] = {0};
  char Search_Num[11] = {0};

  while(Choice != 5) {

    //Clean the screen
    system("clear");

    //Printing the menu point's
    printf("-= MENU =-\n");
    printf("1. ADD    the subscriber\n");
    printf("2. SHOW   all subscriber\n");
    printf("3. SEARCH the subscriber\n");
    printf("4. DELETE the subscriber\n");
    printf("5. EXIT\n");

    //Take a users' choice with checking
    //!!!Need a test to char
    if(scanf("%d", &Choice) > 1 || Choice <= 0 || Choice > 5) {
      printf("Incorrect input\n");
    } else {

      //General menu to work with users' choice
      switch(Choice) {

        //First point of main menu

        case 1:
          system("clear");
          Choice = 0;

          printf("Put the first name of subscriber\n");
          scanf("%s", Phone_Book[Count].First_Name);
          printf("Put the last name of subscriber\n");
          scanf("%s", Phone_Book[Count].Last_Name);
          printf("Put the phone number of subscriber\n");
          scanf("%s", Phone_Book[Count].Phone_Num);
          Count++;

          printf("\nPush the 'y' button to go to the main menu\n");          
          while(Breack != 'y') {
            scanf("%c", &Breack);
          }
          Breack = 'n';
          break;

        //Second point of main menu

        case 2:
          system("clear");
          Choice = 0;

          if(Count == 0) {
            printf("Have no card in the phonebook\n\n");
          } else {
            //Printing all card from telephone book
            for(int index = 0; index < Count; index++) {
              Choice++;
              printf("First name:  %s\n", Phone_Book[index].First_Name);
              printf("Last name:   %s\n", Phone_Book[index].Last_Name);
              printf("Phone number %s\n\n", Phone_Book[index].Phone_Num);
            }
            if(Choice == 0) {
              printf("Have no subscriber with this first name\n");
            }
          }
          printf("\nPush the 'y' button to go to the main menu\n");          
          while(Breack != 'y') {
            scanf("%c", &Breack);
          }
          Choice = 0;
          Breack = 'n';
          break;

        //Third point of main menu

        case 3:

          system("clear");
          Choice = 0;

          if(Count == 0) {
            printf("Have no card for search\n");
          } else {
            printf("1. Search by first name of subscriber\n");
            printf("2. Search by phone number of subscriber\n");

            //Take users' choice of searching type
            while(scanf("%d", &Choice) > 1 || Choice < 1 || Choice > 2) {
              printf("Incorrect input\n");
            }

            //Searching by first name
            if(Choice == 1) {
              Choice = 0;
              system("clear");
              //Take a searching name
              printf("Input first name of searching subscriber\n");
              scanf("%s", Search_Name);
              printf("\n");

              //Searching a subscriber by first name
              for(int index = 0; index < Count; index++) {
                if(strcmp(Search_Name, Phone_Book[index].First_Name) == 0) {
                  Choice++;
                  printf("First name:  %s\n", Phone_Book[index].First_Name);
                  printf("Last name:   %s\n", Phone_Book[index].Last_Name);
                  printf("Phone number %s\n\n", Phone_Book[index].Phone_Num);
                }
              }
              if(Choice == 0) {
                printf("Have no one subscriber with this first name\n");
              }
            } else if(Choice == 2) {
              Choice = 0;
              system("clear");
              //Take a searching number
              printf("Input phone number of searching subscriber\n");
              scanf("%s", Search_Num);
              printf("\n");

              //Searching a subscriber by phone number
              for(int index = 0; index < Count; index++) {
                if(strcmp(Search_Num, Phone_Book[index].Phone_Num) == 0) {
                  Choice++;
                  printf("First name:  %s\n", Phone_Book[index].First_Name);
                  printf("Last name:   %s\n", Phone_Book[index].Last_Name);
                  printf("Phone number %s\n\n", Phone_Book[index].Phone_Num);
                }
              }
              if(Choice == 0) {
                printf("Have no one subscriber with this phone number\n");
              }
            }
          }
          printf("\nPush the 'y' button to go to the main menu\n");          
          while(Breack != 'y') {
            scanf("%c", &Breack);
          }
          Choice = 0;
          Breack = 'n';
          break;

        //Fourth point of main menu

        case 4:
          printf("4\n");
          break;
        case 5:
          break;

      }//Switch
    }//IF - test of input in main menu
  }//Wile not exit(ciircle)

  system("clear");

  return 0;
}

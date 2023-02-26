#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
int account_number, pin, chk_acc_bal, sav_acc_bal,generate;
char choice = 'y' ;
void validate_acc()
{
     int user_acc_try, i = 0;
     int user_has_not_entered_right_acc = 1;
     int retries = 3;
     while(retries > 0 && user_has_not_entered_right_acc == 1)
	 {
                   printf("\nPlease enter your account number: ");
                   scanf("%d", &user_acc_try);
                   if(user_acc_try != account_number)
				   {
                    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
					printf("\nYou entered the wrong account number\n");
                    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
					retries--;
                   }
                   else
				   {
                   user_has_not_entered_right_acc = 0;
                   }
     }
}
void validate_pin()
{
     int user_pin_try, i=0;
     int user_has_not_entered_right_pin = 1;
     int retries = 3;
     while(retries > 0 && user_has_not_entered_right_pin == 1)
	 {
                   printf("Please enter your pin number: ");
                   scanf("%d", &user_pin_try);
                   if(user_pin_try != pin)
				   {
                    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
					printf("\nYou entered the wrong pin number.\n");
                    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
					retries--;
                   }
                   else
				   {
                   user_has_not_entered_right_pin = 0;
                   }
     }
                   if(retries = 0)
				   {
                    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
					printf("\nYou have reached maximum tries.");
                    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
				   }
}
void PIN_generate()
{
int generate_PIN;
printf("\n**************************************");
    printf("\nEnter your four digit pin: ");
	scanf("%d", &generate_PIN);
	printf("\n*********************************");
	printf("\nYour generated PIN is %d\n",&generate_PIN);
	printf("\nYour PIN was generated sucessfully");
	printf("\n*********************************");
	system("cls");
}
void validate()
{
     validate_acc();
     validate_pin();
}
void Deposit_Cash_Chk()
{
    int deposit_chk;
    printf("\n***************************************************************");
    printf("\nHow Much would you like to deposit into your checking account?: \n");
    scanf("%d", &deposit_chk);
    chk_acc_bal += deposit_chk;
    printf("\nYour new checking account balance is $%d\n", chk_acc_bal);
    printf("\n***************************************************************");
    printf("\nWould you like to make another transaction?\n");
    printf("\n y / n ? \n");
    scanf(" %c", &choice);
    system("cls");
}
void Deposit_Cash_sav()
{
     int deposit_sav;
     printf("\n***************************************************************");
	 printf("\nHow much would you like to deposit in your saving account?: \n");
     scanf("%d", &deposit_sav);
     sav_acc_bal += deposit_sav;
     printf("\nYour saving account balance is now $%d", sav_acc_bal);
     printf("\n***************************************************************");
     printf("\nWould you like to make another transaction?\n");
     printf("\n y / n ? \n");
     scanf(" %c", &choice);
     system("cls");
}
void Withdraw_Cash_Chk()
{
     int withdraw_chk;
     printf("\n***************************************************************");
	 printf("\nHow much would you like to withdraw from you checking account?: ");
     scanf("%d", &withdraw_chk);
     chk_acc_bal -= withdraw_chk;
     printf("\nYour new checking account balance $%d", chk_acc_bal);
     printf("\n***************************************************************");
     printf("\nWould you like to make another transaction?\n");
     printf("\n y / n ? \n");
     scanf(" %c", &choice);
     system("cls");
}
void Withdraw_Cash_Sav()
{
     int withdraw_sav;
     printf("\n***************************************************************");
	 printf("\nHow much would you like to withdrawn from your saving account?: ");
     scanf("%d", &withdraw_sav);
     sav_acc_bal -= withdraw_sav;
     printf("\nYour new saving account balance $%d", sav_acc_bal);
     printf("\n***************************************************************");
     printf("\nWould you like to make another transaction?\n");
     printf("\n y / n ? \n");
     scanf(" %c", &choice);
     system("cls");
}
void query_account()
{
     char q_answer[50];
     printf("Which account would you like to access?: ");
     scanf("%s", &q_answer);
     if(strcmp(q_answer, "checking") == 0)
	 {
     	         printf("\n****************************************************");
                 printf("\nYour account balance for your checking account is $%d", chk_acc_bal);
                 printf("\nWould you like to make another transaction?\n");
                 printf("\n y / n ? \n");
                 scanf(" %c", &choice);
                 printf("\n****************************************************");
     }
     else if(strcmp(q_answer, "saving") == 0)
	 {
     	  printf("\n****************************************************");
          printf("\nYour account balance for your saving account is $%d", sav_acc_bal);
          printf("\nWould you like to make another transaction?\n");
          printf("\n y / n ? \n");
          scanf(" %c", &choice);
          printf("\n****************************************************");
     }
     else
	      {
     	  printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
          printf("\nyou may have entered something incorrectly. Try again");
          printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
          }
          system("cls");
}
void login()
{
	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="india 1";
    char pass[10]="india 1 atm";
    do
{
    printf("\n  ++++++++++++++++++++++++++++++ MACHINE INTERNAL LOGIN PAGE  ++++++++++++++++++++++++++++++ ");
    printf("\n\n .............................ENTER USERNAME:-");
	scanf("%s", &uname);
	printf("\n\n .............................ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	printf("\n  ++++++++++++++++++++++++++++++  ***************************  ++++++++++++++++++++++++++++++  ");

	pword[i]='\0';
	i=0;
		if(strcmp(uname,".")==0 && strcmp(pword,".")==0)
	{
	printf("\n         ;)           WELCOME TO machine internal login page !!!!");
	printf("\n         ;)               LOGIN IS SUCCESSFUL");
	printf("\n\tPress any button in the keyboard to continue booking...");
	getch();
	break;
	}
	else
	{
		printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
		printf("\n ;)     Sorry ur input was wrong        !!!!");
		printf("\n :)       LOGIN IS UNSUCESSFUL           !!!");
		printf("\n ;)            plz try again ;)          !!!");
		printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
		a++;

		getch();
	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
		printf("\nSorry your have entered the wrong input in username and password for four times!!!");
		printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
		exit(0);
	}
		system("cls");
}
void money_added()
{
	int money;
	printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
	printf("\nHow much money added to this machine: ");
	scanf("%d",&money_added);
	printf("\nTotal amount in this machine= %d ",money_added);
	printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
	system("cls");
}
void transfer_funds()
{
     char transfer[50];
     int transfer_amt;
     printf("\nWhich account which would you like to transfer from?: checking or saving ");
     scanf("%s", &transfer);
     if(strcmp(transfer, "checking") == 0)
	 {
                 printf("\n***************************************************************");
				 printf("\nHow much would you like to transfer from your checking?: ");
                 scanf("%d",&transfer_amt);
                 chk_acc_bal -= transfer_amt;
                 sav_acc_bal += transfer_amt;
                 printf("\nYou have successfully transfered %d from your checking to your saving account", transfer_amt);
                 printf("\n****************************************************************************");
                 printf("\nWould you like to make another transaction?\n");
                 printf("\n y / n ? \n");
                 scanf(" %c", &choice);
     }
     else if(strcmp(transfer, "saving") == 0)
	 {
     	  printf("\n****************************************************************************");
          printf("\nHow much would you like to transfer from your saving?: ");
          scanf("%d",&transfer_amt);
          sav_acc_bal -= transfer_amt;
          chk_acc_bal += transfer_amt;
          printf("\nYou have successfully transfered %d from your saving to your checking account", transfer_amt);
          printf("\n****************************************************************************");
          printf("\nWould you like to make another transaction?\n");
          printf("\n y / n ? \n");
          scanf(" %c", &choice);
     }
     else
	      {
     	  printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
          printf("\nyou may have entered something incorrectly. Try again");
          printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
          }
          system("cls");
}
int main(void)
{
     srand(time(NULL));
     while (account_number < 11111 || pin < 1111 )
	 {
     account_number = rand() % 99999;
     pin = rand() % 9999;
     }
     chk_acc_bal = rand() % 99999;
     sav_acc_bal = rand() % 99999;
     int action_num;
     char withdraw_acc[10],checking_acc[10];
     while(choice == 'y')
	 {
	 printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
	 printf("\nPlease write down these numbers!\n Your account number is %d\n Your pin number is %d\n",account_number, pin);
	 printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
	 printf("\n***************************************************");
     printf("\n");
     printf("\nWelcome to indian 1 ATM\n");
     printf("How can we help you with today?\n");
	 printf("Type the number corresponding with your action.\n"); 
	 printf("1. Withdraw\n");
	 printf("2. Deposit\n");
	 printf("3. Transfer\n");
	 printf("4. Query Account\n"); 
	 printf("5. PIN Generation\n");
	 printf("6. Total money add to this machine\n");
	 printf("7. clear screen\n");
	 printf("8. exit\n");
	 printf("\n****************************************************");
     printf("\nEnter your Number here: ");
     scanf("%d", &action_num);
     switch(action_num)
	 {
                        case 1:
                             validate();
                             printf("\nWhich account would you like to withdraw from? checking or saving ");
                             scanf("%s", &withdraw_acc);
                             if(strcmp(withdraw_acc, "checking") == 0){
                                             Withdraw_Cash_Chk();
                                             }
                             else if(strcmp(withdraw_acc, "saving") == 0){
                                  Withdraw_Cash_Sav();
                                  }
                             else{
                                  printf("That is not an account name.");
                                  }
                             break;

                        case 2:
                             validate();
                             printf("Which account would you like to deposit to? checking or saving ");
                             scanf("%s", &checking_acc);
                             if(strcmp(checking_acc, "checking") == 0){
                                             Deposit_Cash_Chk();
                                             }
                             else if(strcmp(checking_acc, "saving") == 0){
                                  Deposit_Cash_sav();
                                  }
                             else{
                                  printf("the account name you entered is incorrect.");
                                  scanf("%d");
                                  }
                             break;
                        case 3:
                             validate();
                             transfer_funds();
							 break;
                        case 4:
                             validate();
                             query_account();
							 break;
						case 5:
							 PIN_generate();
							 break;
						case 6:
						      login();
							  money_added();
							  break;
					    case 7:
						      system("cls");
							  break;
						case 8:
						      system("cls");
							  printf("!!Please remove your card!!");
							  exit (0);   
     }
    }
    return 0;
}
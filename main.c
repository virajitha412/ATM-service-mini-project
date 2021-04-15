#include <stdio.h>
unsigned long amount=1000,deposit;
int choice;
void main()
{
            int count=0,t,pin=1234,i,s,k=1,f,n,withdraw;
                printf("Select language\n");
                printf("\t1.English\n");
                printf("\t2.Hindi\n");
                printf("\t3.Telugu\n");
                scanf("%d",&f);
                switch(f){
                    case 1:
                        printf("English\n");
                        break;
                    case 2:
                        printf("Hindi\n");
                        break;
                    case 3:
                        printf("Telugu\n");
                        break;
                    default:
                        printf("English\n");
                }
                printf("Enter your secret pin number: ");
                scanf("%d",&n);
                if(pin!=n){
                    printf("Enter valid pin number\n");
                    while(pin!=n){
                        printf("Please enter correct pin number: ");
                        scanf("%d",&n);
                        count++;
                        if(count == 3)
                    {
                        printf("\n you attempted your pin more than three times please re insert your card and try again\n");

                    }
                    }
                }
                printf("\n********* Welcome to ATM service******\n");
                printf("\t1.Check balance\n");
                printf("\t2.Withdraw cash\n");
                printf("\t3.Deposit cash\n");
                printf("\t4.change pin number\n");
                printf("\t5.Quit\n");
                printf("\n************************\n");
                printf("Enter your choice: ");
                scanf("%d",&choice);
                switch(choice)
                {
                    case 1:
                        printf("\nYOUR BALANCE IS = %lu",amount);
                        printf("\nThanks for using ATM services");
                        break;
                    case 2:
                        printf("\nENTER THE AMOUNT TO WITHDRAW: ");
                        scanf("%d",&withdraw);
                        if(((withdraw % 100)==0) || ((withdraw % 500) ==0))
                            {
                                if(withdraw > (amount-500))
                                    {
                                        printf("\nINSUFFICIENT BALANCE");
                                    }
                                    else
                                    {
                                        amount=amount-withdraw;
                                        printf("\nPLEASE COLLECT YOUR CASH");
                                        printf("\nYOUR CURRENT BALANCE IS %lu",amount);
                                    }
                            }
                        else{
                             printf("\nPLEASE ENTER THE AMOUNT IN MULTIPLE OF 100 or 500: ");
                                scanf("%d",&withdraw);
                                if(withdraw > (amount-500))
                                    {
                                        printf("\nINSUFFICIENT BALANCE");
                                    }
                                    else
                                    {
                                        amount=amount-withdraw;
                                        printf("\nPLEASE COLLECT YOUR CASH");
                                        printf("\nYOUR CURRENT BALANCE IS %lu",amount);
                                    }
                        }
                        break;
                        printf("Thanks for using ATM services\n");
                    case 3:
                        printf("\nENTER THE AMOUNT TO DEPOSIT= ");
                        scanf("%lu",&deposit);
                        amount=amount+deposit;
                        printf("\nYOUR BALANCE = %lu",amount);
                        printf("\nThanks for using ATM services");
                        break;
                    case 4:
                        printf("Enter old pin number: ");
                        scanf("%d",&t);
                        while(k!=0){
                        if(pin == t){
                            printf("set your new pin number: ");
                            scanf("%d",&s);
                            printf("Your new pin has been reset successfully\n");
                            pin==s;
                            k=0;
                        }
                        else{
                            printf("Please enter correct old pin number: ");
                            scanf("%d",&t);
                            k=1;
                        }
                        }
                        printf("Thanks for using ATM services\n");
                        break;
                    case 5:
                        printf("\nTHANK YOU FOR USING ATM\n");
                        break;        
                    default:
                        printf("Invalid Choice\n");
                    
                }
        }

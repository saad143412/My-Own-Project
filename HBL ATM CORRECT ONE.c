/*
 * C Program to Display the ATM Transaction
 */
#include <stdio.h>
 
unsigned long amount=5000, deposit, withdraw,transfer;
int choice, pin,username,k;
char transaction ='y';
 
void main()
{
	printf("##################################################################################\n");
	printf("##################\t\t\t\t\t\t##################\n");
	printf("##################        HBL BANK JAHAN KHWAB,WAHAN HBL        ##################\n");
	printf("##################\t\t\t\t\t\t##################\n");
	printf("##################################################################################\n");
	
	while (pin != 163)
	{
		printf("\nENTER YOUR SECRET PIN NUMBER:");
		scanf("%d", &pin);
		if (pin != 163)
		printf("PLEASE ENTER VALID PASSWORD\n");
		printf("*************Hi! Saad How Can I help You!!!*************\n");
	}
	do
	{
		printf("********Welcome to HBL BANK ATM Service**************\n");
		printf("1. Check Balance\n");
		printf("2. Withdraw Cash\n");
		printf("3. Deposit Cash\n");
		printf("4. Transfer Cash\n");
		printf("5. Quit\n");
		printf("==================================================================================\n\n");
		printf("Please Enter your choice of transaction: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\n          YOUR BALANCE IN Rs : %lu \n", amount);
			break;
		case 2:
			printf("\n          ENTER THE AMOUNT TO WITHDRAW: ");
			scanf("%lu", &withdraw);
			if (withdraw % 100 != 0)
			{
				printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
			}
			else if (withdraw >(amount - 500))
			{
				printf("\n          INSUFFICENT BALANCE");
			}
			else
			{
				amount = amount - withdraw;
				printf("\n\n***************PLEASE COLLECT YOUR CASH ***************");
				printf("\n          YOUR CURRENT BALANCE IS: %lu", amount);
				printf("\n          Withdraw successful\n");
			}
			break;
		case 3:
			printf("\n          ENTER THE AMOUNT TO DEPOSIT:");
			scanf("%lu", &deposit);
                        amount = amount + deposit;
			printf("          YOUR BALANCE IS %lu", amount);
			break;
		case 4:
			printf("\n          Please Enter the account number of the other party:");
	        scanf("%d",&username);
	        if(transfer=12)
			{
			    printf("\n          WELCOME TO Khizar ACCOUNT\n");
			}
			printf("\n          ENTER THE AMOUNT TO TRANSFER: ");
			scanf("%lu", &transfer);
			if (transfer % 100 != 0)
			{
				printf("\nPLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
			}
			else if (transfer >(amount - 500))
			{
				printf("\n          INSUFFICENT BALANCE");
			}
			else
			{
				amount = amount - transfer;
				printf("\n          YOUR CURRENT BALANCE IS: %lu", amount);
				printf("\n          Transfer successful\n");
			}
			break;
		case 5:
			printf("\n-=-=-=-=-=-=-=-=-=THANK YOU FOR USING ATM=-=-=-=-=-=-=-=-=-");
			break;
		default:
			printf("\n INVALID CHOICE");
		}
		printf("\n=================================================================================\n");
		printf("\n\n DO YOU WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");  // N or n is for NO
		fflush(stdin);                                                    //Y OR y is for YES
		scanf("%c", &transaction);
		if (transaction == 'n'|| transaction == 'N')
                    k = 1;
	} while (!k);
	printf("--------------Take your receipt!!!------------------");
	printf("\n\n======================THANKS FOR USING OUT ATM SERVICE OF HBL BANK====================");
	printf("\n          Programmer Name:Muhammad Saad\n\t\tTALK IS CHEAP,SHOW ME THE CODE.BY LINUS TORVALDS\n");
	printf("````````````````````````HAPPY CODING````````````````````````");
}

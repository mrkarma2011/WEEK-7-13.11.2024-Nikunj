#include <stdio.h>
struct customer
 {
    int account_number;
    char name[50];
    int balance;
 };

int transaction(int acc_no, int request, int amount, struct customer bank[10])
{
    int index;
    for(int i=0; i<1; i++){
        if(acc_no == bank[i].account_number)
        {   index = i; 
            break;
        }
    }
    if(request){
    if(amount > bank[index].balance)
    return 0;
    
    else
    {
        bank[index].balance -= amount;
        printf("Your remaining balance is: %d\n", bank[index].balance);
        return 1;
    }
    }

    else
    {
        bank[index].balance += amount;
        printf("Your new balance is: %d\n", bank[index].balance);
        return 1;
    }
}


int main() {
 struct customer bank[10];
 
 for(int i=0; i<1; i++)
 {
    printf("Enter acc number %d: ", i+1);
    scanf("%d", &bank[i].account_number);
    
    //printf("enter name %d : ", i+1);
    //fgets(bank[i].name, sizeof(bank[i].name), stdin);
    
    printf("Enter balance %d: ", i+1);
    scanf("%d", &bank[i].balance);
 }
int acc_no, request, amount;
printf("Enter your account number: "); scanf("%d", &acc_no);


printf("What would you like to do :    Deposit(0)    Withdraw(1)  "); scanf("%d", &request);


printf("Enter amount in Rs: "); scanf("%d", &amount);

switch(transaction(acc_no, request, amount, bank))
{
case 0: {
        printf("Transaction failed"); 
        break;
        }
case 1: {
        printf("Transaction successful");
        }

}
    
    return 0;
}
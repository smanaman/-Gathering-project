/*Questions:
Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.
For example,
Output:
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Addition of 5 and 3 is 8

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 4
Enter the first number: 10
Enter the second number: 5
Division of 10 and 5 is 2

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 0
*/

// Online C compiler to run C program online
#include <stdio.h>

int sum(int a, int b) {
    int ans=a+b;
    return ans;
}

int sub(int a, int b) {
    int ans=a-b;
    return ans;
}

int multi(int a, int b) {
    int ans=a*b;
    return ans;
}

float divi(int a, int b) {
    int ans=a/b;
    return ans;
}

int mol(int a, int b) {
    int ans=a%b;
    return ans;
}

int main() {
    
    int n;
    int a, b;
    
    restart :
    
    printf("\n\nPress 1 for + \n");
    printf("Press 2 for - \n");
    printf("Press 3 for * \n");
    printf("Press 4 for / \n");
    printf("Press 5 for %% \n");
    printf("Press 0 for the exit. .\n");
    printf("\nEnter your choice :- ");
    scanf("%d", &n);
    
    switch(n) {
        case 1 : printf("Enter the first number :- ");
                 scanf("%d", &a);
                 printf("Enter the second number :- ");
                 scanf("%d", &b);
                 printf("Addition of %d and %d is = %d", a, b, sum(a, b));
                break;
        case 2 : printf("Enter the first number :- ");
                 scanf("%d", &a);
                 printf("Enter the second number :- ");
                 scanf("%d", &b);
                 printf("Subtraction of %d and %d is = %d", a, b, sub(a, b));
                break;
        case 3 : printf("Enter the first number :- ");
                 scanf("%d", &a);
                 printf("Enter the second number :- ");
                 scanf("%d", &b);
                 printf("Mulitiplication of %d and %d is = %d", a, b, multi(a, b));
                break;
        case 4 : reenter:
                 printf("Enter the first number :- ");
                 scanf("%d", &a);
                 printf("Enter the second number :- ");
                 scanf("%d", &b);
                 if(a>b) {
                        if(b!=0) {
                            if(a!=0) {
                                printf("Division of %d and %d is = %.2f", a, b, divi(a, b));
                            }
                            else {
                                printf("\nNOTE :- \n");
                     printf("\t1. The value of first number must be larger then the second number.\n");
                     printf("\t2. Both value must be larger then 0\n\n");
                     goto reenter;
                            }
                        }
                        else {
                            printf("\nNOTE :- \n");
                     printf("\t1. The value of first number must be larger then the second number.\n");
                     printf("\t2. Both value must be larger then 0\n\n");
                     goto reenter;
                        }
                 }
                 else {
                     printf("\nNOTE :- \n");
                     printf("\t1. The value of first number must be larger then the second number.\n");
                     printf("\t2. Both value must be larger then 0\n\n");
                     goto reenter;
                 }
                break;
        case 5 : reenter_two:
                 printf("Enter the first number :- ");
                 scanf("%d", &a);
                 printf("Enter the second number :- ");
                 scanf("%d", &b);
                 if(a>b) {
                        if(b!=0) {
                            if(a!=0) {
                                printf("Division of %d and %d is = %d", a, b, mol(a, b));
                            }
                            else {
                                printf("\nNOTE :- \n");
                     printf("\t1. The value of first number must be larger then the second number.\n");
                     printf("\t2. Both value must be larger then 0\n\n");
                     goto reenter;
                            }
                        }
                        else {
                            printf("\nNOTE :- \n");
                     printf("\t1. The value of first number must be larger then the second number.\n");
                     printf("\t2. Both value must be larger then 0\n\n");
                     goto reenter;
                        }
                 }
                 else {
                     printf("\nNOTE :- \n");
                     printf("\t1. The value of first number must be larger then the second number.\n");
                     printf("\t2. Both value must be larger then 0\n\n");
                     goto reenter_two;
                 }
                break;
        case 0 : goto end;
    }
    
    goto restart;
    
    end:
    
    
    printf("\nThank you.");

}

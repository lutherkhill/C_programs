/**************************/
/* Luther K. Hill */
/* Assignment 1 */
/*************************/

#include <stdio.h>
#include <ctype.h>

int main(void)
{

    /*Chapter 1: Challenge 5*/
    /*My favorite quote is from Audre Lorde*/
    printf("\t\"When I dare to be powerful - to use my strength in the service of my vision, \n\t then it becomes less and less important whether I am afraid.\" -Aundre Lorde\n");

    /*Chapter 1: challenge 8
    /*Print the Calendar for May 2019*/
    printf("\n\t\tMay 2019\n");
    printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
    printf("\t\t\t1\t2\t3\t4\n");
    printf("5\t6\t7\t8\t9\t10\t11\n");
    printf("12\t13\t14\t15\t16\t17\t18\n");
    printf("19\t20\t21\t22\t23\t24\t25\n");
    printf("26\t27\t28\t29\t30\t31\n");

    /*Chapter 2 & 3 */
    /*Challenge 2, 4, & 5 */

    int a, b, x, y, f;
    printf("This program outputs the formula \"f=\(a-b\)(x-y)\"\n");
    printf("\nEnter the value for x: \n");
    scanf("%d", &x);
    printf("Enter the value for b\n");
    scanf("%d", &b);
    printf("Enter the value for a\n");
    scanf("%d", &a);
    printf("Enter the value for y\n");
    scanf("%d", &y);
    f=(a-b)*(x-y);
    printf("The solution is: %d\n", f);


    /*Challenge 4 of chapter 2*/
    /*This program creates a shop revenue program*/

    int total_revenue, price, quantity;
    printf("\nThis program helps shops calculate their revenue");
    printf("\nEnter the price: \n");
    scanf("%d", &price);
    printf("Enter the quantity\n");
    scanf("%d", &quantity);
    total_revenue= price * quantity;
    printf("The total revenue is: $%d\n", total_revenue);


    /* Challenge 5 chapter 2*/
    /* Builds a shop commission program that prompts a user for the data and determines the commission for a merchant*/

    int sales_price, cost;
    float rate, commission;

    printf("\nThis will help you calculate your commission");
    printf("\nEnter the sales price: \n");
    scanf("%d", &sales_price);
    printf("Enter the cost: \n");
    scanf("%d", &cost);
    printf("Enter the commission rate: \n");
    scanf("%f", &rate);
    commission = rate * (sales_price - cost);
    printf("The commission will be: $%.2f\n", commission);


    /*Challenge 1 of chapter 3 */
    /* Build a random number guessing game that uses input validation (isdigit())*/
    /*function to verify that the user has entered a digit and not a non digit */
    int rand_num;
    char response;
    srand(1-10);

    rand_num = (rand()%10)+1;

    printf("\nGuess a number that is between 1 & 10: \n");
    scanf("%c", &response);

    if (!isdigit(response)) {
        printf("You did not enter a number\n\n");
        return 0;
    }
    if ((response - '0')== rand_num) {
        printf("\nYou guessed right\n");
        }
        else {
            printf("\nSorry, you guessed wrong\n");
            printf("The correct guess was %d\n", rand_num);
        }

    return 0;
}

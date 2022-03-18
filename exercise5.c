/*
Write an algorithm that calculates the amount of interests you need to pay every month on a car
loan. The algorithm should take as input the amount you borrowed from the bank and the
annual interest rate the bank is charging. It then should return the amount of interests you need
to pay every month.
Convert the algorithm into a computer program and test it.
Note: in this exercise, we assume that you are only paying the interest. In other words, your loan
does not decrease over time. 
*/


#include<stdio.h>

int main(){
    float loan, interest_rate, pay_back;
    printf("enter the loan amount you borrowed: ");
    scanf("%f",&loan);
    printf("enter the interest rate: ");
    scanf("%f",&interest_rate);

    pay_back = loan * interest_rate / 100;

    printf("the amount of interest you need to pay at the end of the year is: %f", pay_back);
    return(0);
}
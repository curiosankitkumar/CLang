#include<stdio.h>
/*int main(){
    for(int i=1; i <= 100; i = i+1){
        printf("%d \n", i);
    }
    return 0;

}
*/
/*int main(){
    for(int i=1; i <= 100; i = i+1){
        printf("Hello world \n", i);
    }
    return 0;

}
*/
/*int main(){
    for(int i=10; i >= 1; i = i-1){
        printf("%d \n", i);
    }
    return 0;
}
*/
/*int main(){
    //iterator ; counter
    for(int i=0; i <= 10; i = i+1){
        printf("%d \n", i);
    }
    return 0;
}
 */
/*int main(){
    //increment operator
    //++i  (pre increment)
    // i++ (post incremnent)


    int i=1;
   // printf("%d \n", i++);// use, then increase
    //printf("%d \n", i);

    printf("%d \n", ++i);// increase then use
    printf("%d \n", i);
    return 0;

}
*/
//
/*int main(){
    //decrement operator
    //++i  (pre increment)
    // i++ (post incremnent)

    // --i (pre decrement)
    //i-- (post decrement)

    int i=1;
    //printf("%d \n", i--);// use, then increase
    //printf("%d \n", i);

    printf("%d \n", --i);// increase then use
    printf("%d \n", i);
    return 0;
}
*/
//LOOP COUNTER CAN BE FLOAT OR EVEN CHARACTER
/*int main(){
    for(float i=1.0; i<=5.0; i++){
        printf("%f \n", i);
    }
    for(char ch='a'; ch<='z'; ch++){
        printf("%c \n", ch);
        }
    return 0;
}
*/
//INFINITE LOOP DON`T USE INFINTINE LOOP
/*int main(){
    for(int i=1; ;i++){ // ;;- THAT SYMBOL IS CAALED INFINITE LOOP
        printf("hello world \n");
    }
    return 0;
}
*/
// WHILE LOOP

/*
int main(){
    int i=1;
    while(i<=5){
        printf("Hello world \n");
        i++;
    }
    return 0;
}
*/
/*int main(){
    int n;
    printf("enter a number :");
    scanf("%d", &n);

    int i=0;
    while(i <= n){
        printf("%d \n", i);
        i++;
    }
    return 0;
}
*/

/*int main(){
    int n;
    printf("enter a number :");
    scanf("%d", &n);

    for(int i=0; i<=n; i++){   // i =5
        printf("%d \n", i);
    }
    return 0;
}
*/
//DO         WHILE         LOOP
/*int main (){
    int i = 1;
    do {
        printf("%d \n", i);
        i++;
     }   while(i<=5);

    return 0;
*/
/*int main (){
    int i = 5;
    do {
        printf("%d \n", i);
        i--;
     }   while(i>=1);

    return 0;
}
*/
/*int main(){
    int n;
    printf("enter number :");
    scanf("%d", &n);

    int sum = 0;
    for (int i=1; i<=n; i++){
        sum =sum +i;  // sum += i
    }
    printf("sum is %d", sum);

    return 0;
}
*/
/*int main(){
    int n;
    printf("enter number :");
    scanf("%d", &n);

    int sum = 0;
    for (int i=1; i<=n; i++){
        sum =sum +i;  // sum += i
    }
    printf("sum is %d", sum);

    for (int i=n; i>=1; i--){
        printf("%d\n" , i);
    }

    return 0;
    }
*/
/*
int main(){
    int n;
    printf("enter number :");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1,j=n; i<=n && j>=1; i++,j--){
        sum =sum + i;  // sum += i
        printf("%d \n", j);
    }

    printf("sum is %d \n", sum);

    return 0;
}
*/
/*
int main(){
    int n;
    printf("enter number :");
    scanf("%d", &n);

    int sum = 0;
    for(int j=n; j>=1; j--){
        sum =sum + j;  // sum += i
        printf("%d \n", j);
    }

    printf("sum is %d \n", sum);

    return 0;
}
*/
// TABLE QUESTION EX-2,4,6
/*int main(){
    int n;
    printf("enter number :");
    scanf("%d", &n);

    for (int i=1; i<=10; i++) {
        printf("%d \n", n*i);
    }

    return 0;
}
*/
//BREAK STATEMENT IN LOOP

/*int main (){
    for(int i=1; i<=5; i++) {
        if(i == 3){
            break;
        }
        printf("%d\n",i);
    }

    printf("end");

    return 0;
}
*/
 //KEEP TAKING NUM AS INPUT FROM USER UNTIL USER ENTERS AN ODD NUMBERS.

/*int main(){
    int n;
    do{
        printf("enter number :");
        scanf("%d", &n);
        printf("%d \n", n);

        if(n % 2 != 0){
            break;
        }
    }while(1);
    printf("this is odd number");

    return 0;
}
*/
 //KEEP TAKING NUMBERS AS INPUT FROM UNTIL USER ENTERS A NUMBER WHICH IS MULTIPLE OF 7.

/*int main(){
     int n;
     do {
        printf("enter number :");
        scanf("%d", &n);
        printf("%d\n", n);

        if(n % 7 == 0){ //multiple of 7
            break;
        }
     } while(1);
     printf("thank you \n");

     return 0;
 }
*/

// CONTINUE STATEMENT

/*int main(){
    for (int i=1; i<=5; i++) {
        if(i == 3) { // skip
            continue;
        }
        printf("%d \n", i);
    }

    return 0;
}
*/
 // Q- PRINT ALL NUM FROM 1 TO 10 EXCEPT FOR 6,

/*int main (){
    for (int i=1; i<=10; i++){
        if(i == 6){
            continue;
        }
        printf("%d \n" , i);
    }
    return 0;
}
*/

// Q--PRINT ALL THE ODD NUMBERS FROM 5 TO 50.
 /*int main(){
     for (int i=5; i<=50; i++){
        if(i % 2 != 0){
            printf("%d \n",i);
        }//odd
     }

     return 0;
 }
 */

 // Q--PRINT THE FACTORIAL OF A NUMBER N.

 /*int main (){
     int n;
     printf("enter number : ");
     scanf("%d",&n);

     int fact = 1;
     for(int i=1; i<=n; i++){
        fact = fact * i;
     }
     printf("final factorial is %d", fact);

     return 0;
 }
*/
// Q--Write a C program to print all natural numbers from 1 to n using loop.
//  C program to print first n natural numbers using loop. 
//  How to print natural numbers in a given range using loop.
// Logic to print natural numbers using for loop in C program.

// Example

// Input

// Input upper limit: 10
 
 /*
#include<stdio.h>

int main ()
{
    int i, num;
    printf ("Enter any number:");
    scanf("%d", &num);

    printf("Natural number from 1 to %d: \n", &num);

    
    for(i=1; i<=num; i++)
    {
        printf("%d \n", i);
    }
    return 0;
}
*/
 // Q- Write a C program to print all natural numbers in reverse from n to 1 using for loop. 
//  How to print natural numbers in reverse order in C programming. Logic to print natural 
//  numbers in reverse for a given range in C program.

// Example

// Input

// Input N: 10
/*
#include<stdio.h>

int main () 
{
    int i , num;
    printf("Enter any number:");
    scanf("%d", &num);

    for (i = num; i >= 1; i--)
    {
        printf("%d \n ", i);
    }
    return 0 ;
}
*/
// Q- Write a C program to print all alphabets from a to z using while loop. 
// How to display alphabets from a to z using while loop in C programming.

// Example

// Input

// Output

// Alphabets: a, b, c, d, e, ... , z
/* 
#include<stdio.h>
int main ()
{
    int ch = 'a';
    printf("Enter any alphabet:");
    scanf("%c", &ch);

    while (ch<='z')
    {
        printf("%c \n", ch);
        ch++;
    }
    return 0;
}
*/
 // Q--Write a C program to print all even numbers from 1 to n using for loop. C program to 
//  generate all even numbers between given range. Logic to print even numbers using if else 
//  and for loop in given range in C programming.

// Example Input

// Input upper range: 10
/*
#include<stdio.h>
int main ()
{
    int i, n;
    printf("Enter any numbers:");
    scanf("%d \n", &n);

    printf("Even number 1 to are %d \n:" , n);


    for (i =1; i<=n; i++)
    {
        {
            if (i % 2 == 0){
                 printf("%d \n", i);

            }
        }
    }
    return 0;
}
*/
//Q--Write a C program to print all odd numbers from 1 to n using for loop. How to print odd 
// numbers from 1 to n using loop in C programming. Logic to print odd numbers in a given range 
// in C programming.

// Example Input

// Input upper limit: 10
/*
#include<stdio.h>
int main ()
{
    int i, n;
    printf("Enter any number:");
    scanf("%d \n", &n);

    printf("All odd number from 1 to %d are \n:", n);

    for (i =1; i <= n; i++)
    {
        if (i%2!=0){
            printf("%d \n", i);
        }
    }
    return 0 ;
}
*/
//Q--Write a C program to find the sum of all natural numbers between 1 to n using for loop. 
// How to find sum of natural numbers in a given range in C programming. Logic to find sum of 
// all natural numbers in a given range in C programming.

// Example Input

// Input upper limit: 10
/*
#include<stdio.h>
int main ()
{
    int i , n, sum = 0 ;
    printf("Enter any number: ");
    scanf("%d \n ", &n);

    printf("All natural number 1 to %d are:", n);

    for (i=1; i<=n; i++){
        sum += i;
    }
    printf("Sum of frist %d natural number = %d", n , sum);

    return 0;
}
*/
//Q-Write a C program to input number from user and find sum of all even numbers between 1 to n. 
// How to find sum of even numbers in a given range using loop in C programming. Logic to find sum 
// of even numbers in a given range in C program.

// Example

// Input

// Input upper limit of even number: 10
/*
#include<stdio.h>
int main (){
    int i , n , sum = 0 ;
    printf("Enter any number: ");
    scanf("%d \n", &n);

    for (i=2; i<=n; i+=2)
    {
        sum+=i;
    }
    printf("sum of all even number between 1 to %d = %d",n, sum);
    return 0;
}
*/
// Q-Write a C program to find sum of all odd numbers from 1 to n using for loop. How to
//  find sum of all odd numbers in a given range in C programming. Logic to find sum of odd
//   numbers in a given range using loop in C programming.

// Example Input

// Input upper limit: 10
/*
#include<stdio.h>
int main ()
{
    int i , n , sum =0;
    printf("Enter any numbers: ");
    scanf("%d" ,&n);

    for(i=1; i<=n; i+=2)
    {
        sum += i;
    }
    printf("Sum of odd number = %d",sum);

    return 0;
}
*/
// Q--Write a C program to input a number from user and print multiplication table of the given number 
// using for loop. How to print multiplication table of a given number in C programming. Logic to print 
// multiplication table of any given number in C program.

// Example Input

// Input num: 5
/*
#include<stdio.h>
int main ()
{
    int i , n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("%d and %d",i,n);
    for (i = 1; i<=10;i++)
    {
        printf("%d * %d = %d \n", n , i, n * i);
    }
    return 0;
}
*/
//Q--Write a C program to input a number from user and count number of digits in the given integer using loop.
//  How to find total digits in a given integer using loop in C programming. Logic to count digits in a given 
//  integer without using loop in C program.

// Example Input

// Input num: 35419
/*
#include<stdio.h>

int main ()
{
    int n,count = 0;
    printf("Enter any number: ");
    scanf("%d", &n);

    int temp = n;

    while (temp != 0)
    {
        temp = temp/10;
        count++;  
    }
    printf("total digit %d" ,count);
    return 0;  
}
*/
// Q--Write a C program to input a number from user and find first and last digit of number using loop. 
// How to find first and last digit of a number in C programming. Logic to find first and last digit of a 
// given number without using loop in C program.

// Example Input

// Input number: 1234
/*
#include <stdio.h>

int main()
{
    int n, temp = 0, first, last;

    printf("Enter number: ");
    scanf("%d", &n);

    last = n % 10;

    while (n >= 100) {
        n = n / 10;
    }

    first = n;

    printf("first = %d\n", first);
    printf("last = %d\n", last);

    return 0;
}
*/
//Q--Write a C program to input a number and find sum of first and last digit of the number using for loop.
//  How to find sum of first and last digit of a number in C programming using loop. Logic to find sum of 
//  first and last digit of a number without using loop in C program.

// Example Input

// Input number: 12345

#include<stdio.h>
int main ()
{
    int n , temp = 0, frist , last ;
    printf("Enter any number: ");
    scanf("%d" ,n); 
}





































































































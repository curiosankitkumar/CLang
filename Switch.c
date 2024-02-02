
// Write a C program to input week number(1-7) and print day of week name using switch case.
//  C program to find week day name using switch case. 
//  How to find day name of week using switch case in C programming.

// Example
// Input
// Input week number(1-7): 2

/*
#include<stdio.h>

int main (){
    int week;
    printf("Enter week number(1-7):");
    scanf("%d", &week);

    switch (week)
    {
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;
    
    case 3:
        printf("Wednesday");
        break;

    case 4:
        printf("Thurasday");
        break;

    case 5:
        printf("Friday");
        break;

    case 6:
        printf("Saturday");
        break ;

    case 7 :
        printf("Sunday");
        break ;

    default:
        printf("the invalid statement:");

        break;
    }
    return 0;
}
*/

// Q-- Write a C program to input month number and print total number of days in month using switch...case.
//  C program to find total number of days in a month using switch...case. 
// Logic to print number of days in a month using switch...case in C programming.

// Example
// Input
// Input month number: 3

/*

#include<stdio.h>
int main (){
    int month ;
    printf("Enter month number(1-12): ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("31 days");
        break;
    case 2:
        printf("28/29 days");
        break;
    case 3:
        printf("31 days");
        break;
    case 4:
        printf("30 days");
    case 5 :
        printf("31 days");
        break;
    case 6:
        printf("30 days");
        break;
    case 7:
        printf("31 days");
        break;
    case 8:
        printf("31 days");
        break;
    case 9:
        printf("30 days");
        break;
    case 10:
        printf("31 days");
        break;
    case 11:
        printf("30 days");
        break;
    case 12:
        printf("31 days");
        break;

    default:
         printf("Invalid number! , Enter the (1-12): ");
        break;
    }
    return 0;
}
*/

// Q-- Write a C program to input an alphabet and check whether it is vowel or consonant using switch case.
//  C program to check vowel or consonant using switch case. Logic to check vowel or consonant using switch case.

// Example
// Input
// Input alphabet: c
/*
#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter any alphabet:");
    scanf("%c" , &ch);

    switch (ch)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
         printf("Vowel");
        break;
    
    default:
          printf("constant");
        break;
    }
}
*/

// Q-- Write a C program to input two numbers from user and find maximum between two numbers using switch case.
//  How to find maximum or minimum between two numbers using switch case. 
//  Logic to find maximum between two numbers using switch case in C programming.

// Example
// Input
// Input first number: 12
// Input second number: 40
/*
#include<stdio.h>
int main ()
{
    int num1, num2;
    printf("Enter two number to find maximum number:");
    scanf("%d%d", &num1, &num2);

    switch (num1>num2)
    {
    case 0:
        printf("%d maximum" , num1);
        break;
    case 1:
         printf("%d maximum", num2);
         break;
    default:
        break;
    }
}
*/
// Q-- Write a C program to input number from user and check whether the number
//  is even or odd using switch case.How to check even or odd using switch case in 
//  C programming. Logic to check whether a number is even or odd using switch case in C program.

// Example
// Input
// Input number: 12

/*
#include<stdio.h>
int main ()
{
    int num;
    printf("Enter any number to check even or odd: ");
    scanf("%c", &num);

    switch (num % 2)
    {
    case 0:
        printf("Number is even");
        break;
    
    case 1:
         printf("Number is odd");
         break;
    default:
         printf("it is alphabet");
        break;
    }
    return 0;
}
*/
//Q-- Write a C program to input a number and check positive negative or zero using switch case.
//  Checking negative, positive or zero using switch case is little tricky. In this example,
// I will explain how to check positive negative or zero using switch case. 
// However, it is not recommended way, it’s just for learning.


// Example
// Input
// Input number: 23

/*
#include<stdio.h>
int main ()
{
    int num;
    printf("Enter any number: ");
    scanf("%d" , &num);

   switch (num > 0)
   {
   case 1:
      printf("%d is positive.", num);
    break;
   
   case 0:
switch (num < 0)
{
case 1:
    printf("%d is negative.", num );
    break;

case 0:
     printf("%d is zero.", num);
     break;

default:
    break;
}
   default:
    break;
   }
}
*/

// Q-- Write a C program to find all roots of a Quadratic equation using switch case. 
// How to find all roots of a quadratic equation using switch case in C programming. 
// Logic to calculate roots of quadratic equation in C program.

// Example
// Input
// Input a: 4
// Input b: -2
// Input c: -10

// #include<stdio.h>
// int main ()
// {
//     float a, b ,c;
//     float root1, root2, imaginary;
//     float discriminant;

//     printf("Enter value of a, b, c of quadractic equation (aX^2 + bX + c): ");
//     scanf("%f" , &a, &b, &c);

//     discriminant = (b *b) - (4 * a * c);
//     switch (discriminant > 0)
//     {
//     case 1:
//         root1 = (-b + sqrrt(discriminant)) / (2 *a);
//         root2 = (-b - sqrt(discriminant)) / (2 * a);
//         printf("Two distinct and real roots exists: %.2f and %.2f", root1, root2);

//         break;
//     case 0:
//         switch (discriminant < 0)
//         {
//         case 1:
//             root1 = root2 = -b / (2 *a);
//             imaginary = sqrt(-discriminant) / (2 *a);

            
//                     printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", 
//                             root1, imaginary, root2, imaginary);
//                     break;

//                 case 0:
                    
//                     root1 = root2 = -b / (2 * a);

//                     printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);

//                     break;
//             }
//     }

//     return 0;
// }

// Q--Write a C program to create menu driven calculator that performs basic arithmetic operations 
// (add, subtract, multiply and divide) using switch case and functions. The calculator should input 
// two numbers and an operator from user. It should perform operation according to the operator 
// entered and must take input in given format.

// <number 1> <operator> <number 2>

// Example
// Input
// 5.2 - 3
// Output

/**
 * C program to create Simple Calculator using switch case
 */

// #include <stdio.h>

// int main()
// {
//     char op;
//     float num1, num2, result=0.0f;

//     printf("WELCOME TO SIMPLE CALCULATOR\n");
//     printf("----------------------------\n");
//     printf("Enter [number 1] [+ - * /] [number 2]\n");

//     scanf("%f %c %f", &num1, &op, &num2);
//     switch(op)
//     {
//         case '+': 
//             result = num1 + num2;
//             break;

//         case '-': 
//             result = num1 - num2;
//             break;

//         case '*': 
//             result = num1 * num2;
//             break;

//         case '/': 
//             result = num1 / num2;
//             break;

//         default: 
//             printf("Invalid operator");
//     }

//     printf("%.2f %c %.2f = %.2f", num1, op, num2, result);

//     return 0;
// }






























































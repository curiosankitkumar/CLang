// Write a C program to print all natural numbers from 1 to n using loop. C program to print 
// first n natural numbers using loop. How to print natural numbers in a given range using 
// loop. Logic to print natural numbers using for loop in C program.

// Example Input

// Input upper limit: 10

// #include<stdio.h>
// int main() {
//     int i , n;
//     printf("Enter any number : ");
//     scanf("%d", &n);

//     for (i=0; i<=10; i++)
//     {
//         printf("%d\n  ", i);
//     }
// }

// #include<stdio.h>
// int main ()
// {
//     int i , n;
//     printf(" Enter one natural number 1 to 10 : ");
//     scanf("%d", &n);

//     i = 0;
//     while (i <= 10)
//     {
//         printf("%d\n", i );
//         i++;
//     }
    
// }

//Write a C program to print all natural numbers in reverse from n to 1 using for loop. 
// How to print natural numbers in reverse order in C programming. Logic to print natural 
// numbers in reverse for a given range in C program.

// Example Input

// Input N: 10

// #include<stdio.h>
// int main () {
//     int i , n ;
//     printf("ENter any number: ");
//     scanf("%d" , &n);

//     i = 10;

//     while (i>=1)
//     {
//         printf("%d\n",i);
//         i--;
//     }
// }

// #include<stdio.h>
// int main (){
//     int i, n;
//     printf("Enter any number :");
//     scanf("%d", &n);

//     for (i=10; i>=1; i--){
//         printf("%d\n", i);
//     }
// }

// Write a C program to print all alphabets from a to z using while loop. How to display 
// alphabets from a to z using while loop in C programming.

// Example Input

// Output

// Alphabets: a, b, c, d, e, ... , z

// #include<stdio.h>

// int main (){
//     char i, ch;
//     printf("Enter any character: ");
//     scanf("%c", &ch);

//     for (i='a'; i <= 'z'; i++)
//     {
//         printf("%c\n", i);
//     }
// }

// #include<stdio.h>
// int main (){
//     char i ,ch;
//     printf("Enter any character a to z :");
//     scanf("%d", &ch);

//     i='a';

//     while (i<='z')
//     {
//         printf("%c\n", i);
//         i++;
//     }
//}

//Q--Write a C program to print all even numbers from 1 to n using for loop. C program to generate 
// all even numbers between given range. Logic to print even numbers using if else and for loop in 
// given range in C programming.

// Example Input

// Input upper range: 10

// #include<stdio.h>
// int main ()
// {
//     int i , n;
//     printf("Enter any  number: ");
//     scanf("%d",&n);

//     printf("Even numbers from 1 to %d are: \n", n);

//     for (i=2; i<=n; i++)
//     {
//         if (i % 2 == 0){
//             printf("%d\n", i);
//         }
// }
// }

// #include<stdio.h>

// int main ()
// {
//     int i, n;
//     printf("Enter any number : ");
//     scanf("%d", &n);

//     i = 0;
//     while (i<=n){
//         if (i % 2==0){
//             printf("%d \n", i);
//         }
//         i++;
//     }
// }

//Q.5  Write a C program to print all odd numbers from 1 to n using for loop. How to print odd numbers from 1 to n 
// using loop in C programming. Logic to print odd numbers in a given range in C programming.

// Example Input

// Input upper limit: 10
    
// #include<stdio.h>
// int main ()
// {
//     int i, n;
//     printf("Enter any number : ");
//     scanf("%d", &n);

//     printf("Odd number from 1 to %d are: \n", n);

//     for (i=1; i<=n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             printf("%d\n" ,i);
//         }
//     }
// }

// #include<stdio.h>

// int main ()
// {
//     int i , n ;
//     printf("Enter any number : ");
//     scanf("%d", &n);

//     i = 0;
//     while (i <= n){
//         if (i%2!=0){
//             printf("%d\n", i);
//         }
//         i++;
//     }
// }

// Q .6 Write a C program to find the sum of all natural numbers between 1 to n using for loop. How to find 
// sum of natural numbers in a given range in C programming. Logic to find sum of all natural numbers in a 
// given range in C programming.

// Example Input

// Input upper limit: 10

// #include<stdio.h>

// int main()
// {
//     int i , n;
//     printf("Enter any number:");
//     scanf("%d", &n);

//     printf("All natural numbers between 1 to %d are: \n", i);

//     for (i =1; i <=n; i++){
//         printf("%d\n", i);
//     }
//     return 0;
// }

// #include<stdio.h>

// int main ()
// {
//     int i , n ;
//     printf("ENter any number : ");
//     scanf("%d", &n);

//     i = 0;
//     while (i <= n){

//         printf("%d\n", i);
//         i++;
//     }
//     return 0;
// }

// Q .7--Write a C program to input number from user and find sum of all even numbers between 1 to n. 
// How to find sum of even numbers in a given range using loop in C programming. Logic to find sum 
// of even numbers in a given range in C program.

// Example Input

// Input upper limit of even number: 10

// #include<stdio.h>

// int main ()
// {
//     int i , n, sum = 0;

//     printf("Enter any number : ");
//     scanf("%d", &n);

//     printf("All even number between 1 to %d are : \n", i);

//     for (i =2; i<=n; i+=2)
//     {
//         sum += i;
 
//     }
//     printf("%d\n", sum , i);
// }

// #include<stdio.h>

// int main ()
// {
//     int i , n ,sum = 0 ;
//     printf("Enter any number : ");
//     scanf("%d", &n);
    
//     i = 0;

//     while (i <=n){
//         if(i%2==0){
//             sum+=i;
//         }
//         i++;
//     } 
//     printf("%d",sum);
//     return 0 ;
// }

// #include<stdio.h>

// int main ()
// {
//     int i , n , sum = 0;
//     printf("Enter any number : ");
//     scanf("%d", &n);

//     i = 0;

//     while (i <= n){
//         if (i % 2 == 0){
//             sum += i;
        
//         }
//         i++;
//     }
//     printf("%d\n", sum );
//     return 0 ;
// }

// Q.8- Write a C program to find sum of all odd numbers from 1 to n using for loop. 
// How to find sum of all odd numbers in a given range in C programming. Logic to 
// find sum of odd numbers in a given range using loop in C programming.

// Example Input

// Input upper limit: 10

// #include<stdio.h>

// int main (){
//     int i , n ,sum=0;
//     printf("Enter any number : ");
//     scanf("%d", &n);
    
    
//     for (i=1; i<=n; i+=2)
//     {
//         sum += i;
//     }
//     printf("%d\n", sum);
//     return 0; 
// }

// #include<stdio.h>

// int main ()
// {
//     int i , n , sum = 0;

//     printf("Enter any number: ");
//     scanf("%d", &n);
    
//     i = 0;
//     while (i <= n)
//     {
//         if (i % 2 != 0){
//             sum += i;
//         }
//         i++;
//     } 
//     printf("%d", sum);
//     return 0 ;
// }

// Q.9-Write a C program to input a number from user and print multiplication table of the given number using for loop. 
// How to print multiplication table of a given number in C programming. Logic to print multiplication table of any 
// given number in C program.

// Example Input

// Input num: 5

// #include<stdio.h>
// int main () {
//     int i , n;
//     printf("Enter any number: ");
//     scanf("%d", &n );

//     for (i = 1; i <= n; i++){
//         printf("%d * %d = %d\n",n, i,(n*i));
//     }
//     return 0;
// }

// #include<stdio.h>

// int main (){
//     int i, n ;
//     printf("Enter any number: ");
//     scanf("%d", &n);

//     i = 1;
//     while (i<=10){
//         printf("%d *%d = %d\n", n , i, (i*n) );    
//         i++;
//     }
//     return 0 ; 
// }

// Q.10 Write a C program to input a number from user and count number of digits in the given integer using loop. 
// How to find total digits in a given integer using loop in C programming. Logic to count digits in a given 
// integer without using loop in C program.

// Example Input

// Input num: 35419

// #include<stdio.h>
// int main ()
// {
//     int i , n;
//     printf("Enter  any number: ");
//     scanf("%d", &n);

//     int count = 0;
//     while (n != 0){
//         n = n /= 10;
//         count ++;
//     }
//     printf("%d ", count);

//     return 0 ;
// }

#include<stdio.h>
int main (){
    int i , n ;
    printf("Enter any number: ");
    scanf("%d", &n);
    int count;

    for (count=0; n != 0; count++){
        n = n /10;
    }
    printf("%d", count);
    //
}




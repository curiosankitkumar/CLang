// #include<stdio.h>

// void printHello();
// void printGoodbye();
// int main ()
// {
//     printHello();
//     printGoodbye();
//     return 0;
// }
// void printHello(){
//     printf("Hello\n");
// }
// void printGoodbye()
// {
//     printf("Goodbye:");
// }

// #include<stdio.h>

// void namaste();
// void bonjour();

// int main ()
// {
//     printf("Enter f for french & i for indian:");
//     char ch;
//     scanf("%c", &ch);
//     if (ch =='i'){
//         namaste();
//     }    else{
//             bonjour();
//         }

    
//     return 0 ;
// }
// void namaste (){
//     printf("namaste");
// }
// void bonjour (){
//     printf("bonjour");
// }



// #include<stdio.h>

// void namaste();
// void bonjour();

// int main ()
// {
//     printf("Enter f for french & i for indian:");
//     char ch;
//     scanf("%c", &ch);
//     namaste();

//     return 0 ;
// }
// void namaste (){
//     printf("namaste");
//     bonjour();
// }
// void bonjour (){
//     printf("\nbonjour");
// }


// #include<stdio.h>

// int sum (int a , int b);

// int main ()
// {   int a , b;

//     printf("Enter frist number: ");
//     scanf("%d", &a);
//     printf("Enter second number: ");
//     scanf("%d", &b);

//     int s = sum (a, b);
//     printf("sum is : %d\n",s);
//     return 0 ;
// }
// int sum (int x, int y)
// {
//     return x + y;
// }


// #include<stdio.h>


// void printTable(int n);
// int main ()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     printTable(n);

//     return 0 ; 
// }

//     void printTable(int n){
//         for(int i=1; i<=10; i++)
//         {
//             printf("%d\n", i*n);
//         }
//     }

// #include<stdio.h>

// void calculatePrice(float value);

// int main ()
// {
//     float value = 100.00;
//     calculatePrice(value);
//     return 0;

// }
// void calculatePrice(float value){
//     value = value + (0.18 * value);
//     printf("final price is : %f", value);
// }


// #include<stdio.h>
// #include<math.h>

// void calculateSquare();

// int main ()
// {
//      int n =4;
//      printf("%f", pow(n,2));

//      return 0 ; 
// }

// Q.-- Write function to calculate area of a square , a circle & a rectangle.

// #include<stdio.h>
// float squareArea (float side);
// float cirlceArea(float rad);
// float rectangleArea(float a, float b);
// int main (){
//     float a = 5.0;
//     float b = 10.0;

//     printf("%f", rectangleArea(a,b));

//     return 0 ;
// }
// float squareArea (float side){
//     return side * side;
// }
// float circleArea (float rad){
//     return 3.14 * rad * rad;
// }
// float rectangleArea (float a, float b) {
//     return a * b;
// }

// RECURSIVE FUNCTION 

// #include<stdio.h>

// void printHW(int count);

// int main (){
//     printHW(4);
//     return 0;
// }
// void printHW(int count){
//     if (count == 0){ 
//         return ;
//     }
//     printf("Hello World\n");
//     printHW(count-1);
// }

// #include<stdio.h>

// int sum (int n);

// int main (){
//     printf("sum is : %d",sum(5));
//     return 0;
// }
// int sum (int n){
//     if (n == 1){
//         return 1;
//     }
//     int sumNm1 = sum(n-1); // sum of 1 to n
//     int sumN = sumNm1 + n;
//     return sumN;
// }


// Q -- Factorial of n.

// #include<stdio.h>

// int fact (int n);

// int main (){
//     printf("factorail is : %d", fact(4));
//     return 0 ;
// }

// int fact (int n ) {
//     if (n==0){
//         return 1;
//     }
//     int factNm1 = fact(n-1);
//     int factN = factNm1 * n ;
//     return factN;
// }

// Q-- write a function to convert celsius to fahrenheit.

// #include<stdio.h>

// float convertTemp(float celsius);

// int main (){
//     float far = convertTemp(32);
//     printf("far : %f", far);
//     return 0 ; 
// }
// float convertTemp(float celsius){
//     float far = celsius * (9.0/5.0) + 32 ;
//     return far ;
// }

// Q- Write a function to calculate percentage of a student from Marks in Science ,Math & Sanskrit.

// #include<stdio.h>

// int calcPercentage(int science, int math, int sanskrit);

// int main (){
//     int sc = 46;
//     int mth = 54;
//     int sanskrit = 89;
//     printf("%d", calcPercentage(sc , mth , sanskrit));
//     return 0 ;

// }
// int calcPercentage(int science , int math, int sanskrit){
//     return ((science + math + sanskrit)/ 3);
    
// }

// Q- Write a function to print n terms of the fibonacci sequence.

// #include<stdio.h>

// int fib (int n );

// int main (){
//     printf("%d",fib(6));
//     return 0;
// }
// int fib (int n) {
//     if (n==0){
//         return 0;
//     }
//     if (n==1){
//         return 1;

//     }
//     int fibNm1 = fib(n-1);
//     int fibNm2 = fib(n-2);
//     int fibN = fibNm1 + fibNm2;
//     // printf("fib of %d is : %d \n", n ,fibN);
//     return fibN;
// }

// Q--Write a function to find sum of digits of a number.

// Q--write a function to find square root of a number.

// Q--wite a function to print "Hot" or "cold" depend on the temperature user enters.

// Q--Make your own pow function.

//  Q.1-Write a C program to find cube of any number using function.

// #include<stdio.h>

// double cube(double num);

// int main (){
//     int num ;
//     double c;

//     printf("Enter number:");
//     scanf("%d", &num);

//     c = cube (num);

//     printf("%d is %.2f", num,c);
// }
// double cube(double num)
// {
//     // double c = num * num * num;
//     // return c;
//     return (num * num * num);
// }
// #include <stdio.h> 
// int main() { 
//     int n = 16; 
//     switch(n >> 4) { 
//         case 4:  
//             printf("Four "); 
//         case 3:  
//             printf("Three "); 
//         default:  
//             printf("This case is default "); 
//     } 
//     return 0; 
// } 

// #include <stdio.h>
    
// int main() {
//     int i = 5;
//     while (i > 0) {
//         printf("%d ", i--);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int i = 3;
//     switch(i) {
//         case 1: 
//         printf("Ram");
//         break;
//         case 2:
//         printf("Joseph");
//         break;
//         case 3:
//         printf("Raju");
//         break;
//         default: 
//         printf("Bala");
//     }
// }

// #include <stdio.h>

// int main() {
//     for (int x = 1; x <= 2; x++) {
//         for (int y = 2; y >= 1; y--) {
//             printf("%d ", x * y);
//         }
//     }
//    return 0;
// }

// #include <stdio.h> 
// int main() { 
//     int count = 0, n = 100, sum = 0; 
//     do { 
//         sum += n; 
//         n /= 2; 
//         count++; 
//     } 
//     while (n >= 1); 
//     printf("%d", count); 
//     return 0; 
// }

// #include <stdio.h>
    
// int main() {
//     int i = 0;
//     while (i < 3) {
//         printf("Night ");
//         i++; 
//     }
//     printf("Day");
//     return 0;
// }
// #include <stdio.h> 
// int main() { 
//     int a = 4, b = 4, c = 3; 
//     if (a + b +c == 8) 
//         printf("Sum is 8"); 
//     else 
//         printf("Sum is not 8"); 
//     return 0; 
// }

// #include <stdio.h>

// int main() {
//     int a = 10, b = 15;
//     if (a % b == 15)
//         printf("A");
//     else if (a % b == 5)
//         printf("B");
//     else
//         printf("NA");
// }

// #include <stdio.h>

// int main() {
//     int s = 0;
//     for (; s < 5; s++) {
//         printf("%d ", s);
//     }
//     printf("\n%d", s);
//     return 0;
// }

// Write a C program to input any number from user and find cube of the given number using function. 
// How to find cube of a given number using function in C programming. Write a C function to find 
// cube of a given number.

// Example Input

// Input any number: 5

// #include <stdio.h>

// /* Function declaration */
// double cube(double num);

// int main()
// {
//     int num;
//     double c;
    
//     /* Input number to find cube from user */
//     printf("Enter any number: ");
//     scanf("%d", &num);
    
//     c = cube(num);

//     printf("Cube of %d is %.2f", num, c); 
    
//     return 0;
// }

// /**
//  * Function to find cube of any number
//  */
// double cube(double num)
// {
//     return (num * num * num);
// }

// #include <stdio.h>

// int main()
// {
//     /* Simple declarations */
//     char character = 'C';
//     int integer = 1;
//     float real = 10.4f;
//     long long biginteger = 989898989ll;

//     /* Print variable value with their memory address */
//     printf("Value of character = %c, Address of character = %u\n", character, &character);
//     printf("Value of integer = %d, Address of integer = %u\n", integer, &integer);
//     printf("Value of real = %f, Address of real = %u\n", real, &real);
//     printf("Value of biginteger = %lld, Address of biginteger = %u", biginteger, &biginteger);

//     return 0;
// }
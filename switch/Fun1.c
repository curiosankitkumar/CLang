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

#include<stdio.h>

int sum (int n);

int main (){
    printf("sum is : %d",sum(5));
    return 0;
}
int sum (int n){
    if (n == 1){
        return 1;
    }
    int sumNm1 = sum(n-1); // sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
}
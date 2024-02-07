
# include<stdio.h>
//circle of radius

/*int main(){
    int radius;
    printf("enter a radius");
    scanf("%d", &radius);

    printf("area is : %d", 4.14 * radius *radius);
    return 0 ;

}
*/
//Write a C program to input two numbers from user and calculate their sum.
//C program to add two numbers and display their sum as output. How to add two numbers in C programming

/*int main(){
    int a , b;
    printf("enter a");
    scanf("%d", &a);

    printf("enter b");
    scanf("%d", &b);

    printf("sum is : %d",a+b);
    return 0;


}
*/
//Write a C program to input two numbers and perform all arithmetic operations.
//How to perform all arithmetic operation between two numbers in C programming.
//C program to find sum, difference, product, quotient and modulus of two given numbers

/*int main(){
    int a,b;
    float div;
    int sum,sub,mult,mod;

    printf("enter a two number");
    scanf("%d%d",&a ,&b);

    sum = a+b;
    sub = a-b;
    mult = a*b;
    div = (float) a/b;
    mod = a%b;

    printf("sum = %d\n",sum);
    printf("sum = %d\n",sub);
    printf("sum = %d\n",mult);
    printf("sum = %d\n",mod);
    printf("sum = %f\n",div);
}
*/
//Perimeter / area  of rectangle

/*int main(){
    float length , width , area;

    printf("Enter a length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter a width of the rectangle: ");
    scanf("%f", &width);
// perimeter = 2 * (length + width);
    area = length * width;

    printf("area of rectangle = %f units", area);

    return 0;
}
*/
//find diameter, circumference and area of the circle.

/*int main(){
    float radius , diameter , circumference , area;

    printf("Enter a radius of a circle: ");
    scanf("%f" , &radius);

    diameter = 2 * radius;
    circumference = 2 * 3.14 * radius;
    area = 3.14 * (radius * radius);

    printf("Diameter of circle = %.2f units \n", diameter);
    printf("Circumference of circle = %.2f units \n", circumference);
    printf("Area of circle = %.2f sq. units ", area);

    return 0;

}
*/
#include<math.h>
/*int main(){
    int a = 5 * 2 - 3 * 2
    printf("%d \n", a);
    return 0;
}
*/
/*int main(){
    int isMonday = 0;
    int isRaining =1;
    printf("%d \n",isMonday || isRaining);
}
*/
/*int main(){
    int isMonday = 0;
    int isRaining =1;
    printf("%d \n",isMonday && isRaining);
}
*/
int main(){
    int x;
    printf("enter a number : ");
    scanf("%d", &x);
    printf("%d \n", x>9 && x<100);
    return 0;
}






















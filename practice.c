#include<stdio.h>
#include<math.h>
// write a program to check a number is divisible by 2 or  not ?
int main() {
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("%d", a % 2 == 0);
    return 0;
}

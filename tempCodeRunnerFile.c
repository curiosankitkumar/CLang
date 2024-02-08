
int main()
{
    int num, first_digit, last_digit;

    printf("enter num : ");
    scanf("%d",&num);

    last_digit = num%10;
    printf("\nlastdigit: %d\n",last_digit);
    int temp = num;
    while(temp>10){
        temp/=10;
    }

    first_digit = temp;
    printf("\nfirst digit: %d\n",first_digit);
    printf("\nsum = %d",first_digit+last_digit);
    return 0;
}
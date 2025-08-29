#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);


    int one = n%10;
    int tow = n/10;
    int three = tow%10;
    int four = tow/10;
    int five = four % 10;
    int six = four / 10;
    int seven = six%10;
    int eight = six / 10;
    int nine = eight%10;

    int sum = one + three + five + seven + nine;
    printf("%d", sum);
    return 0;
}
#include<ncurses.h>
#include<stdio.h>
void main()
{
 int number;
 printf("Please enter a number that is less than or equal to 100\n");
 scanf("%d", &number);
 if (number>100)
{
printf("This statement will not appear on screen as logical expression is false\n");
printf("number=%d\n", number);
}
 else
{
printf("This statement will appear on screen as number<=100\n");
printf("number=%d\n", number);
}
 getch();
}

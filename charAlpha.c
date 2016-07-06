#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("Enter char:");
scanf("%c",&c);
if(isalpha(c))
  printf("Alphabet");
else
  printf("Not Alphabet");
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("Get char:");
scanf("%c",&c);
if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
  printf("Vowel");
else
  printf("Consonant");
getch();
}

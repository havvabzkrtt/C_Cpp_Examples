#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* Klavyeden girilen a tamsay�s�n�n tam b�lenlerini bulma */


int main()
{
   int a,i;
   
   printf("Pozitif tamsayi:");
   scanf("%d",&a);
   printf("\n%d tamsayinin tam bolenleri:\n",a);
   
   for(i=1;i<=a; i++) {
       if(a%i==0){                                                                     
         printf("%d\n",i); }}
     
   	getch();
   	return 0;
}

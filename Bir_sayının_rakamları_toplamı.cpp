#include <stdio.h>
#include <conio.h>
int main()
{
int sayi,toplam,k,ilksayi;
printf("Sayiyi giriniz..:");
scanf("%d",&sayi);
toplam=0;
ilksayi=sayi;   // En alttaki cümle için var. 
while (sayi>0)
{
k= sayi % 10;
sayi=sayi/10;
printf("yenisayi = %d ",sayi);
toplam=toplam+k;
} 
printf("\n%d sayisinin rakamlari toplami..:%d  dir ",ilksayi,toplam);
return 0;
}

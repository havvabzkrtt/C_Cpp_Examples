#include<stdio.h>
#include<math.h>
int main () {
	
	int a;
	int t;
	int olusanbakteri=1;   // olusanbakteri = bir bakteriden bölünme sonucunda oluþan bakteri sayýsý
	int toplam;            // toplam = Ortamda oluþan bakteri popülasyonu 
	int dakika = 1;

	printf("a sayisini giriniz:");
		scanf("%d",&a);
	printf("t sayisini giriniz:");
	scanf("%d",&t);

        while(dakika<t ) {
        	  
        	  dakika=dakika+2;
        	olusanbakteri=olusanbakteri*2;   }
    
	toplam=olusanbakteri*a;
    printf("toplam (Ortamda olusan bakteri populasyonu): %d ",toplam);

	return 0;
}

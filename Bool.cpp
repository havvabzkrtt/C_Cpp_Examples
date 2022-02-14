#include<stdio.h>
#include<stdbool.h>

int main () {

    int a;
    int b;
    char devam_mi;
    bool durum;
    
    do {

    printf("bir a sayisi gir:");
    scanf("%d",&a);
    
    printf("bir b sayisi gir:");
    scanf("%d",&b);
    
    if (a==0 && b==0) {
    	printf("1. durum icin sonuc: 0 ");
    	
	}
	
	else if (a==0 && b==1 ) {
		
		printf("2. durum icin sonuc: 0 ");
	}
	
	else if (a==1 && b==0) {
		printf("3. durum icin sonuc: 0 ");
		
	}
	
	else if (a==1 && b==1) {
		
		printf("4. durum icin sonuc: 1 ");
		
	}
	
	else {
		
		printf("Gecersiz sayi girdiniz.");
	}
	
	printf("Devam etmek ister misiniz?");
	scanf("%s",&devam_mi);
	
	if (devam_mi == 'E' ||  devam_mi == 'e'){
		
		bool durum = true;
	}
	
	else {
	    
	    bool durum = false;
	    printf("Sonlandirildi.");
	}
}
  while (durum);


return 0;
}



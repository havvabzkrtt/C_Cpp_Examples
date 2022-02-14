#include<stdio.h>
#include<math.h>

int main() {
	
	int matvize,matfinal;
	int fizikvize,fizikfinal;
	int kimyavize,kimyafinal;
	int biyolojivize,biyolojifinal;
    int turkcevize,turkcefinal; 
	float geometrikort;  
    int ders;
	int carp;
	char ad,soyad;

      printf("Adinizi ve soyadiniz giriniz:");
	  scanf("%s %s",&ad,&soyad);
	
	printf("Dersler:\n1:Matematik\n2:Fizik\n3:Kimya\n4:Biyoloji\n5:Turkce\n");
	printf("Ders seciniz:");
	scanf("%d",&ders);
	
	switch (ders) {
		case 1 : {
			     
			    printf("Matematik vize notunuz giriniz.");
		        scanf("%d",&matvize);
		         
		        if ( matvize>=50) {
		        	printf("Matematik final notunuzu giriniz.");
		        	scanf("%d",&matfinal);
		        
		         if(matfinal>=50) {
		         	
		            carp=matvize*matfinal;
	                geometrikort= sqrt(carp);
	                
		           	          if(geometrikort<50){
							     printf("Matematik dersinden ogrenci ortalamadan kalmistir."); }
							     
	                    	else {
	                    		printf("Matematik dersinden ogrenci gecmistir.");
							}
					}
				else if (matfinal<50){
						printf("Matematik dersinden ogrenci kalmistir.");
					}
				}
				else {
					printf("Ogrencinin final sinavina girme hakki yoktur.");
				}
	break; }
		
		case 2: {
			printf("Fizik vize notunuzu giriniz.");
		    scanf("%d",&fizikvize);
		         
		        if (fizikvize>=50) {
		        	printf("Fizik final notunuzu giriniz.");
		        	scanf("%d",&fizikfinal);
		        
		         if(fizikfinal>=50) {
		         	
		         	carp=fizikvize*fizikfinal;
	                geometrikort= sqrt(carp);
	                
		           	          if(geometrikort<50){
							      printf("Fizik dersinden ogrenci ortalamadan kalmistir."); }
							      
	                    	else {
	                    		printf("Fizik dersinden ogrenci gecmistir.");
							}
					}
				else if (fizikfinal<50){
						printf("Fizik dersinden ogrenci kalmistir.");
					}
				}
				else {
					printf("0grenci final sinavine girme hakki yoktur.");
				}
	
		break; }
		
		case 3:{
			    printf("Kimya vize notunuzu giriniz.");
		        scanf("%d",&kimyavize);
		         
		        if (kimyavize>=50) {
		        	printf("Kimya final notunuzu giriniz.");
		        	scanf("%d",&kimyafinal);
		        
		         if(kimyafinal>=50) {
		         	
		         	carp=kimyavize*kimyafinal;
	                geometrikort= sqrt(carp); 
	                
		           	          if(geometrikort<50){
							     printf("Ogrenci ortalamadan kalmistir."); }
							     
	                    	else {
	                    		printf("Kimya dersinden ögrenci gecmistir..");
							}
					}
				else if (kimyafinal<50){
						printf("Kimya dersinden ogrenci kalmistir.");
					}
				}
				else {
					printf("Ogrencinin final sinavina girme hakki yoktur.");
				}
	break;	}
	
		case 4: {
			printf("Biyoloji vize notunuzu giriniz.");
		    scanf("%d",&biyolojivize);
		    
		        if (biyolojivize>=50) {
		        	
		        	printf("Biyoloji final notunuzu giriniz.");
		        	scanf("%d",&biyolojifinal);
		        
		         if(biyolojifinal>=50) {
		         	
		         	carp=biyolojivize*biyolojifinal;
	                geometrikort= sqrt(carp);
	                
		           	          if(geometrikort<50){
							     printf("Ogrenci biyoloji dersinden ortalamadan kalmistir."); }
							     
	                    	else {
	                    		printf("Biyoloji dersinden ögrenci gecmistir.");
							}
					}
				else if (biyolojifinal<50){
						printf("Biyoloji dersinden ogrenci kalmistir.");
					}
				}
				else {
					printf("Ogrencinin final sinavýna girme hakki yoktur.");
				}
	
		break;} 
		
		case 5 :{
			printf("Turkce vize notunuzu giriniz.");
		    scanf("%d",&turkcevize);
		    
		        if (turkcevize>=50) {
		        	
		        	printf("Turkce final notunuzu giriniz.");
		        	scanf("%d",&turkcefinal);
		        
		         if(turkcefinal>=50) {
		         	
		         	carp=turkcevize*turkcefinal;
	                geometrikort= sqrt(carp);
	                
		           	          if(geometrikort<50){
							     printf("Turkce derinden ogrenci ortalamadan kalmýstýr."); }
							     
	                    	else {
	                    		printf("Turkce dersinden ogrenci gecmistir.");
							}
					}
				else if (turkcefinal<50){
						printf("Turkce dersinden ogrenci kalmistir.");
					}
				}
				else {
					printf("Ogrencinin final sinavina girme hakký yoktur.");
				}
	break;}
	
	
		default : {
			
		printf("Tekrar secim yapiniz.");
		
			break;
		}
	} 
	return 0;
}

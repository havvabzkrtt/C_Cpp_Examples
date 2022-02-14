#include<stdio.h>
#include<math.h>

int main ()  {
	
	float a;
    float b;
    float sonuc;
    int islem;
    
    
    printf("Bir a sayi giriniz:");
    scanf("%f",&a);
    
    printf("Bir b saysi giriniz:");
    scanf("%f",&b);
    
    printf("Bir islem seçiniz:\n 1:Toplama\n 2:Cikarma\n 3:Carpma\n 4:Bölme\n 5:Us Alma\n 6:Faktöriyel Alma");
    scanf("%d",&islem);
    
    switch (islem) {
    	
    	case 1: {
    		
    		sonuc=a+b;
    		printf("sonuc= %f",sonuc);
    		
			break;
		}
		
		case 2: {
			
			sonuc=a-b;
    		printf("sonuc= %f",sonuc);
    		
			break;
		}
		
		case 3: {
			
			sonuc=a*b;
    		printf("sonuc= %f",sonuc);
			
			break;
		}
		
		case 4: {
			
			sonuc=a/b;
    		printf("sonuc= %f",sonuc);
			
			break;
		}
	    
	    case 5: {
	    	
	    	sonuc=pow(a,b);
    		printf("sonuc= %f",sonuc);
	    		
			break;
		}
		
		case 6: {
			
			int c;
			int sonuc2=1;
			int i;
			
			printf("Bir c tamsayisi giriniz:");
			scanf("%d",&c);
			
			for (i=1; i<=c; i++) {
				
				sonuc2= sonuc2*i;
			}
			
			printf("sonuc2: %d",sonuc2);
			
			break;
		}
		
		default : {
			
			printf("Gecersiz secim yaptýnýz.");
			break;
		}
	}
    

return 0;
}

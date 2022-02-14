#include<stdio.h>
#include<math.h>
#define pi 3.14


int main () {
	
	float vo, vx, vy, tu, tc, aci, h=0 , X, g=9.8 , hmax, vox, voy, t, x, t1;
	int c,i,k;
	
	printf("Ilk hizi giriniz:");
	scanf("%f",&vo);
	
	printf("Atilan aciyi girniz:");
	scanf("%f",&aci);
	
	vox = vo * cos(aci*pi/180);
	voy = vo * sin(aci*pi/180);
	
	tc= voy/g;
	tu= tc*2;
	
	c = tu/0.01;
	
	float dizi[c][3];

	X= vox*tu;
	hmax= (voy*voy)/(2*g);
	
	k=0;
	t=0;
	t1=0;
	
	while (t<tu) {
		
		if( t<tc) {

			h= (voy*t)-(g*t*t)/2;
			vy= pow(voy,2)-(2*g*h);
			vy= pow(vy,(1/2));
		}
		
		else{
			
			h=hmax-(g*t1*t1)/2;
			vy= g*t1;
			t1 += 0.01;
		}
		
		vx == vox;
		
		x = vox*t;
		
		dizi[k][0]= t;
		
		t+=0.01;
		
		dizi[k][1] = h;
		dizi[k][2] = x;
		dizi[k][3] = vx;
		dizi[k][4] = vy;
		
		k++;
	}
	
	for(i=0; i<c; i++) {
		
		printf("t= %f  ",dizi[i][0]);
		printf("h= %f  ",dizi[i][1]);
		printf("x= %f ",dizi[i][2]);
		printf("vx= %f ",dizi[i][3]);
		printf("vy= %f\n",dizi[i][4]);
	}
	
    printf("vox: %f\n",vox);
    printf("voy: %f\n",voy);
    printf("tu: %f	tc: %f \n",tu,tc);
    printf("X: %f\n",X);
    printf("hmax: %f\n",hmax);
    printf("c = %d",c);
	
	return 0;
}

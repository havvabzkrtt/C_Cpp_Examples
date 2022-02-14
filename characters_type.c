#include<stdio.h>

int main() {
	
	
	char variable = 65;
	printf("%c",variable);      // There is "A" on the screen. Because of ASCII table.
	
	// size of character ==> 1 byte = 8 bits
    // range of charater ==> 	Unsigned : 0 to 255 , Signed = -128 to +127	
    
    // They are same
    char var1 = 128;
    printf("%c",var1);         // Ç
    
    char var2 = -128;
    printf("%c",var2);        // Ç
    
    
    // They are same
    char var3 = 129;
    printf("%c",var3);       // ü
    
    char var4 = -127;
    printf("%c",var4);      // ü
	
	    
    // printf("\a");    // Sistemdeki zili çalar. 
	
	
	// SUMMARY
	
	/*
	Size of character = 1 byte
	Signed character range = -128 to 128
	Unsigned character range = 0 to 255
	Negative values won't buy you any additional powers
	In traditional ASCII table, each character requires 7 bits
	In extended ASCII table, eah character utilize all 8 bits
	*/
	
	
	
	char rank[] = "deneme";
	printf("%c",rank[1]);      // e
	
	
	
	char name[20];
	printf("\n What is your name :");
	scanf("%s",&name);                    // NOT : scanf boþluða kadar alýr,boþluktan sonra almaz.
	
	printf("Name : %s",name);   
	
	
	
	
	
	
	
	
	
	
	return 0;
}

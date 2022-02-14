#include<stdio.h>
#include<limits.h>


int main () {
	
	// sizeof(short int) <= sizeof(int) <= sizeof(long int)
	printf("short int ==> %d \n",sizeof(short int));
	printf("int ==> %u \n",sizeof(int));           // %d = %u
	printf("long int ==> %d \n",sizeof(long int)); 
	
	
	
	int var1 = INT_MIN;    // You can use "INT_MIN" and "INT_MAX" with header of "#include<limits.h>".
	int var2 = INT_MAX;
	
	printf("Range of signed integer is from %u to %u \n",var1,var2);  
	
	
	// if first number is 0, it is signed integer           0111 ==> signed integer ==> +7
	// if first number is 1, it is unsigned integer         1111 ==> unsigned integer ==> -7
	
	// Signed hem pozitif hemde negatif deðerler barýndýran tiptir.
    // Unsigned ise sadece 0 ile alabildiði maksimum pozitif deðer barýndýran tiptir.
	
	
	unsigned int var3 = 0;
	unsigned int var4 = UINT_MAX;
	
	printf("Range of unsigned integer is from %d to %d \n",var3,var4);    // Use "%u" for unsigned value.
	 
	
	
	short int var5 = SHRT_MIN;
	short int var6 = SHRT_MAX;
	
	printf("Range of short signed integer is from %d to %d \n",var5,var6);
	
	
	short unsigned int var7 = 0;
	short unsigned int var8 = USHRT_MAX;
	
	printf("Range of short unsigned integer is from %u to %u \n",var7,var8);
	
	
	// "%d"  used to print "signed integer"
	// "%u"  used to print "unsigned integer"
	// "%ld" used to print "long integer" equivalent to "signed long integer"
	// "%lu" used to print "unsigned long integer"
	// "%ll" used to print "long long integer"
	// "%llu" used to print "unsigned long long integer"	
	// "int x == signed int x"  they are same
	
	signed int k = -3;
	printf("%u",k);
	
	return 0;
}

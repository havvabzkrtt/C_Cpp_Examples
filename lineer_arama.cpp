#include<iostream>
using namespace std;

int main(){
	
	
	int dizi[] = {3, 5, 6, 4, 7};
	
	int x; // aranan sayi
	cout << "Aramak istediginiz sayiyi giriniz: ";
	cin >> x;
	
	
	int i = 0;
	while(i <= 4 and x != dizi[i]){
		i += 1;
	}
	
	if (i<=4){
		cout << "Aranan sayinin indisi: " << i << endl; 
	}
	else{
		cout << "Aranan sayi listede bulunmamaktadir.." << endl;
	}
	
	
	return 0;
}

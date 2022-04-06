#include<iostream>
using namespace std;

int main() {
	
	int a[]={3,2,4,1,5};
	int temp;
	
	
	int toplamBoyut=sizeof(a);
	int turBoyutu=sizeof(*a);
	
	int elemanSayisi=toplamBoyut/turBoyutu;
	cout << << "Eleman sayisi: "<< elemanSayisi << endl;
	
	
	for(int i=0; i< elemanSayisi-2; i++){
		for(int j=0; j< elemanSayisi-2; j++){
			if ( a[j]>a[j+1] ){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	cout << "Sýrali dizi = " ;
	for (int i=0; i< elemanSayisi; i++){
		cout << a[i] << " ";
	}
	
	return 0;
}

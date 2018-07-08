#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	system("color f0");
	char kalimat[20], terbalik[20];
	int size, i=0;
	
	//deklarasi pointer
	char *ptr = kalimat;
	char *tbk = terbalik;
	
	cout<<"\n\tKetik teks disini : ";
	gets(ptr);
	
	//menghitung panjang karakter teks
	size = strlen(kalimat);
	int j = size;
	
	//perulangan membalikkan teks
	for(j=size-1;j>=0;j--)
	{
		tbk[i]=ptr[j];
		i++;
	}
	
	//menampilkan teks
	cout<<"\n\tTeks sebelum terbalik  : "<<ptr<<endl;
	cout<<"\n\tTeks setelah terbalik  : "<<tbk<<endl;
}

#include <iostream>
#include <conio.h>

using namespace std;

main ()
{
	system("color f0");
	int nilai;
	
	cout<<"\n";
	cout<<"Masukan nilai Anda : "; 
	cin >> nilai;
	cout<<"\n";
	
	if(nilai >= 80)
	{
		cout<<"Nilai Anda : " << nilai;
		cout<<"\n";
		cout<<"Grade      : A ";
		cout<<"\n";
		cout<<"Keterangan : LULUS";
	}
	else if(nilai >= 70 )
	{
		cout<<"Nilai Anda : " << nilai;
		cout<<"\n";
		cout<<"Grade      : B ";
		cout<<"\n";
		cout<<"Keterangan : LULUS";
	}
	
	else if(nilai >= 60 )
	{
		cout<<"Nilai Anda : " << nilai;
		cout<<"\n";
		cout<<"Grade      : C ";
		cout<<"\n";
		cout<<"Keterangan : LULUS";
	}
		
	else if(nilai >= 50 )
	{
		cout<<"Nilai Anda : " << nilai;
		cout<<"\n";
		cout<<"Grade      : D ";
		cout<<"\n";
		cout<<"Keterangan : LULUS";
	}
	
	else
	{
		cout<<"Nilai Anda : " << nilai;
		cout<<"\n";
		cout<<"Grade      : E ";
		cout<<"\n";
		cout<<"Keterangan : TIDAK LULUS";
	}
	
	getch();
}



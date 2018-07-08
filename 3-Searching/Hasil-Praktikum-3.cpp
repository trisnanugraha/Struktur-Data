/*
nama :	Trisna Nugraha
nim  :	20170801209
*/

#include <iostream>
#include <conio.h>
using namespace std;

void header()
{
	cout<<"\t+======================+\n";
	cout<<"\t+   Program Pencarian  +\n";
	cout<<"\t+======================+\n\n";
}

void error()
{
	cout<<"\n\n\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
	cout<<"\n\t!                   PILIHAN TIDAK TERSEDIA                   !\n";
	cout<<"\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n";
	cout<<"\n\tTekan sembarang tombol keyboard untuk kembali ke menu utama...";
}

int *inputData(int jml)
{
	int i,*arr = new int[jml];
	
	cout<<endl;
	
	for(i=0;i<jml;i++)
	{
		cout<<"\tMasukan data["<<i<<"] : ";
		cin>>arr[i];
	}
	return arr;
}

void sequentialSearch()
{
	int i=0,jml,cari,flag=0;
	
	awal:
	
	system("cls");
	cout<<"\n\tSequential Search";
	cout<<"\n\t----------------------\n\n";
	
	cout<<"\tMasukan jumlah data : ";
	cin>>jml;
	
	int *ptr = inputData(jml);
	cout<<"\t------------------------\n";
	cout<<"\n\tData yang dicari : ";
	cin>>cari;
	
	do
	{
		if(ptr[i]==cari)
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
		}
		i++;
	}
	while(i<jml);
	
	cout<<"\t------------------------\n";
	if(flag==1)
	{
		cout<<"\n\tDATA DITEMUKAN";
		cout<<"\n\n\tData yang dicari berada pada index ke-"<<i;
	}
	else if(flag==0)
	{
		cout<<"\n\tDATA TIDAK DITEMUKAN";
	}
	
	cout<<"\n\n\n\tTekan sembarang tombol keyboard untuk kembali ke menu utama...";
	getch();
}

void binarySearch()
{
	int i,kiri=0,kanan,tengah,cari,flag=0,jml;
	
	system("cls");
	cout<<"\n\tBinary Search";
	cout<<"\n\t----------------------\n";
	cout<<"\n\tPastikan data masukan berurutan\n\n\n";
	
	cout<<"\tMasukan jumlah data : ";
	cin>>jml;
	
	int *ptr = inputData(jml);
	cout<<"\t------------------------\n";
	cout<<"\n\tData yang dicari : ";
	cin>>cari;
	
	kanan=jml-1;
	tengah=(kiri+kanan)/2;
	
	while(kiri<=tengah)
	{
		if(cari==ptr[tengah])
		{
			flag=1;
			break;
		}
		else if(cari<ptr[tengah])
		{
			kanan=tengah-1;
		}
		else
		{
			kiri=tengah+1;
		}
		tengah=(kiri+kanan)/2;
	}
	
	cout<<"\t------------------------\n";
	if(flag==1)
	{
		cout<<"\n\tDATA DITEMUKAN";
		cout<<"\n\n\tData yang dicari berada pada index ke-"<<tengah;
	}
	else if(flag==0)
	{
		cout<<"\n\tDATA TIDAK DITEMUKAN";
	}
	
	cout<<"\n\n\n\tTekan sembarang tombol keyboard untuk kembali ke menu utama...";
	getch();
}

void menu()
{
	char pilihan;
	
	awal:
	system("cls");
	
	header();
	cout<<"\tPilihan program :\n\n";
	cout<<"\t1) Sequential Search\n";
	cout<<"\t2) Binary Search\n";
	cout<<"\t3) Keluar\n";
	cout<<"\t-------------------------\n\n";
	cout<<"\tSilakan pilih salah satu : ";
	cin>>pilihan;
	
	switch(pilihan)
	{
		case '1':
			{
				sequentialSearch();
				break;
			}
		
		case '2':
			{
				binarySearch();
				break;
			}
			
		case '3':
			{
				exit (0);
			}
		
		default:
			{
				system("cls");
				error();
				getch();
				goto awal;
			}
	}
}

int main()
{
	system("color f0");
	awal:
	menu();
	goto awal;
}

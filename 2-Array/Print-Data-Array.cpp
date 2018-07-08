/*
nama : Trisna Nugraha
nim  : 20170801209
*/

#include <iostream>
#include <conio.h>
using namespace std;

//function untuk menampilkan nama hari dalam bahasa Indonesia
void hari()
{
	int i;
	string hari[]={"Senin","Selasa","Rabu","Kamis","Jumat","Sabtu","Minggu"};
	
	cout<<endl;
	cout<<"\t";
	for(i=0;i<7;i++)
	{
		cout<<hari[i];
		if(i<6)
		{
			cout<<", ";
		}
	}
	cout<<endl;
}

//function untuk menampilkan nama hari dalam bahasa Inggris
void day()
{
	int i;
	string day[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	
	cout<<endl;
	cout<<"\t";
	for(i=0;i<7;i++)
	{
		cout<<day[i];
		if(i<6)
		{
			cout<<", ";
		}
	}
	cout<<endl;
}

//function untuk menampilkan menu pilihan
void menu()
{
	char pilihan;
	reset:
	system("cls");
	cout<<"\tProgram Menampilkan Nama Hari\n\n";
	cout<<"\t1) Nama hari dalam bahasa Indonesia\n";
	cout<<"\t2) Nama hari dalam bahasa Inggris\n";
	cout<<"\t3) Keluar\n\n";
	cout<<"\t-------------------------------------\n";
	cout<<"\tSilakan pilih salah satu : ";
	cin>>pilihan;
	
	switch(pilihan)
	{
		case '1':
			{
				hari();
				getch();
				goto reset;
				break;
			}
		case '2':
			{
				day();
				getch();
				goto reset;
				break;
			}
		case '3':
			{
				exit(0);
			}
		default:
			{
				cout<<"\n\t!!!--Pilihan tidak tersedia--!!!";
				getch();
				goto reset;
			}
	}
}

int main()
{
	system("color f0");
	menu();
	getch();
}

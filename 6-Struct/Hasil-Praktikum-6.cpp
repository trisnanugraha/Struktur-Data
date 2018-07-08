#include <iostream>
#include <conio.h>

using namespace std;

typedef struct
	{
		char nama[20];
		int jam;
	}kerja;

int gajiPokok(int x)
{
	return 50000*x;
}

int lembur(int y)
{
	return 15*50000*y;
}

int main()
{
	system("color f0");
	kerja kj;
	
	char pilih;
	int sisa=0, pokok=7, totalAwal, gajiLembur, totalAkhir;
	
	do
	{
		system("cls");
		cout<<"\n\tProgram Gaji Harian";
		cout<<"\n\t-----------------------------------------------------------";
		cout<<"\n\n\tMenu Pilihan :";
		cout<<"\n\t1) Input Data Karyawan";
		cout<<"\n\t2) Cetak Slip Gaji";
		cout<<"\n\t3) Keluar";
		cout<<"\n\n\tMasukkan pilihan : ";
		cin>>pilih;
		cout<<"\n\t-----------------------------------------------------------";
		
		switch (pilih)
		{
			case '1':
				{
					cout<<"\n\tMasukkan Nama		  : ";
					cin>>kj.nama;
					cout<<"\tMasukkan Jumlah Jam Kerja : ";
					cin>> kj.jam;
					break;
				}
				
			case '2':
				{
					if(kj.jam >= 8)
					{
						sisa=kj.jam-7;
						totalAwal=gajiPokok(pokok);
						gajiLembur=lembur(sisa);
					}
					else
					{
						totalAwal=gajiPokok(kj.jam);
						gajiLembur=lembur(0);
					}
					
					totalAkhir= totalAwal+gajiLembur;
					
					cout<<"\n\tNama Anda        : "<<kj.nama;
					cout<<"\n\tTotal Jam Kerja  : "<<kj.jam<<" Jam";
					cout<<"\n\tTotal Jam Lembur : "<<sisa<<" Jam";
					cout<<"\n\t*Jam Lembur = Total Jam Kerja - 7";
					cout<<"\n\n\tRincian :\n";
					cout<<"\n\t\tGaji Pokok  (Rp  50000/Jam)  : Rp "<<totalAwal;
					cout<<"\n\t\tGaji Lembur (Rp 750000/Jam)  : Rp "<<gajiLembur;
					cout<<"\n\n\t\t\t\t\t\tTOTAL : Rp "<<totalAkhir;
					
					getch();
					break;
				}
				
			case '3':
				{
					exit(0);
				}
		}
	}
	while(pilih !=3);
}

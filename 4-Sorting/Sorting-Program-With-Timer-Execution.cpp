#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <chrono>

using namespace std;

int size,i,j;
long dataAcak[10000000],dataCopy[10000000];

void swapData(int a, int b)
{
	int temp;
	temp=dataAcak[a];
	dataAcak[a]=dataAcak[b];
	dataAcak[b]=temp;
}

void randomData()
{
	system("cls");
	cout<<"\tRandom Data";
	cout<<"\n\t------------------\n";
	for(i=0;i<size;i++)
	{
		dataAcak[i]=dataCopy[i];
	}
	cout<<"\n\tRandom Data telah selesai...!\n";
	cout<<"\n\n\n\tTekan sembarang tombol keyboard untuk kembali ke menu utama...";
	getch();
}

void inputData()
{
	int random;
	system("cls");
	cout<<"\tInput Data";
	cout<<"\n\t------------------\n";
	cout<<"\n\tSilakan masukan jumlah data : ";
	cin>>size;
	cout<<endl;
	
 	srand(time(0));
	for(i=0;i<size;i++)
	{
		random=rand() % size+1;
		dataAcak[i]=random;
		dataCopy[i]=dataAcak[i];
	}
	cout<<"\n\n\n\tTekan sembarang tombol keyboard untuk kembali ke menu utama...";
	getch();
}

void printData()
{
	system("cls");
	cout<<"\tPrint Data";
	cout<<"\n\t------------------\n";
	cout<<"\n\tData : \n";
	cout<<"\t";
	for(i=0;i<size;i++)
	{
		cout<<dataAcak[i]<<" ";
		if(i%20==0)
		{
			cout<<"\n\t";
		}
	}
	cout<<"\n\n\n\tTekan sembarang tombol keyboard untuk kembali ke menu utama...";
	getch();
}

void quickSort(int kiri, int kanan)
{	
    int tengah;
    
    i=kiri;
    j=kanan;
    tengah=dataAcak[(kiri+kanan)/2];
    
	do
    {
       while(dataAcak[i] < tengah) i++;
       while(dataAcak[j] > tengah) j--;
       if (i <= j)
       {
            swapData(i,j);
            i++;
            j--;
       }
    }
    while(i < j);
      
    if(kiri < j)
	{
		quickSort(kiri, j);
	}
      
	if(i < kanan) 
	{
		quickSort(i, kanan);
	}
}

void menu()
{
	char pilihan;
	
	awal:
	system("cls");

	cout<<"\tPilihan program :\n\n";
	cout<<"\t1) Input Data\n";
	cout<<"\t2) Print Data\n";
	cout<<"\t3) Random Data\n";
	cout<<"\t4) Quick Sort\n";
	cout<<"\t5) Exit\n";
	cout<<"\t-------------------------\n\n";
	cout<<"\tSilakan pilih salah satu : ";
	cin>>pilihan;
	
	switch(pilihan)
	{
		case '1':
			{
				inputData();
				break;
			}
		
		case '2':
			{
				printData();
				break;
			}
			
		case '3':
			{
				randomData();
				break;
			}	
		
		case '4':
			{
				system("cls");
				cout<<"\tQuick Sort";
				cout<<"\n\t------------------\n";
				//penghitung waktu eksekusi untuk quick sort
				auto start = chrono::steady_clock::now();
				quickSort(0, size-1);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				cout<<"\n\n\tTime Taken : "<<chrono::duration <double, milli> (diff).count()<<" ms"<<endl;
				//akhir dari execution time
				cout<<"\n\n\tQuick sort telah selesai...!";
				cout<<"\n\n\n\tTekan sembarang tombol keyboard untuk kembali ke menu utama...";
				getch();
				break;
			}
		
		case '5':
			{
				exit(0);
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



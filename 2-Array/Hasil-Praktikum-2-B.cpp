#include <iostream>
#include <conio.h>
using namespace std;

short size=100;

void angka()
{
	short i=0,j=1,k=0,angka[100];
	
	cout<<"\tDeretan angka dari 1 hingga 100 : "<<endl<<endl;
	do
	{
		if(j>0)
		{
			angka[i]=j;
			i++;
			k++;
		}
		j++;
	}
	while(j<=size);
	
	cout<<"\t";
	for(i=0;i<k;i++)
	{
		cout<<angka[i]<<" ";
		
		if(i==0)
		{
			continue;
		}
		else if(i%10==0)
		{
			cout<<endl<<"\t";
		}
	}
	
	cout<<"\n\t-----------------------------";
	
	cout<<endl<<endl;
	
}

int hitung()
{
	short index=0,nilai=1,counter=0,ganjil[100],jmlGanjil=0,total=0;
	
	cout<<"\tDeret angka ganjil dari data di atas adalah : "<<endl<<endl;
	do
	{
		if(nilai%2==1)
		{
			ganjil[index]=nilai;
			index++;
			counter++;
		}
		nilai++;
	}
	while(nilai<=size);
	
	cout<<"\t";
	for(index=0;index<counter;index++)
	{
		cout<<ganjil[index]<<" ";
		
		if(index==0)
		{
			continue;
		}
		else if(index%10==0)
		{
			cout<<endl<<"\t";
		}
	}
	
	cout<<"\n\t-----------------------------";
	
	cout<<endl<<endl;
	
	
	cout<<"\tDeretan angka ganjil yang habis dibagi 5 : \n\n";
	cout<<"\t";
	for(index=0;index<counter;index++)
	{
		if(ganjil[index]%5==0)
		{
			cout<<ganjil[index]<<" ";
			total=total+ganjil[index];
			jmlGanjil++;
		}
	}
	cout<<"\n\n\tTotal angka ganjil : "<<jmlGanjil;
	cout<<"\n\t-----------------------------";
	cout<<endl<<endl;
	cout<<"\n\tnilai rata-rata bilangan ganjil yang habis dibagi 5 adalah "<<total/jmlGanjil;
	
	
}

void pilihanAngka()
{
	char pilih;
	
	switch(pilih)
	{
		case '1':
			{
				angka();
				system("cls");
			}
			
		case '2':
			{
				hitung();
				system("cls");
			}
		
		case '3':
			{
				exit(0);
			}
		
		default:
			{
				cout<<"\tPilihan tidak tersedia";	
			}			
	}
}


int main()
{
	system("color f0");
	angka();
	hitung();
	getch();
}

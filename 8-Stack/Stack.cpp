#include <iostream>
#include <conio.h>

//inisialisasi maks. jumlah data
#define max 20

using namespace std;

//inisialisasi stack
struct tumpukan
{
 	int atas;
	int data[max];
}t;

void awal()
{
 	t.atas=-1;
}

//kondisi saat stack kosong
int kosong()
{
 	if(t.atas==-1)
    	return 1;
   else
    	return 0;
}

//kondisi saat stack penuh
int penuh()
{
 	if(t.atas==max-1)
    	return 1;
   else
    	return 0;
}

//operasi push data
void input(int data)
{
 	if(kosong()==1)
    {
		t.atas++;
       	t.data[t.atas]=data;
       	cout<<"\n\n\tData "<<t.data[t.atas]<<" masuk ke stack";
	}
   
   	else if(penuh()==0)
	{
		t.atas++;
       	t.data[t.atas]=data;
       	cout<<"\n\n\tData "<<t.data[t.atas]<<" masuk ke stack";
	}

   else
       cout<<"\n\n\tTumpukan penuh !";
}

//operasi pop data
void hapus()
{
   	if(kosong()==0)
	{
      	cout<<"\n\n\tData teratas sudah terambil";
   		t.atas--;
   	}
   	else
   		cout<<"\n\n\tData kosong !";
}

//operasi print data
void tampil()
{
 	if(kosong()==0)
   	{
   		cout<<endl;
	   	for(int i=t.atas;i>=0;i--)
    	{
			cout<<"\n\tTumpukan ke "<<i<<" = "<<t.data[i];
		}
    }
   	else
   		cout<<"\n\n\tTumpukan kosong !";
}

//operasi clear data
void bersih()
{
 	t.atas=-1;
	cout<<"\n\n\tTumpukan kosong !";
}

int main()
{	
	system("color f0");
	int pil,data;
	awal();
	do
	{
		system("cls");
		cout<<"\n\n\tPraktikum 7 - Stack";
		cout<<"\n\n\t\t1. Input Data";
		cout<<"\n\t\t2. Hapus Data";
		cout<<"\n\t\t3. Tampil Data";
		cout<<"\n\t\t4. Kosongkan Stack";
		cout<<"\n\t\t5. Keluar";
		cout<<"\n\n\tMasukkan pilihan : ";
		cin>>pil;
		switch(pil)
 		{
		 	case 1:
		 		{
		 			cout<<"\n\n\tMasukkan data = ";
					cin>>data;
	       			input(data);
	       			getch();
	           		break;
				}
			 	
    		case 2:
    			{
    				hapus();
	    			getch();
	        		break;
				}
				
    		case 3:
    			{
    				tampil();
					getch();
	        		break;
				}
				
    		case 4:
    			{
    				bersih();
					getch();
	        		break;
				}
    	}
		     
	}while(pil!=5);}
	
	

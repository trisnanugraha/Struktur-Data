#include <iostream>
#include <conio.h>
#define MAX 20 //maksimum data queue
using namespace std;

//Deklarasi struct antrian
struct Queue {
	int front, rear, data[MAX];
}Q;

//cek apakah antrian penuh
bool isFull() {
	return Q.rear == MAX;
}

//cek apakah antrian kosong
bool isEmpty() {
	return Q.rear == 0;
}

//Menampilkan Queue
void printQueue() {
	if (isEmpty()) {
    cout << "\n\tAntrian kosong"<<endl;
	}
	else {
		cout << "\n\tQUEUE : ";
		for (int i = Q.front; i < Q.rear; i++)
		//menambahkan koma jika data tidak terdapat di antrian pertama
			cout << Q.data[i] << ((Q.rear-1 == i) ? "" : ",");
		cout << endl;
  }
}

//manambahkan data ke antrian
void enqueue() {
	if (isFull())
	{
		cout << "\n\tAntrian penuh!"<<endl;
	}
	else {
		int data;
		//menambahkan data ke antrian
		cout << "\n\tMasukkan Data : ";cin >> data;
		Q.data[Q.rear] = data;
		//menempatkan tail pada elemen data terakhir yang ditambahkan
		Q.rear++;
		cout << "\n\tData ditambahkan\n";
		printQueue();
	}
}

// mengambil data dari antrian
void dequeue() {
	if (isEmpty())
	{
		cout << "\n\tAntrian masih kosong"<<endl;
	}
	else{
		cout << "\n\tMengambil data \"" << Q.data[Q.front] << "\"..." << endl;
		//menggeser antrian data ke head
		for (int i = Q.front; i < Q.rear; i++)
			Q.data[i] = Q.data[i + 1];
		//menempatkan tail pada data terakhir yang digeser
		Q.rear--;
		printQueue();
	}
}

int main() {
	system("color f0");
	int choose;
	do{
		//Tampilan menu
		system("cls");
		cout << "\n\t-------------------\n"
			<< "\t   Menu Pilihan\n"
			<< "\t-------------------\n"
			<< "\t [1] Enqueue \n"
			<< "\t [2] Dequeue\n"
			<< "\t [3] Print\n"
			<< "\t [4] Exit \n\n"
			<< "\t-------------------\n"
			<< "\tMasukkan pilihan : "; cin >> choose;
		switch (choose)	{
		case 1:
			enqueue();
			getch();
			break;
		case 2:
			dequeue();
			getch();
			break;
		case 3:
			printQueue();
			getch();
			break;
		case 4:
			exit(0);
		default:
			cout << "\n\tPilihan tidak tersedia";
			getch();
			break;
		}
	} while (choose !=4);
}



#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int key, value;

struct linked_list
{
    int number;
    struct linked_list *next;
};

typedef struct linked_list node;
node *head=NULL, *last=NULL;

void create_linked_list();
void print_linked_list();
void insert_at_last(int value);
void insert_at_first(int value);
void insert_after(int key, int value);
void delete_item(int value);
void search_item(int value);
void pilihan(int x);
void menu();

int main()
{
	system("color f0");
    int pil=0;
    while( pil != 6)
    {
    	system("cls");
    	cout<<"\tProgram Single Linked List\n";
		cout<<"\t---------------------------\n\n";
		cout<<"\t1) Input Data\n";
		cout<<"\t2) Insert Data\n";
		cout<<"\t3) Search Data\n";
		cout<<"\t4) Print Data\n";
		cout<<"\t5) Delete Data\n";
		cout<<"\t6) Keluar\n";
		cout<<"\n\tMasukkan pilihan : ";
		cin>>pil;
		pilihan(pil);
	}
    return 0;
}

void pilihan(int x)
{
	switch(x)
	{
		case 1:
			{
				cout<<"\n\tBuat Linked List\n";
				create_linked_list();
				break;
			}
			
		case 2:
			{
				int pilSisip;
				cout<<"\n\t1) Sisip data dari depan\n";
				cout<<"\t2) Sisip data dari belakang\n";
				cout<<"\t3) Sisip data dari data tertentu\n";
				cout<<"\n\n\tSilakan pilih : ";
				cin>>pilSisip;
				
				switch(pilSisip)
				{
					case 1:
						{
							//Input data dari depan
						    cout<<"\n\n\tMasukkan Data : \n\t";
						    cin>>value;
						    insert_at_first(value);
						    print_linked_list();
						    getch();
						    break;
						}
					
					case 2:
						{
							//Input data dari belakang
						    cout<<"\n\n\tMasukkan Data : \n\t";
						    cin>>value;
						    insert_at_last(value);
						    print_linked_list();
						    getch();
						    break;
						}
						
					case 3:
						{
							//Sisip data
							print_linked_list();
						    cout<<"\n\n\tMasukkan data yang telah ada, Data baru akan disisipkan setelahnya \n\t";
						    cin>>key;
						    cout<<"\n\tData Baru setelah "<<key<<" \n\t";
						    cin>>value;
						    insert_after(key, value);
		    				print_linked_list();
		    				getch();
		    				break;
						}
				}
				break;
			}
			
		case 3:
			{
				//Fungsi cari data
				    cout<<"\n\tData yang akan dicari \n\t";
				    cin>>value;
				    search_item(value);
				    getch();
				    break;
			}
			
		case 4:
			{
					print_linked_list();
					getch();
					break;
			}
			
		case 5:
			{
				//Delete value from List
					print_linked_list();
				    cout<<"\n\n\tData yang akan dihapus \n\t";
				    cin>>value;
				    delete_item(value);
				    print_linked_list();
				    getch();
				    break;
			}
	}
}

void create_linked_list()
{
    int val;

    while(1)
    {
        cout<<"\n\tMasukkan Data. (Ketik -1 untuk Keluar)\n\t";
        cin>>val;

        if(val==-1)
            break;

        insert_at_last(val);
    }
}

void insert_at_last(int value)
{
    node *temp_node;
    temp_node = (node *) malloc(sizeof(node));

    temp_node->number=value;
    temp_node->next=NULL;

    //Untuk Elemen Pertama
    if(head==NULL)
    {
        head=temp_node;
        last=temp_node;
    }
    else
    {
        last->next=temp_node;
        last=temp_node;
    }

}

void insert_at_first(int value)
{
    node *temp_node = (node *) malloc(sizeof(node));

    temp_node->number=value;
    temp_node->next = head;

    head = temp_node;
}

void insert_after(int key, int value)
{
    node *myNode = head;
    int flag = 0;

    while(myNode!=NULL)
    {
        if(myNode->number==key)
        {
            node *newNode = (node *) malloc(sizeof(node));
            newNode->number = value;
            newNode->next = myNode->next;
            myNode->next = newNode;

            cout<<"\n\t"<<value<<" disisipkan setelah "<<key<<" \n";

            flag = 1;

            break;
        }
        else
            myNode = myNode->next;
    }

    if(flag==0)
        cout<<"\n\tData tidak ada!\n";
}

void delete_item(int value)
{
    node *myNode = head, *previous=NULL;
    int flag = 0;

    while(myNode!=NULL)
    {
        if(myNode->number==value)
        {
            if(previous==NULL)
                head = myNode->next;
            else
                previous->next = myNode->next;

            cout<<"\n\t"<<value<<" telah terhapus!\n";

            flag = 1;
            break;
        }

        previous = myNode;
        myNode = myNode->next;
    }

    if(flag==0)
        cout<<"\n\tData tidak ada!\n";
}

void search_item(int value)
{
    node *searchNode = head;
    int flag = 0;

    while(searchNode!=NULL)
    {
        if(searchNode->number==value)
        {
            cout<<"\n\t"<<value<<" ada dalam list.\n";
            flag = 1;
            break;
        }
        else
            searchNode = searchNode->next;
    }
    if(flag==0)
        cout<<"\n\tData tidak ada!\n";
}

void print_linked_list()
{
    cout<<"\n\tData dalam Linked list\n\t";
    node *myList;
    myList = head;
    while(myList!=NULL)
    {
        cout<<myList->number<<" ";
        myList = myList->next;
    }
}



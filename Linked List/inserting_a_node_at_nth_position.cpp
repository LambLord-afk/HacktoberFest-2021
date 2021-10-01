#include <bits/stdc++.h> 
using namespace std; 

// A linked list node 
class Node 
{ 
public: 
	int data; 
	Node* next; 
}; 
//function to create a node 
Node* newnode(int data)
{
    Node* temp=new Node();
    temp->data=data;
    temp->next=NULL;
    return  temp;
}
//taking head as global variable so that we need not top pass everytime as a reference 
//in the functions
Node* head;
//function to insert the given data at nth position
void insert(int data,int n)
{
    Node* temp1=newnode(data);
    if(n==1)
    {
        temp1->next=head;
        head=temp1;
        return;
    }
    Node* temp2=head;
    for(int i=0;i<n-2;i++)
    {
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
}
//function to print the linked list
void print()
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    head=NULL;//denotes empty list
    int data,x,x1,n;
    cout<<"Enter the 1st value of your list:";
    cin>>data;
    insert(data,1);
    cout<<"Enter total numbers you want to insert in the list:";
     cin>>x;
     for(int i=1;i<=x;i++)
     {
         cout<<"Enter the value and position where you want it to be inserted: ";
         cin>>x1>>n;
         insert(x1,n);
         cout<<"The modified list after inserting the value is:\n";
         print();
         cout<<"\n";
     }
     
}
 

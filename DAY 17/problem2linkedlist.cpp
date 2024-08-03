/*problem-2
given the head of a sorted linked list , delete all duplicate such that each appears only once , return the linked list sorted as well.*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct linkedlist{
    int data;
    linkedlist *next;
};
int main(){
    linkedlist *head=new linkedlist();
    linkedlist *second=new linkedlist();
    linkedlist *third=new linkedlist();
    linkedlist *fourth=new linkedlist();
    linkedlist *fifth=new linkedlist();
    linkedlist *sixth=new linkedlist();
    linkedlist *seventh=new linkedlist();
    linkedlist *eighth=new linkedlist();
    linkedlist *ninth=new linkedlist();
    linkedlist *tenth=new linkedlist();
    head->data=1;
    head->next=second;
    second->data=1;
    second->next=third;
    third->data=2;
    third->next=fourth;
    fourth->data=3;
    fourth->next=fifth;
    fifth->data=3;
    fifth->next=sixth;
    sixth->data=4;
    sixth->next=seventh;
    seventh->data=5;
    seventh->next=eighth;
    eighth->data=5;
    eighth->next=ninth;
    ninth->data=6;
    ninth->next=tenth;
    tenth->data=7;
    tenth->next=NULL;




    linkedlist *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    linkedlist *temp1=head;
    while(temp1->next!=NULL){
        if(temp1->data==temp1->next->data){
            temp1->next=temp1->next->next;
        }
        else{
            temp1=temp1->next;
        }
    }
    linkedlist *temp2=head;
    while(temp2!=NULL){
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }
    return 0;
    
}
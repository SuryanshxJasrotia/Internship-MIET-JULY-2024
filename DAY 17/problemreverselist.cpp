/*reverse the data in linked list while keeping the address list same i.e only data element are shifted to new address*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct linkedlist{
    int data;
    linkedlist *next;
};
// int reverse(linkedlist *head){

// }

int main(){
    linkedlist *head=new linkedlist();
    linkedlist *second=new linkedlist();
    linkedlist *third=new linkedlist();
    linkedlist *fourth=new linkedlist();
    linkedlist *fifth=new linkedlist();


    head->data=1;
    head->next=second;
    second->data=1;
    second->next=third;
    third->data=2;
    third->next=fourth;
    fourth->data=3;
    fourth->next=fifth;
    fifth->data=3;
    fifth->next=NULL;

    // reverse(head);
    linkedlist *ptr=head;
    while(ptr->next!=NULL){
        cout<<ptr->data<<" ";
    }
    cout<<endl;
    return 0;

}
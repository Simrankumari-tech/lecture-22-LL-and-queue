#include<iostream>
using namespace std;
class node{
public :
int data ;
node* next ;
node(int d){
    data = d;
    next = NULL;
}
};
int length(node *head){
    int cnt = 0;
    while(head != NULL){
        cnt ++ ;
        head = head->next;
    }
    return cnt;
}
void insertATend(node*&head , node*&tail , int d){
if(head == NULL){
    node*n = new node(d);
    head = tail = n;
}
else{
    node*n = new node(d);
    tail->next = n;
    tail = n;
}
}
void printll(node* head){
    while(head!=NULL){
        cout <<head->data << " ->" ;
        head = head ->next;
    }
cout << "NULL";
}
void reversell(node*&head , node*&tail){
    node*c =head , *p= NULL ,*n;
    while(c!=NULL){
        n = c->next;
        c->next = p;
        p = c;
        c= n;
    }
    swap (head ,tail);
}
int main(){
     
    node*head= NULL , *tail = NULL;
    insertATend(head , tail , 1);
    insertATend(head , tail , 2);
    insertATend(head , tail , 3);
    insertATend(head , tail , 4);
    insertATend(head , tail , 5);
    printll(head);
    cout << endl;
    reversell(head , tail);
     printll(head);

     return 0;


}

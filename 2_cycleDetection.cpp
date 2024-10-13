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
void breakcycle(node*head , node*f){
    node*s = head;
    node*fp = head;
    while(fp->next !=f){
        fp = fp->next;
    }
    while(f!=s){
        fp= f;
        f= f->next;
        s= s->next;
    }
    fp->next =NULL;
}
bool iscyclic(node*head){
    node*f = head , *s = head;
    while(f!=NULL and f->next != NULL){
        f = f->next->next;
        s = s->next;
        if(f==s){
            breakcycle(head , f);
            return true;
        }
    }
        return false;
    
}
int main(){
     
    node*head= NULL , *tail = NULL;
    insertATend(head, tail, 1);
	insertATend(head, tail, 2);
	insertATend(head, tail, 3);
	insertATend(head, tail, 4);
	insertATend(head, tail, 5);
	insertATend(head, tail, 6);
	insertATend(head, tail, 7);
	insertATend(head, tail, 8);
	insertATend(head, tail, 9);
	insertATend(head, tail, 10);
	insertATend(head, tail, 11);
	insertATend(head, tail, 12);


	tail->next = head->next->next->next->next->next->next;

	if (iscyclic(head)) {
		cout << "Cycle Hai\n";
		printll(head);
	}
	else {
		printll(head);
	}




	return 0;
}
    
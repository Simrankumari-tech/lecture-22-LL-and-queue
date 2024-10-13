#include<bits/stdc++.h>
using namespace std;
class node{
    public :
    int data;
    node*next ;
    node(int d){
        data = d;
        next = NULL;
    }
};
class llqueue{
    private :
    node*head , *tail ;
    public :
    llqueue(){
        head = NULL;
        tail =NULL;
    }
    void push( int d){
        if(head == NULL){
            node*n = new node(d);
            head = tail =n;
        }
        else{
            node*n = new node(d);
            tail ->next = n;
            tail = n;
        }
    }
    void pop(){
        if(head == NULL) return ;
        else if(head ->next == NULL){
            delete head;
            head = tail = NULL;       
            }
    
    else{
        node*temp = head;
        head = head->next ;
        delete temp;
    }
    }
    int front( ){
        return head->data ;
    }
    bool empty(){
        return head== NULL;
    }
};
int main(){
 llqueue Q;
    Q.push(1);
    Q.push(8);
    Q.push(6);
    Q.push(9);
    Q.push(56);
while (!Q.empty()) {
		cout << Q.front() << " ";

		Q.pop();
	}
	cout << endl;

	return 0;
}

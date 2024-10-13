#include<iostream>
#include<stack>
using namespace std;
void push_bottom(stack<int> &s , int topelement){
    // base case
if(s.empty()){
    s.push(topelement);
    return ;
}
    // recursive case
     int top = s.top();
    s.pop();
   
    push_bottom(s, topelement);
    s.push(top);

}


void reversestack (stack<int>&s){
    // base caes
    if(s.empty()) return ;

    // recursion case
    int topelement = s.top();
    s.pop();
    reversestack(s);
    push_bottom(s, topelement);
}
void printstack(stack <int> s){
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {

	stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	printstack(s);
	reversestack(s);
	printstack(s);


	return 0;
}
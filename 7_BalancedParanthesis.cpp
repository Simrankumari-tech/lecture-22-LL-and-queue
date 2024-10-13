#include<bits\stdc++.h>
using namespace std;
bool isbalanced(string str){
   stack <char> s;
   for(int i =0; i<str.size() ; i++){
    char ch = str[i];
    switch (ch) {
        case '(' :
        case '{' :
        case '[' :
          s.push(ch);
          break;
          case ')' :
          if(!s.empty() and s.top() == '(') s.pop();
          else return false;
          break;

          case '}' :
          if(!s.empty() and s.top() == '{') s.pop();
           else return false;
          break;
        
        
          case ']' :
          if(!s.empty() and s.top() == '[') s.pop();
           else return false;
          break;
        
        
          }
   }
   return s.empty();

}
int main(){
    string s =  "{a+b*(c+d)-[e+f*(g+f)]}}";
    if(isbalanced(s)) cout << "balanced hai" ;
    else cout <<"not balanced : ";
    return 0;
}
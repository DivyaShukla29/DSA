#include<bits/stdc++.h>
using namespace std;
void printStack(stack<int> st){
    while (!st.empty()){
        cout<<st.top <<endl;
        st.pop();
    }
}
// string  reverse(string c){
//     stack <char> a;
//     for (int i = 0; i < c.length(); i++){
//     a.push(c[i]);
//   }
//   c.clear();
// while (!a.empty()){
//     c+= a.top();
//     a.pop();
// }
// return c;
//   }
  void deleteMid(stack<int> s){
      stack <int> st;
      int count =0;
      while (count <s.size()/2){
          st.push(s.top());
          count ++;
          s.pop();
      }
      s.pop();
      while (!s.empty()){
          st.push(s.top());
          s.pop();
      }
      
      while (!st.empty()){
          cout<<st.top()<<endl;
          st.pop();
      }
 
  }

int main(){
    int a[]= {1,2,3,4,5};
 stack<int>s ;
 for (int i=0; i<5; i++){
     s.push (a[i]);
 }
deleteMid(s);
}

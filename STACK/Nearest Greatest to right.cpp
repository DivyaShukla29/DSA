#similar to nearest greatest to left but reverse the array and apply the same code as nearest greatest to left
#include <bits/stdc++.h>
using namespace std;
vector<int> ntl(int arr[], int n){
      stack <int> st;
      st.push(arr[0]);
      vector <int> v;
      for (int i=1; i<n; i++){
          if (arr[i]<=st.top()){
              v.push_back(st.top());
              st.push(arr[i]);
          }
          else{
              while (!st.empty() && st.top()<arr[i]){
              st.pop();
          }
          if (!st.empty()){
             v.push_back(st.top());
          st.push(arr[i]);
      }
      else{
          st.push(arr[i]);
          v.push_back(-1);
      }
          }
  }
  return v;
}

int main(){
    int a[]= {11,5,7,1,3,4,8};
    int n = 7;
    reverse(a,a+n);
    vector <int> v = ntl(a,7);
    reverse(v.begin(), v.end());
for(int i = 0; i<v.size(); i++){
    cout<<v[i]<<endl;
}
return 0;
}

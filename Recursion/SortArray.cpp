// Sorting a vector using recursion
#include <bits/stdc++.h>
using namespace std;
void insert(vector<int>&v, int temp){
  if ((v.size()==0) || (v[v.size()-1]<=temp)){
    v.push_back(temp);
    return;
  }
  int val = v[v.size()-1];
  v.pop_back();
  insert(v,temp);
  v.push_back(val);
  return;
}
void sort(vector<int>&v){
  if (v.size()==1){
    return;
  }
  int val = v[v.size()-1];
  v.pop_back();
  sort(v);
  insert(v,val);
}
int main(){
  vector<int> v= {8,0,5,2} ;
  sort(v);
  for(int i=0;i<4;i++){
    cout<<v[i]<<" ";
  }
  return 0;
}

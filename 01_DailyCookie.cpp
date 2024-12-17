#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
  int N,D;
  string s;
  cin>>N>>D;
  cin>>s;
  int count = 0;
  for(char it : s){
    if (it=='.') count++;
  }
  cout<<count+D;
  return 0;
}
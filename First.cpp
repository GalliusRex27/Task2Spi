#include<bits/stdc++.h>
#include<string>
#include<stack>
using namespace std;
int main(){
int n; 
string str;
cin>>n;
int arr[n];
for(int j=0;j<n;j++){
cin>>str;
int ctr=0;
stack<int> S;
for(int i=0;i<str.size();i++){
if(str[i]=='<'){
S.push('<');}
if(str[i]=='>'){
if(S.empty()){
arr[j]=ctr; break;}
else if(i==str.size()-1){
arr[j]=ctr+2; break;}
else{
ctr+=2;
S.pop();}
arr[j]=ctr;}}}
for(int i=0;i<n;i++){
cout<<arr[i]<<endl;}
return 0;
}


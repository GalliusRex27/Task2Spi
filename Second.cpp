#include<numeric>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n; 
cin>>n;
long long int*S= new long long int[n];
long long int a; long long int b; long long int c;
iota(S,S+n,1);
int q; cin>>q;
for(int i=0;i<q;i++){
	cin>>a; cin>>b; cin>>c;
	for(long long int j=a-1;j<=b-1;j++){
		S[j]+=c;
	}
}
long long int k=INT_MIN;
for(long long int h=0;h<n;h++){
	if(S[h]>k){
		k=S[h];
	}
}
cout<<k;
delete []S;
return 0;
}

#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    long int n,q;
    long int a,b,c;
    cin>>n; cin>>q;
    long int S[n];
    memset(S,0,sizeof(S));
    for(long int i=0;i<q;i++)
    {
        cin>>a; cin>>b; cin>>c;
        S[a-1]+=c;
        if(b!=n){
		S[b]-=c;}
    }
    for(long i=1;i<=n;i++)
    {  S[i]+=S[i-1];
	   
	}
	  S[0]+=1;
    long r=S[0];
    for(long i=1;i<n;i++){
    	S[i]+=i+1;
    	if(S[i]>r){
    		r=S[i];
		}
	}
    cout<<r;
    return 0;
}

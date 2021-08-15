// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C+

#include <bits/stdc++.h>
using namespace std;

//solving by using boyre moore's voting algorithm;
//find element that has repeated more than n/2 times

int findCand(int a[], int n){
    int maj_indx=0, c=1;
    for(int i=1; i<n; i++){
        if(a[maj_indx] == a[i])
         c++;
        else c--;
        if(c==0){
            maj_indx=i;
            c=1;
        }
    }
return a[maj_indx];
}

bool isMaj(int a[], int n, int cand){
    int c=0;
    for(int i=0; i<n; i++){
        if(a[i] == cand) c++;
    }
    return (c>n/2)? true: false;
}

int main() {
	int t; 
	cin>>t;
	while(t--){
	    int n; cin>>n;
	    int a[n]; for(int i=0; i<n; i++) cin>>a[i];
	    int cand = findCand(a,n);
	    if(isMaj(a,n,cand)) cout<<cand;
	    else cout<<-1;
	    cout<<'\n';
	}
	
	return 0;
}
// { Driver Code Starts.

  // } Driver Code Ends
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


 // } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       int start=0,deficit=0;
   int surplus=0;
   
   for(int i=0;i<n;i++)
   {
       surplus+=p[i].petrol-p[i].distance;
       
       if(surplus<0){  //if surplus comes out to be -ve, this means it is my deficit
           start=i+1;
           deficit+=surplus; //I will add the surplus as deficit
           surplus=0;           //change the value to 0 because there is no surplus
       }
   }
   //if at last the remaining capacity and shortage of petrol is greater than 0,this means 
   //tour can be completed
   return(surplus+deficit>0)?start:-1;
    }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}
  // } Driver Code Ends
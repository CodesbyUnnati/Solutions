//TIME=O(str length) SPACE O(1)
#include<bits/stdc++.h>
using namespace std;
int convert(string str)
{
   int ans=0;
   for(int i=0;i<str.length();i++)
   {
       if(str[i]-'0'>=0 && str[i]-'0'<=9)
       ans=ans*10+str[i]-'0';

       else
       {
           return -1;
       }
       
   }
   return ans;
  
}

int main()
{
    string input;
    cin>>input;
    cout<<convert(input);

    return 0;
}

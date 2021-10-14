#include<bits/stdc++.h>
using namespace std;
void reverseW(string str)
{
stack<char>st;
int n=str.length();
  for(int i=0;i<n;i++)
  {
  
    if(str[i]!=' ')
    {
      st.push(str[i]);
    }
    else
    {
      while(st.empty()==false)
    {
        cout << st.top();
       st.pop();
    }
      cout<<" ";
    }
  }
       while(st.empty()==false)
    {
        cout << st.top();
       st.pop();
    }
  
}
int main()
{
  string str = "Geeks for Geeks";
    reverseW(str);
   
return 0;
}

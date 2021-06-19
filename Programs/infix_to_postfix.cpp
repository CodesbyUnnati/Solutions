#include<bits/stdc++.h>
using namespace std;

int prece(char c)
{
    if(c=='^')
    {
    return 3;
    }
    if(c=='*' || c=='/')
    {
        return 2;
    }
    if(c=='+'|| c=='-')
    {
        return 1;
    }
    else
    {
        return -1; //when not an operator
    }
}
string infixToPostfix(string s)
{
    stack<char>st;
    string res;
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) //if operand, write in answer
        {
            res+=s[i];
        }
        else if(s[i]=='(')
        {
           st.push('('); 
        }
        else if(s[i]==')') //pop and add in result
        {
            while(!st.empty() && st.top()!='(')
            {
                res+=st.top();
                st.pop();
            }
            if(!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while(!st.empty() && prece(st.top())>prece(s[i]))
            {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }   
    }
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    return res;
}

int main()
{
    cout<<infixToPostfix("(a-b/c)*(a/k-l)")<<endl;
    return 0;
}

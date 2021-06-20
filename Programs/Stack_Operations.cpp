#include<bits/stdc++.h>
using namespace std;
#define  n 100

class mystack
{
    int *arr; //dynamic array
    int top; //will take care of the top element

    public:
    mystack() //constructor for memory allocation to array
    {
    arr=new int [n];
    top=-1; 
    }
    void push(int x)
    {
      if(top==n-1)
      {
          cout<<"Stack Overflow! "<<endl;
          return;
      }
    // if upper condition is false then increment top and insert value you want 
      top++;
      arr[top]=x;
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"No element to pop "<<endl;
            return;
        }
        //If upper condition false perform below operation
        top--;
    }

    int Top(){
        if(top==-1)
        {
            cout<<"Nothing in Stack."<<endl;
            return -1;
        }
        //If upper condition false perform below operation
        return arr[top];
    }
    bool empty(){
        return top==-1; //if this is true, stack is empty
    } 

};

int main()
{
mystack st;
st.push(1);
st.push(3);
st.push(5);
cout<<st.Top()<<endl;
st.pop();
cout<<st.Top()<<endl;
st.pop();
st.pop();
st.pop();
cout<<st.empty()<<endl;
return 0;
}

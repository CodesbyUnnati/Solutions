
#include <iostream>
using namespace std;
int SubArray(int n,int A[],int sum)
{
    int curr_sum=A[0],start=0;
    int i;
    for(i=1;i<=n;i++)
    {
        while(curr_sum>sum && start<i-1)//till start reach end of the array
        {
            curr_sum=curr_sum-A[start];//remove first and add last
            start++;
        }
        if(curr_sum==sum)
        {
            cout<<"Sum found between the indexes "<<start<<" and "<<i-1;
            return 1;
        }
        if(i<n) //add remaining
        {
            curr_sum+=A[i];
        }
    }

   cout<<"Nothing Found! "<<endl;
   return 0;
}
int main()
{
    int n, sum;
        cout << "Enter Size of Array: ";
        cin >> n;
        int A[n];
        cout << "Enter Array:";
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        cout << "Enter the sum:";
        cin >> sum;
       SubArray(n, A, sum);
   
    return 0;
}

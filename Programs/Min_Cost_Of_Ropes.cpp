
#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n)
    {
        if (n == 1)
            return 0;
        priority_queue<long long, vector<long long>, greater<long long>> prio_que;

        for (int i = 0; i < n; i++)
        {
            //push elements in the priority queue
            prio_que.push(arr[i]);
        }
        long long ans = 0;
        //if size of queue is >1 then only perform these
        while (prio_que.size() > 1)
        {
            //find 1st min element from min heap and pop
            long long a = prio_que.top();
            prio_que.pop();

            //find wnd min element from min heap and pop
            long long b = prio_que.top();
            prio_que.pop();

            //add it in answer
            ans = ans + (a + b);

            //store answer back in the priority queue
            prio_que.push(a + b);
        }
        return ans;
    }
};
long long minCost(long long arr[], long long n);
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

//Problem Link-https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/

class Solution
{
public:
    bool bouquets(vector<int> &bloomDay, int m, int k, int mid)
    {
        int n = bloomDay.size();
        int flower = 0;
        int bouquet = 0;
        for (int i = 0; i < n; i++)
        {
            if (bloomDay[i] <= mid) //if number is less than mid then that flower is bloomed.
                flower++;
            else
                flower = 0;

            if (flower >= k) //flowers are taken  to made bouq.
            {
                bouquet++;
                flower = 0;
            }
        }
        if (bouquet >= m)
            return true; //bouquet is made
        return false;
    }

    int minDays(vector<int> &bloomDay, int m, int k)
    {

        int left = *min_element(bloomDay.begin(), bloomDay.end());
        int right = *max_element(bloomDay.begin(), bloomDay.end());
        int result = -1; //default

        if (bloomDay.size() < m * k)
            return -1; //more bouquets, less flowers

        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (bouquets(bloomDay, m, k, mid))
            {
                result = mid;
                right = mid - 1; //check on lhs of mid
            }
            else
                left = mid + 1; //check on rhs of mid
        }
        return result;
    }
};

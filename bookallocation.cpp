#include <bits/stdc++.h>
using namespace std;
bool ispossible(int n, int m, vector<int> time, long long int mid)
{
    int dayscount = 1;
    long long int chaptersum = 0;
    for (int i = 0; i < m; i++)
    {
        if (chaptersum + time[i] <= mid)
        {
            chaptersum += time[i];
        }
        else
        {
            dayscount++;
            if (dayscount > n || time[i] > mid)
            {
                return false;
            }
            chaptersum = time[i];
        }
    }
    return true;
}
long long bookallocate(int n, int m, vector<int> time)
{
    // Write your code here.
    long long int s = 0;
    long long int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += time[i];
    }
    long long int e = sum;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e)
    {
        if (ispossible(n, m, time, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int n=2,m=4;
    vector<int> time = {10,20,30,40};
    cout<<bookallocate(n,m,time);
    return 0;
}
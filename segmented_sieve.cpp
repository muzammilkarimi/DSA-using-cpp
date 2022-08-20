#include <bits/stdc++.h>
using namespace std;
vector<int> sieve(int n)
{
    vector<bool> primes(n + 1, true);
    vector<int> res;
    for (int i = 2; i <= primes.size(); i++)
    {
        if (primes[i])
        {
            // res.push_back(i);
            for (int j = i * i; j < primes.size(); j += i)
            {
                primes[j] = false;
            }
        }
    }
    for (int i = 2; i < primes.size(); i++)
    {
        if (primes[i])
        {
            res.push_back(i);
        }
    }
    return res;
}
void segmented_sieve(int a, int b)
{
    // 1. find root of b;
    int rootb = (int)sqrt(b);
    // 2. get a prime till root b;
    vector<int> primes = sieve(rootb);
    // 3. make a bool vector of size b-a+1 and make all true;
    vector<bool> arr(b - a + 1, true);
    // 4. ittrate from primes we got ;
    for (int prime : primes)
    {
        int multiple = ceil((a * 1.0) / prime);
        if (multiple == 1)
            multiple++;
        // 4. find starting index
        int index = multiple * prime - a;
        // 5. make false from starting index by distance of prime;
        for (int i = index; i < arr.size(); i += prime)
        {
            arr[i] = false;
        }
    }
    vector<int> res;
    long long ans=1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] and a + i != 1)
        {
            ans=ans*(i+a);
        }
    }
    cout<<ans;
}
int main()
{
    segmented_sieve(1, 10);
    // vector<int> ans=sieve(10);
    // for(int i=0; i<ans.size(); i++){
    //     if(ans[i]){
    //         cout<<ans[i]<<" ";
    //     }
    // }
    return 0;
}
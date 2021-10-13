class Solution {
public:
    int countPrimes(int n) {
        if(n==0||n==1) return 0;
        
        bool primes[n];
        memset(primes,true,sizeof(primes));
        primes[0]=false;
        primes[1]=false;
        for(int i=2;i*i<n;i++)
        {
            if(primes[i]==true)
            {
                for(int j=i*i;j<n;j=j+i)
                {
                    primes[j]=false;
                }
            }
        }
        int ans=0;
        for(int i=2;i<n;i++)
        {
            if(primes[i])
                ans++;
        }
        return ans;
    }
};

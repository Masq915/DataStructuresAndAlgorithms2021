class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int i,j;
        int n=matrix.size();
        if(n==0) return 0;
        int m=matrix[0].size();
        if(n==0||m==0) return 0;
        vector<vector<int>> sum(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            sum[i][0]=matrix[i][0]-'0';
        }
        for(int j=0;j<m;j++)
        {
            sum[0][j]=matrix[0][j]-'0';
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(matrix[i][j]=='1')
                {
                    sum[i][j]=min(sum[i][j-1],min(sum[i-1][j],sum[i-1][j-1]))+1;
                }
                else
                {
                    sum[i][j]=0;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<sum[i][j]<<" ";
            }
            cout<<endl;
        }
        int ans=sum[0][0];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(sum[i][j]>ans)
                {
                    ans=sum[i][j];
                }
            }
        }
        return ans*ans;
    }
};

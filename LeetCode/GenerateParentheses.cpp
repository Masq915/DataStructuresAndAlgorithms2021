class Solution {
public:
    int l;
    vector<string> output;
    void helper(int open, int close, string temp)
    {
        if(open == close && temp.size()!=0 && temp.back()=='(') return;
        if(temp.size()==l)
            output.push_back(temp);
        if(open>0)
        {
            temp=temp+'(';
            open--;
            helper(open, close, temp);
            temp.pop_back();
            open++;
        }
        if(close>0)
        {
            temp=temp+')';
            close--;
            helper(open, close, temp);
            close++;
            temp.pop_back();
        }
    }
    
    vector<string> generateParenthesis(int n) {
        l=2*n;
        string temp;
        helper(n,n, temp);
        return output;
    }
};

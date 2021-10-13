class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& a) {
        vector<vector<string> > ans;
        map<string, vector<string> > groups;
        for (int i = 0; i < a.size(); i++) {
            //sort every string and store groups of strings that are anagrams in a map
            string copyString = a[i];
            sort(copyString.begin(), copyString.end());
            groups[copyString].push_back(a[i]);
        }

        for(map<string, vector<string> >::iterator it = groups.begin(); it != groups.end(); it++) {
            //string temp=it->first;
            ans.push_back(it->second);
        }
        return ans;
    }
};

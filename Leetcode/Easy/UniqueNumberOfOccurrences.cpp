class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;                       // Creating map of given vector
        for(int i:arr)
            mp[i]++; 
        
        set<int> s;                                     // Creating set of values(i.e, it->second) from map, thus set stores only unique values
        for (auto it=mp.begin();it!=mp.end();it++)
            s.insert(it->second);
    
        if(s.size()==mp.size())                         // Comparing map size and set size
            return true;                                // If both are same, this implies all the distinct elements in the given vector are occuring unique times.
        else
            return false;
    }
};
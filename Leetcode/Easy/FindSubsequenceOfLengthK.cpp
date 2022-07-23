   vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<nums.size();i++)
            pq.push(make_pair(nums[i],i));
        vector<pair<int,int>>v;
        
        while(k--)
        {
            v.push_back(make_pair(pq.top().second,pq.top().first));
            pq.pop();
        }
        sort(v.begin(),v.end());
        vector<int>v1;
        for(int i=0;i<v.size();i++)
            v1.push_back(v[i].second);
        return v1;
    }
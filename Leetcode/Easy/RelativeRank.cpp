vector<string> findRelativeRanks(vector<int>& s) 
	{
		priority_queue<int> pq;
		for(auto x:s) pq.push(x);
		unordered_map<int,string> mp;
		int r=1;
		while(!pq.empty())
		{
			if(r==1) mp[pq.top()]="Gold Medal";
			else if(r==2) mp[pq.top()]="Silver Medal";
			else if(r==3) mp[pq.top()]="Bronze Medal";
			else mp[pq.top()]= to_string(r);
			r++;
			pq.pop();
		}
		vector<string> ans;
		for(auto x:s)
			ans.push_back(mp[x]);
		return ans;
	}
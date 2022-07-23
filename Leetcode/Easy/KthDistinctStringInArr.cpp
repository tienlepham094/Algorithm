class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map <string, int> mp;
        for(string i : arr){
            mp[i]++;
        }
        int cnt=0;
        for(auto i:arr){
            if(mp[i]==1){
                k--;
                if(k==0) return i;
            }
        }
        return "";
    }
};class Solution {
public:
    int findKthLargest(vector<int>& nums, int k)
    {
        priority_queue<int> pq(nums.begin(), nums.end());
        for (int i = 0; i < k - 1; i++)
            pq.pop();
        return pq.top();
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;

        //count number of occurance
        for(auto i : nums) {
            mpp[i]++;
        }
        vector<pair<int,int>>values;
        for(auto i : mpp) {
            values.push_back({i.first,i.second});
        }
        sort(values.begin(),values.end(),[](pair<int,int>&a,pair<int,int>&b) {
            return a.second>b.second;
        });

        //Taking top k values
        vector<int>top;
        for(int i =0;i<k;i++) {
            top.push_back(values[i].first);
        }
        return top;
        
    }
};

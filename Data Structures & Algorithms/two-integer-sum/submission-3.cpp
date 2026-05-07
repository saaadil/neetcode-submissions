class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> A;
        for (int i = 0; i < nums.size(); i++) { 
            A.push_back({nums[i], i}); 
        }
        sort(A.begin(), A.end());
        int n=0;
        int m=nums.size()-1;
        while (n<m){
            int sum=A[n].first+A[m].first;
            if (sum==target){
                if (A[n].second<A[m].second){
                    return {A[n].second,A[m].second};
                }
                else{
                    return {A[m].second,A[n].second};
                }
            }
            else if (sum>target){
                m--;
            }
            else{
                n++;
            }
        }
        return {};
    }
};

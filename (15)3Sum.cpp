class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
//         if(nums[0]>0){
//             return {};
//         }
//         for(int i=0;i<nums.size();i++){
//             int l=i+1,j=nums.size()-1,sum=0;
//             if(nums[i]>0){
//                 break;
//             }
//             if(i!=0 && nums[i]==nums[i-1]){
//                 continue;
//             }
//             while(l<j){
//                 sum=nums[i]+nums[l]+nums[j];
//                 if(sum<0){
//                     l++;
//                 }
//                 else if(sum>0){
//                     j--;
//                 }
//                 else{
//                     ans.push_back({nums[i],nums[l],nums[j]});
//                     int last_l = nums[l] ; int last_h = nums[j];
                
                    
//                     while (l < j && nums[l] == last_l)  l++;
//                     while (l < j && nums[j] == last_h) j--;
//                 }
//             }
//         }
        if(nums[0]>0){
            return {};
        }
        
        for(int i=0; i<nums.size(); i++){
            int j = i+1, k = nums.size()-1;
            if(nums[i]>0){
                break;
            }
            if(i!=0 && nums[i]==nums[i-1]){
                continue;
            }
            while(j<k){
                if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                }
                else if(nums[i]+nums[j]+nums[k]>0){
                    k--;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    int j1 = nums[j], k1=nums[k];
                    while(j<k && nums[j] == j1){
                        j++;
                    }
                    while(j<k && nums[k] == k1){
                        k--;
                    }
                }
            }
        }
            
            return ans;
    }
    
};

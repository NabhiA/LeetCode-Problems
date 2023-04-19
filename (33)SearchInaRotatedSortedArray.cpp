class Solution {
public:
    int binarySearch(vector<int>& nums, int s,int e, int k){

        if(s>e)
            return -1;
            
        int mid=s+(e-s)/2;

        if(nums[mid]==k){
            return mid;
        }

        if(nums[s]<=nums[mid]){
            if(k<=nums[mid] && k>=nums[s]){
                return binarySearch(nums,s,mid-1,k);
            }
            else{
                return binarySearch(nums,mid+1,e,k);
            }
        }
        else{
            if(k>=nums[mid] && k<=nums[e]){
                return binarySearch(nums,mid+1,e,k);
            }
            else{
                return binarySearch(nums,s,mid-1,k);
            }
        }
    }


    int search(vector<int>& nums, int target) {

        int beg=0,end=nums.size()-1,mid;
        return binarySearch(nums,beg,end,target);
        // while(beg<=end)
        // {
        //     mid=(beg+end)/2;
        //     if(nums[mid]==target)
        //         return mid;
        //     if(nums[beg]<=nums[mid])
        //     {
        //         if(target<=nums[mid] && target>=nums[beg])
        //             end=mid-1;
        //         else
        //             beg=mid+1;
        //     }
            
        //     else
        //     {
        //         if(target>=nums[mid] && target<=nums[end])
        //            beg=mid+1;
        //         else
        //             end=mid-1;
        //     }
            
        // }
        // return -1;
    }

};

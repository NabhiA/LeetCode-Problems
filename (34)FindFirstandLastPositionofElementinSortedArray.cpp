class Solution {
public:

    int firstOcc(vector<int>& arr, int s, int e, int key, int ans){
    // int s = 0,e = n-1;
    // int mid = s+(e-s)/2;
    
    if(s>e){
        return ans;
    }
     int mid = s+(e-s)/2;
    if(arr[mid]==key){
        ans=mid;
        return firstOcc(arr,s,mid-1,key,ans);    
    }
    if(arr[mid]<key){
        return firstOcc(arr,mid+1,e,key,ans);
    }
    else{
        return firstOcc(arr,s,mid-1,key,ans);
    }
  
    
    // while(s<=e){
    //     if(arr[mid] == key){
    //         ans = mid;
    //         e=mid-1;
    //     }
    //     else if(arr[mid]>key){
    //         e=mid-1;
    //     }
    //     else if(arr[mid]<key){
    //         s=mid+1;
    //     }
    //     mid = s+(e-s)/2;
    // }
    // return ans;
}

int lastOcc(vector<int>& arr, int s, int e, int key, int ans){
    // int s = 0,e = n-1;
    //int mid = s+(e-s)/2;

    if(s>e){
        return ans;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]==key){
        ans=mid;
        return lastOcc(arr,mid+1,e,key,ans);    
    }
    if(arr[mid]>key){
        return lastOcc(arr,s,mid-1,key,ans);
    }
    else{
        return lastOcc(arr,mid+1,e,key,ans);
    }
    

    // while(s<=e){
    //     if(arr[mid] == key){
    //         ans = mid;
    //         s=mid+1;
    //     }
    //     else if(arr[mid]>key){
    //         e=mid-1;
    //     }
    //     else if(arr[mid]<key){
    //         s=mid+1;
    //     }
    //     mid = s+(e-s)/2;
    // }
    // return ans;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int s=0;
        int e=nums.size()-1;
        int first = -1;
        int last =-1;
        first = firstOcc(nums,s,e,target,first);
        last = lastOcc(nums,s,e,target,last);
        ans.push_back(first);
        ans.push_back(last);
        return ans;
        
    }

};

#include <iostream>
#include <vector>
using namespace std;

   int pivotIndex(vector<int>& nums) {
        
        int s=0;
        int e=nums.size()-1;
        int mid = s + (e-s)/2;
        
        
        while((mid!=0) && (mid!= (nums.size()-1))){
            int sl=0, sr=0;
            
            for(int i=0;i<mid;i++){
                sl=sl+nums[i];
            }
            cout<<sl<<endl;
            for(int j=mid+1;j<nums.size(); j++){
                sr = sr+ nums[j];
            }
            cout<<sr<<endl;
            
            if(sl==sr){
                return mid;
            }
            else if(sl>sr){
                mid =mid-1;
            }
            
            else{
                mid = mid+1;
            }
            cout<<mid<<endl;
            cout<<e<<endl;
            // break;
        }
        
        return -1;
        
    }

    int main(){
        vector<int> nums={1,2,3};
       int ans= pivotIndex(nums);
        cout<<ans;
    }
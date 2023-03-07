class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int suml=0;
        int sumr=0;
        int total=0;
        int i;
        int pivot=-1;
        for(i=0;i<nums.size();i++){
            total=total+ nums[i];
        }
        for(i=0;i<nums.size();i++){
            if(i==0){
                suml=0;
            }else{
                  suml=suml+nums[i-1];
            }
            sumr=total-(nums[i])-(suml);
            if(suml==sumr){
                pivot=i;
                break;
            }
        }
        return pivot;
        
    }
};

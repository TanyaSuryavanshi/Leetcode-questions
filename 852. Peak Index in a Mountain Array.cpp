class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max=INT_MIN;
        int peak=-1;
        
        int n = arr.size()-1;
        for(int i=0; i<n; i++){
            if(arr[i] > max){
                max=arr[i];
                peak=i;
                //break;
            }
        }
        for(int j=n; j>=0; j--){
            if(arr[j] > max){
                max=arr[j];
                peak = j;
                //break;
            }
        }
        return peak;
    }
};

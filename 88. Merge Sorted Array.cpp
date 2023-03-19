class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3;
        int i=0,j=0,k=0;
        while(i<n && j<n){
            if(nums1[i]<nums2[j])
            {
                nums3[k]=nums1[i];
                k++;
                i++;
            }
            else
            {
                nums3[k]=nums1[j];
                k++;
                j++;
            }
        }
        while(i<n)
        {
            nums3[k++]=nums1[k++];
        }
        while(j<m)
        {
            nums2[k++]=nums2[j++];
        }
    }
};

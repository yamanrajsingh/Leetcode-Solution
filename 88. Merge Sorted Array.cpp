class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int s1= nums1.size();
        int s2 =nums2.size();
        if(m==0){
            nums1=nums2;
        }
        else{
        int j=m;
         for(int i=0;i<s2;i++)
         {
             nums1[j+i]=nums2[i];
         }
         
        }
        sort(nums1.begin(),nums1.end());
    }
};
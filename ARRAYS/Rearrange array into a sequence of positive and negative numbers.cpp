// passed 53 testcases only 
// wrong answer for Wrong Answer
// 54 / 133 testcases passed

// Editorial
// Input
// nums =
// [-27,-30,8,-16,38,30,20,21,-2,-18,40,-29]

// Use Testcase
// Output
// [8,-27,38,-30,30,-16,20,21,-2,-18,40,-29]
// Expected
// [8,-27,38,-30,30,-16,20,-2,21,-18,40,-29]

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       int i;
        if (nums[0]<0){
            for( i =1; i<nums.size();i++){
                if(nums[i]>0){
                  break;
                }
            }
            for (; i>0 ; i--){
                swap(nums[i-1], nums[i]);
            }
        }
         int ecount =0 , pcount =1; // two variables to count the number of consecutive positive or negative numbers.
        for (i =1; i<nums.size();i++){
              if (pcount > 1 && (nums[i]<0) || ecount>1 && (nums[i]>=0)){  
                  int n=max(pcount , ecount);
                while (n!=1){
                swap (nums[i-1], nums[i]);
                 n--;
                i--;
            }
             pcount=0; ecount=0;
               }
            else if ( nums[i]>=0){
                pcount++;
                ecount--;       
            }
            else{
                ecount++;
                pcount--;
               
            }
         
        }
        return nums;
    }
};

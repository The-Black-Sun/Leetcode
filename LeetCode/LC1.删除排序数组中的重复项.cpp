class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size()==0||nums==nullptr)
        {
            return 0;
        }
        
        int Length = 0;
        //升序，遍历，计算长度
        for (int i = 1; i < nums.size(); i++)
        {
           if (nums[Length]!=nums[i])
           {
               Length++;
               nums[Length] = nums[i];
           }
        }
        
        return Length+1;
    }
};
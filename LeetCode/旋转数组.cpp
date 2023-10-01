#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    // 排除特殊情况
    int Length = nums.size();
    if (Length == 0 || Length == 1)
    {
        return;
    }
    // 当k大于数组长度时
    if (k > Length)
    {
        k = k % Length;
    }
    vector<int> end;
    for (int i = Length; i > Length-3; i--)
    {
        int num = nums[Length];
        nums.pop_back();
        end.insert(v1.begin() ,num);
    }
    nums.insert(nums.begin(), v2.begin(), v2.end)
}
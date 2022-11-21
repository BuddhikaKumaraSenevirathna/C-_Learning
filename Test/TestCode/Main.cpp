#include "TopKFrequentElements.cpp"

int main()
{
    //vector<int> nums = {1, 1, 1, 2, 2, 3};
    vector<int> nums = {4,1,-1,2,-1,2,3};
    int k = 2;

    Solution sol = Solution();
    vector<int> out = sol.topKFrequent(nums, k);

    for(auto i = out.begin(); i != out.end(); i++)
    {
        printf("out value : %d\n", *i);
    }
}
#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        map<int, int> m;
        vector<int> vecOutput;

        for(auto i = nums.begin(); i != nums.end(); i++)
        {
            map<int, int>::iterator itr = m.find(*i);

            if (m.end() == itr)
            {
                m.insert(pair<int, int>(*i, 1));
            }
            else
            {
                m.insert(pair<int, int>(itr->first, ++itr->second));
            }
        }

        map<int, int>::iterator itr1;
        int max = 0;
        for(itr1 = m.begin(); itr1 != m.end(); ++itr1)
        {
            if(max < itr1->second)
            {

            }
            // if(count <= k)
            // {
            //     vecOutput.push_back(itr1->first);
            // }
            // else
            // {
            //     break;
            // }

            // count++;
        }

        return vecOutput;
    }
};
#include <bits/stdc++.h>
/* 
int sum(std::vector<int> nums) {
  // your code here
  int sum{0};
  for(int i{0};i<nums.size();i++)
      sum+=nums.at(i);
  return sum;
}
 */
int sum(std::vector<int> nums)
{
    return std::accumulate(nums.begin(),nums.end(),0);
}

int main()
{
    std::vector<int> vect{1,2,3,4};
    std::cout<<sum(vect)<<'\n';
    return 0;
}
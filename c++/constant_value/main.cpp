#include <bits/stdc++.h>

int is_vowel(const char &c)
  {
  std::string vowel ="aeiou";
  for(auto i:vowel)
    {
    if(i==c)
      return 1;
  }
      
  return 0;
}

int solve(const std::string &s)
{
  int max{0};
  int sub=0;
  for(auto c:s)
    {
      
    if(is_vowel(c))
    {
      if(sub>max)
        {
        max=sub;
        
      }
      sub=0;
    }
    else
      sub+=c-96;
  }
    
    
  
    
  return max;
}

int main()
{
    std::string s;
    std::getline(std::cin,s);
    std::cout<<solve(s)<<'\n';
    return 0;
}
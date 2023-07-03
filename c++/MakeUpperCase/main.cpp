#include <bits/stdc++.h>

std::string makeUpperCase(const std::string& input)
{
    std::string res=input;
    std::transform(res.begin(),res.end(),res.begin(),::toupper);
    return res;
}

std::string fakeBin(std::string str){
  //your code here
  for(unsigned int i{0};i<str.length();i++)
    {
    if(str.at(i)>='5') str.at(i)='1';
    else str.at(i)='0';
  }
}

int main()
{
    std::string s;
    std::cin>>s;
    std::cout<<makeUpperCase(s)<<'\n';
    std::cout<<fakeBin(s)<<'\n';

    return 0;
}
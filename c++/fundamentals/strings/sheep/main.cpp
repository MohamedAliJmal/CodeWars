#include <bits/stdc++.h>

std::string countSheep(int n)
{
    std::stringstream res;
    //std::string res;
    for(unsigned int i{1};i<=n;i++)
    {
        res<<i<<" sheep...";
        //res+=std::to_string(i)+"sheep...";
    }
    return res.str();

}


int main()
{
    int n;
    std::cin>>n;
    std::cout<<countSheep(n)<<'\n';
    return 0;
}
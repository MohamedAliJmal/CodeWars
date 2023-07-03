#include <bits/stdc++.h>

std::string sliceString(std::string input)
{
    //tejem ta3mel substring;
    // input.substr(1,input.size()-2);
    //tejem std::string
    return std::string(input.begin()+1,input.end()-1);
    /* input.erase(input.begin());
    input.erase(input.end()-1);
    return input;
     */
}

int main()
{
    std::string s;
    std::cin>>s;
    std::cout<<sliceString(s)<<'\n';
}
#include <bits/stdc++.h>

std::string encode(std::string s)
{
    static std::map<char,char> d{{'a','1'},{'e','2'},{'i','3'},{'o','4'},{'u','5'}};
    for(auto &x:s) 
        if(d.count(x)) x=d[x];
    return s;
}

std::string decode(std::string s)
{
    for(auto &x:s)
        if('0'<x && x<'6') 
            x="aeiou"[x-'1'];
    return s;
}

int main()
{
    std::string input;
    std::string output;
    getline(std::cin,input);
    output=encode(input);
    std::cout<<output<<'\n';
    std::cout<<decode(output)<<'\n';
}
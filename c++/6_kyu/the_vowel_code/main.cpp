#include <bits/stdc++.h>

std::string vowels="aeiou";

std::string encode(const std::string &s)
{
    int n;
    std::string res;
    for(unsigned int i{0};i<s.size();i++)
    {
        if(vowels.find(s.at(i))!=std::string::npos)
        {
            n=vowels.find(s.at(i));

            res.append(std::to_string(n+1));
        }else{
            res+=s[i];
        }
    }
    return res;
}

std::string decode (const std::string &s)
{
        std::string res;

    for(unsigned int i{0};i<s.size();i++)
    {
        if(isdigit(s.at(i)))
        {
            res+=vowels.at(s.at(i)-'1');
        }
        else
        {
            res+=s.at(i);
        }
    }
    return res;
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
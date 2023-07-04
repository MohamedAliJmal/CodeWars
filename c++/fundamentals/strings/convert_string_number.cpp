#include <bits/stdc++.h>


int string_to_number(const std::string& s)
{
    //wla thama method tbadel stoi(s)
    return std::stoi(s);
    /* int res{0};
    int i{0};
    for(char c:s)
    {
        if(c>='0' && c<='9')
        {
            res=res*10+c-'0';
        }
    }
    if(s.at(0)=='-') res=res*-1;
    return res;
     */
}

int main()
{
    std::string s;
    std::cin>>s;
    std::cout<<string_to_number(s)<<'\n';
    return 0;
}
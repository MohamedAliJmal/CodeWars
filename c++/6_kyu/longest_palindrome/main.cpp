#include <bits/stdc++.h>
int is_palindrome(const std::string &s,int begin,int end)
{
    for(int i{begin}, j{end};j>=i;i++,j--)
    {
        if(s.at(i)!=s.at(j)) return 0;
    }
    return 1;
}

int longest_palindrome(const std::string &s)
{
    unsigned int max{0},len;
    
    for(unsigned int begin{0};begin<s.size();begin++)
    {
        for(unsigned int end{begin};end<s.size();end++)
        {
            if(is_palindrome(s,begin,end))
            {
                len=end-begin+1;
                if(max<len) max=len;
                
            }
        }
    }
    return max;

}


int main()
{
    std::string input;
    getline(std::cin,input);
    std::cout<<longest_palindrome(input)<<'\n';
}
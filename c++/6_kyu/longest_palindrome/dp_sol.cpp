#include <bits/stdc++.h>

unsigned int longest_palindrome(const std::string &s)
{
    auto n{s.length()};
    bool Mat[n][n];
    memset(Mat,0,sizeof(Mat));
    unsigned int max=n!=0;
    //cas mta3 harf wahed
    for(unsigned int i{0};i<n;i++)
    {
        Mat[i][i]=1;
    }

    //cas mta3 zouz hrouf
    
    for(unsigned int i{0};i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            Mat[i][i+1]=1;
            max=2;
        }
    }

    //cas mta3 akthar min zouz hrouf

    //toul chaine
    for(unsigned int len{3};len<=n;len++)
    {
        //mnin tebda
        for(unsigned int start{0};start<=n-len;start++)
        {
            //win toufa
            unsigned int end{start+len-1};

            if(s[start]==s[end] && Mat[start+1][end-1])
            {
                Mat[start][end]=1;
                if(len>max)
                {
                    max=len;
                }
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
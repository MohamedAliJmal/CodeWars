#include <bits/stdc++.h>

std::string cleanString(const std::string &s) {
    // your code here
    int backspace{0};
    std::string res;
    //unsigned lazem kdima comparison akbar mil -1
    for(unsigned i=s.length()-1;i>=0;i--)
    {
        if(s.at(i)=='#')
        {
            backspace++;
        }
        else if(backspace)
        {
            backspace--;
        }
        else
        {
            res.insert(res.begin(),s.at(i));

        }
        
    }
    return res;
  
}

int main()
{
    std::string s="abc#d##c";
    std::cout<<cleanString(s)<<'\n';

}

//best solution
/*
std::string cleanString(const std::string &s) {
	std::string result = "";
	for (auto c : s)
	{
		if (c != '#')
		{
			result.push_back(c);
		}
		else if(result.size() > 0)
		{
			result.pop_back();
		}
	}
	return result;
} 
 */
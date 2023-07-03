#include <bits/stdc++.h>

std::string likes(const std::vector<std::string> &names)
{
    std::string restult;
    int size=names.size();
    if(size>=4)
    {
        restult=names[0]+","+names[1]+" and "+ std::to_string(size-2) +" others like this";
        
    }
    else if(size==3)
    {
        restult=names[0]+","+names[1]+" and "+ names[2] +" like this";

    }
    else if(size==2)
    {
        restult=names[0]+" and "+names[1]+"like this";
    }
    else if(size==1)
    {
        restult=names[0]+" likes this";
    }
    else
    {
        restult="no one likes this";
    }
    return restult;
}
#include <bits/stdc++.h>

std::string DNAStrand(const std::string &dna)
{
    std::string result;
    for (auto c:dna)
    {
        if(c=='A') result+="T";
        else if(c=='T') result+="A";
        else if(c=='C') result +="G";
        else if(c=='G') result+="C";
    }
}
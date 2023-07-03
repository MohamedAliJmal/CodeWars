/*
 An isogram is a word that has no repeating letters, consecutive or non-consecutive.
 Implement a function that determines whether a string that contains only letters is an isogram.
 Assume the empty string is an isogram. Ignore letter case.
 */

#include <iostream>
#include <string>
using namespace std;

bool is_isogram(string str) {
  for(int i=0;i<str.length()-1;i++){
    cout<<str[i]<<"\n";
    for(int j=i+1;j<str.length();j++){
        
      if(toupper(str[i])==toupper(str[j])){
          return false;
      }
    }
  } 
  return true;
}

int main(){
    string str;
    cin>>str;
    cout<<is_isogram(str)<<"\n";
    
}
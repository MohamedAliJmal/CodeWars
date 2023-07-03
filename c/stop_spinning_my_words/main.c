#include <stdio.h>
#include <string.h>
void spin_words(const char* sentence ,char* result)
{
    int count,i,j;
    count=0;
    for(i=0;i!='\0';i++){
        if(sentence[i+1]==' ' || sentence[i+1]=='\0')
    {
      count++;
      if(count>=5)
      {
        for(j = 0; j<count; j++) 
          result[i+1-count+j]=sentence[i-j];
      }
      else 
      {
        for(j = 0; j<count; j++) 
          result[i-j]=sentence[i-j];
      }
      count = -1;
      result[i+1]=sentence[i+1];
    }
    else count++;
  }
}

void main(){
    char input[]="hello world";
    char result[strlen(input)];
    spin_words(input,result);
    printf("%s\n",result);
}


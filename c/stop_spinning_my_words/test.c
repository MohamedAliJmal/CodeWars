#include <stdio.h>
#include <stdlib.h>
void main(){
//    char* s="ffff";
//     char* str=NULL;
//     str=(char*)malloc(8);
//     str=s;
//     char p[5]=str;
//     printf("%s\n",str);
//     printf("%s\n",p);
char* x;
int n=5;
int z=5;
x=(char*)malloc(z);
for(int i=0;i<z;i++){
    *(x+i)=65+i;
}
printf("%ld\n",*x);
for(int i=0;*(x+i)!='\0';i++){
    printf("%ld\n",i);
    
}
free(x);
for(int i=0;*(x+i)!='\0';i++){
    printf("%ld\n",i);
    
}
printf("%d",*x);
}
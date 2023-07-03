#include <iostream>


using namespace std;
void seriesSum(int n)
{
    float sum = 0;
    char str[3];
    for(auto i = 0; i < n; i++) sum += 1./(3*i+1);
    sprintf(str, "%.2f", sum);
}

int main(){

    seriesSum(3);
    


}

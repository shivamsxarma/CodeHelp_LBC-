#include <iostream>
using namespace std;
int main (){

    int a =5;
    int value =(++a)*(a++)+(--a)*(a--);
    cout<<value<<endl;

    return 0;
}

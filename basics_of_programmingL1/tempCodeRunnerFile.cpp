#include <iostream>
using namespace std;
int main() {

for(int i =0; i<=5 ;i=i+1)

{
cout<<"outer loop"<< i<<endl;
for(int j =0; j<=5 ; j=j+1)
{
    cout<<"inner loop" <<j<<endl;
}
}


    return 0;
}

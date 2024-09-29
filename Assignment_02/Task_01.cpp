#include<iostream>
using namespace std;

void loop()
{
    for(int i =0; i <10; i++)
    {
        cout<<"I is : "<<i +1<<endl;
        if(i > 20)
        {
            cout<<"I not reached 20"<<endl;
        }
    }
}
int main()
{
    loop();
}

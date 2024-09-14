// ---------------- Sales for 12 branches of a company, Total annual sales,  branch with the highest and lowest sales ------------------

#include<iostream>
using namespace std;
int main()
{
    int totalBranches = 12;
    double sales[totalBranches];

    for(int i = 0; i < totalBranches; i++)
    {
        cout<<"\n\tEnter the sales for branch : "<<i + 1<<" : ";
        cin>>sales[i];
    }

    double totalSales = 0;
    double highestSales = sales[0];
    double lowestSales = sales[0];
    int highestBranch = 0;
    int lowestBranch = 0;

    for(int i = 0; i < totalBranches; i++)
    {
        totalSales += sales[i];

        if(sales[i] > highestSales)
        {
            highestSales = sales[i];
            highestBranch = i;
        }

        if(sales[i] < lowestSales)
        {
            lowestSales = sales[i];
            lowestBranch = i;
        }
    }

    cout<<"\n\tTotal annual sales: "<<totalSales<<"\n";
    cout<<"\n\tThe Branch : "<<highestBranch + 1<<" had the highest sales : " << highestSales<<"\n";
    cout<<"\n\tThe Branch : "<<lowestBranch + 1<<" had the lowest sales : " << lowestSales<<"\n";

    return 0;
}

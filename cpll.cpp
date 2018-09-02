// C++ program to illustrate for loop
#include <iostream>
using namespace std;

int main()
{
    double sales[10] = {12.50, 8.35, 19.60, 25.00, 14.00, 39.43, 35.90, 98.23, 66.65, 35.64};
    int index;
    double largestSale, sum, average;

    int maxIndex = 0;
    for (index = 1; index < 10; index++)
    {
        if (sales[maxIndex] < sales[index])
            maxIndex = index;
    }
    largestSale = sales[maxIndex];

    cout << "Largest sale  " << largestSale << endl;
    cout << "maxIndex  " << maxIndex << endl;

    return 0;
}

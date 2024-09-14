// ---------------- E-Commerce Store ------------------
    // ----------------  Searching a customer Id in a store ------------------

#include <iostream>
using namespace std;

int binarySearch(int array[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (array[mid] == target)
        {
            return mid;
        }

        if (array[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{

    while (true)
    {
        int array[10] = {100, 102, 356, 432, 566, 122, 666, 222, 987, 345};
        int size = sizeof(array) / sizeof(array[0]);
        int target;
        cout << "\n\tEnter the order id for search : ";
        cin >> target;
        int location = binarySearch(array, size, target);
        if (location != -1)
        {
            cout << "\n\tThe order id " << target << " found at the position :  " << location + 1 << "\n";
        }
        else
        {
            cout << "\n\tThe order id not found.\n ";
        }
        char ch;
        cout << "\n\tDo you want to search again? : ";
        cin >> ch;
        if (ch == 'n' || ch == 'N')
        {
            break;
        }
    }

    return 0;
}
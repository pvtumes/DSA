#include <iostream>
using namespace std;

void checkOddEven(int num)
{
    if (num & 1)
        cout << num << " is odd.\n";
    else
        cout << num << " is even.\n";
}

void countSetBits(int num)
{
    int count = 0;
    while (num)
    {
        count += (num & 1);
        num >>= 1;
    }
    cout << "Number of set bits: " << count << "\n";
}

void toggleBit(int num, int position)
{
    int result = num ^ (1 << position);
    cout << "Number after toggling bit " << position << ": " << result << "\n";
}

void isPowerOfTwo(int num)
{
    if (num > 0 && (num & (num - 1)) == 0)
        cout << num << " is a power of two.\n";
    else
        cout << num << " is not a power of two.\n";
}

void swapUsingXOR(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After swapping: a = " << a << ", b = " << b << "\n";
}

void findSingleNumber(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < n; ++i)
    {
        result ^= arr[i];
    }
    cout << "The single number is: " << result << "\n";
}

int main()
{
    int choice;
    do
    {
        cout << "\nBit Manipulation Menu\n";
        cout << "1. Check if a number is odd or even\n";
        cout << "2. Count set bits in a number\n";
        cout << "3. Toggle a bit at a given position\n";
        cout << "4. Check if a number is a power of two\n";
        cout << "5. Swap two numbers using XOR\n";
        cout << "6. Find the single number in an array where every other number appears twice\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            checkOddEven(num);
            break;
        }
        case 2:
        {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            countSetBits(num);
            break;
        }
        case 3:
        {
            int num, pos;
            cout << "Enter a number and bit position to toggle: ";
            cin >> num >> pos;
            toggleBit(num, pos);
            break;
        }
        case 4:
        {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            isPowerOfTwo(num);
            break;
        }
        case 5:
        {
            int a, b;
            cout << "Enter two numbers to swap: ";
            cin >> a >> b;
            swapUsingXOR(a, b);
            break;
        }
        case 6:
        {
            int n;
            cout << "Enter the number of elements: ";
            cin >> n;
            int arr[n];
            cout << "Enter " << n << " elements (where every element except one appears twice): ";
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            findSingleNumber(arr, n);
            break;
        }
        case 7:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
            break;
        }
    } while (choice != 7);

    return 0;
}

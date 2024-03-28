// Quick Sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan panjang element array:";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\nMaksimum panjang array adalah 20" << endl;
    }
    cout << "\n_______" << endl;
    cout << "\nEnter Array Element" << endl;
    cout << "\n_______" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

void swap(int x, int y)
{
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
    mov_count++;

}

void q_short(int low, int high)
{

    int temp;
    int pivot, i, j;
    if (low > high) { //step 1
        return;
    }

    pivot = arr[low]; //step 2
    i = low + 1; //step 3

}
int main()
{
    std::cout << "Hello World!\n";
}



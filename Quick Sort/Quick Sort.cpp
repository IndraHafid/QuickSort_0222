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
    j = high; //step 4

    while (i <= j) //step 10
    {
       
        //search for an element greater than pivot
        while ((arr[i] <= pivot) && (i <= high)) //step 5
        {
           i++; //step 6
           cmp_count++;
        }
        cmp_count++;
        //search for an element less than or equal to pivot
        while ((arr[j] > pivot) && (j >= low)) //step 7
        {
            j--; //step 8
            cmp_count++;
    }
    cmp_count++;
    if (i < j) //step 9
       {
           swap(i, j);

       }
    }
    if (low < j) { //step 11
        swap(low, j);
    }

    //recursive call to sort the leftnsub array
    q_short(low, j - 1); //step 12

    //recursuve call to sort the right sub array

    q_short(j + 1, high); //step 13

}

void display()
{
    cout << "\n---------------" << endl;
    cout << "Sorted Array" << endl;
    cout << "\n---------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "";
    }

    cout << "\n\nNumber of comparasions :" << cmp_count << endl;
    cout << "Number of data movments :" << mov_count << endl;

}

int main()
{
    char ch;

    do {
        input();
        q_short(0, n - 1);
        display();
        cout << "\n\nDo you want to continue? (y/n) :";
        cin >> ch;
        if (ch == 'n' || ch == 'N')
            break;


        system("pause");
        system("cls");

    } while (true);
    return 0;

}



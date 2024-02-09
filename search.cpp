#include <iostream>
#include <cassert>
using namespace std;

class vector
{
private:
    int *arr = nullptr;
    int size = 0;

public:
    vector(int size) : size(size)
    {
        if (size < 0)
        {
            size = 1;
        }
        arr = new int[size]{};
    }
    ~vector()
    {
        delete[] arr;
        arr = nullptr;
    }
    int getSize()
    {
        return size;
    }
    void set_value(int idx, int val)
    {
        assert(idx >= 0 && idx < size);
        arr[idx] = val;
    }

    int get_value(int idx)
    {
        assert(idx >= 0 && idx < size);
        return arr[idx];
    }

    void print()
    {
        for (int i = 0; i < size; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    void find_transposition(int value)
    {
        int first = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == value)
            {
                cout << "the value is found" << endl;
                for (int j = 0; j < size - 1; j++)
                {
                    arr[j] = arr[j + 1];
                }
                arr[size - 1] = first;
                for (int y = 0; y < size; y++)
                {
                    cout << arr[y] << " ";
                }
                cout << "\n";
            }
        }
    }
};
int main()
{
    vector v(5);
    for (int i = 0; i < 5; i++)
    {
        v.set_value(i, i);
    }
    v.print();
    v.find_transposition(2);
}
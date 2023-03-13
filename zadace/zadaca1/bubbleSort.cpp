#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& a)
{
    bool swap = true;
    while (swap) {
        swap = false;
        for (auto i = 0; i < a.size() - 1; i++) {
            if (a[i] > a[i + 1]) {
                a[i] += a[i + 1];
                a[i + 1] = a[i] - a[i + 1];
                a[i] -= a[i + 1];
                swap = true;
            }
        }
    }
}

void printVector(vector<int> a) {
    for (auto i = 0; i < a.size(); i++) {
        cout << a[i] << " ";

    }
    cout << endl;
}

int main(int argc, char const* argv[])
{
    vector<int> a{ 5,9,6,8,4,2,1 };

    printVector(a);

    bubbleSort(a);

    printVector(a);

}

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& vec) {
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    int temp;
    std::vector<int> sort;

    sort.push_back(5);
    sort.push_back(20);
    sort.push_back(33);
    sort.push_back(48);
    sort.push_back(19);
    sort.push_back(9);
    print(sort);

    int vecsize = sort.size();
    for (int j = 0; j < vecsize - 1; ++j) {

        int min = j;
        for (int i = j + 1; i < vecsize; ++i) {
            if (sort.at(min) > sort.at(i)) {
                min = i;
            }

        }
        if (min != j)
            swap(sort.at(j), sort.at(min));
    }

    print(sort);
    return 0;
}
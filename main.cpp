#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int tam;

    vector<int> v;
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);
    v.push_back(10);

    tam = v.size();

    for (int i = 0; i < tam; ++i)
        cout << v[i] << endl;
    cout << endl;


    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int n;
    int sum = 0;

    cout << "¬вед≥ть число \n";
    cin >> n;

    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << "—ума = " << sum << endl;

    return 0;
}
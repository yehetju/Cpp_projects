#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum = a + b + c + d;
    double ave = sum / (double)4;
    cout << "Sum = " << sum << "; Average = ";
    cout << fixed << setprecision(1) << ave;
    return 0;
}

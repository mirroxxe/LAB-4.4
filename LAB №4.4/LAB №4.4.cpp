#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double R, xp, xk, dx;

    cout << " R =  ";
    cin >> R;
    cout << " xp = ";
    cin >> xp;
    cout << " xk = ";
    cin >> xk;
    cout << " dx = ";
    cin >> dx;
    cout << fixed;
    cout << "-----------------------------" << endl;
    cout << "|" << setw(7) << "x" << "      |"
        << setw(7) << "y" << "      |" << endl;
    cout << "-----------------------------" << endl;


    for (double x = xp; x <= xk; x += dx) {
        double y;
        if (x <= -5)
            y = -3;
        else
            if (x > -5 && x <= -R)
            y = (3 * R + 3 * x) / (-R + 5);
        else
                if (x > -R && x <= R)
                 y = (sqrt(R * R) - (x * x));
        else
                    if (x > R && x <= 8)
                    y = x;
        else
                       
            y = R;
        cout << "|" << setw(12) << setprecision(3) << x
            << " |" << setw(12) << setprecision(3) << y
            << " |" << endl;

    }
    cout << "-----------------------------" << endl;

    return 0;
}
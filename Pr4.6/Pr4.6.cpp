#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double S, P;
    int i, k;

    // 1) while(…) {… while(…) {…} …};
    S = 0;
    i = 5;
    while (i <= 25)
    {
        P = 1;
        k = 1;
        while (k <= i * i)
        {
            P *= k;
            k++;
        }
        S += sqrt(i * i + P) / i;
        i++;
    }
    cout << S << endl;

    // 2) do{… do{…} while(…) …} while(…);
    S = 0;
    i = 5;
    do
    {
        P = 1;
        k = 1;
        do
        {
            P *= k;
            k++;
        } while (k <= i * i);
        S += sqrt(i * i + P) / i;
        i++;
    } while (i <= 25);
    cout << S << endl;

    // 3) for(…; …; i++) {… for(…; …; k++) {…} …};
    S = 0;
    for (i = 5; i <= 25; i++)
    {
        P = 1;
        for (k = 1; k <= i * i; k++)
        {
            P *= k;
        }
        S += sqrt(i * i + P) / i;
    }
    cout << S << endl;

    // 4)for(…; …; i--) {… for(…; …; k--) {…} …}. 
    S = 0;
    for (i = 25; i >= 5; i--)
    {
        P = 1;
        for (k = i*i ; k >= 1; k--)
        {
            P *= k;
        }
        S += sqrt(i * i + P) / i;
    }
    cout << S << endl;

    return 0;
}
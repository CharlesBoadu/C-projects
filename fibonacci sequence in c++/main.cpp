#include <iostream>

using namespace std;

int main()
{
    int nth_term, m1, n1, next_term;
    m1 = 0;
    n1 = 1;

    cout <<"Enter the nth term for the fibonacci sequence: ";
    cin>>nth_term;

    for (int i = 1; i <= nth_term; ++i) {
        if (i == 1) {
            cout<<m1<<" , ";
            continue;
        }
        if (i == 2) {
            cout <<n1<<" , ";
            continue;
        }

        next_term = m1 + n1;
        m1 = n1;
        n1 = next_term;

        cout << next_term << " , ";

    }

    return 0;
}

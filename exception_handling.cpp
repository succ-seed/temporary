#include <iostream>
using namespace std;

void fun(int k)
{
    try
    {
        if (k == 0)
        {
            throw k;
        }
        else if (k > 0)
        {
            throw 'K';
        }
    }
    catch (int k)
    {
        k = k + 1;
        cout << k << endl;
    }
    catch (char i)
    {
        cout << "hi " << i << endl;
    }
    catch (...)
    {
        cout << "access denied" << endl;
    }
}

int main()
{
    int p;
    cin >> p;
    fun(p);
    return 0;
}
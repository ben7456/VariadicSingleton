// Variadic singleton
// Copyright (C) 2018 Ben Luo

#include <iostream>

#include <singleton.h>

using namespace std;

class X
{
private:
    int m_i;
    int m_j;

public:
    X(int i, int j) : m_i(i), m_j(j)
    {
        cout << "Constructing X with " << i << " and " << j << endl;
    }

    ~X()
    {
        cout << "Destructing X with " << m_i << " and " << m_j << endl;
    }

    int GetSum()
    {
        return m_i + m_j;
    }

    int GetProduct()
    {
        return m_i * m_j;
    }
};

int main()
{
    using singleton::instance;

    cout << "Hello 1: " << instance<int>(1) << endl;
    cout << "Hello 2: " << instance<int>(2) << endl;
    cout << "Sum of 5 and 6: " << instance<X>(5, 6).GetSum() << endl;
    cout << "Product of 7 and 8: " << instance<X>(7, 8).GetProduct() << endl;
    return 0;
}

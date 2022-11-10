#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

template <typename T, typename T1, typename T2, typename T3>
void create(T* a, const T1 n, const T2  HIGH, const T3 LOW)
{
    for (int i = 0; i < n; i++)
        a[i] = LOW + rand() % (HIGH - LOW + 1);
}
template <typename T, typename T1>
void print(T* a, const T1 n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
template <typename T, typename T1>
T find_maximum(T* a, const T1 n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= max)
            max = a[i];
    }
    return max;
}

int main()
{
    srand(time(NULL));

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int n = 10;
    int a[n];
    const int HIGH = 53;
    const int LOW = -17;

    cout << "a[10] = { ";
    create(a, n, HIGH, LOW);
    print(a, n);
    cout << "}" << endl;
    cout << "Найбільший елемент масиву = " << find_maximum(a, n) << endl;

    return 0;
}
//СПОСІБ БЕЗ ШАБЛОНІВ

//#include <iostream>
//#include <Windows.h>
//#include <ctime>
//
//using namespace std;
//
//void create(int* a, const int n, const int  HIGH, const int LOW)
//{
//    for (int i = 0; i < n; i++)
//        a[i] = LOW + rand() % (HIGH - LOW + 1);
//}
//void print(int* a, const int n)
//{
//    for (int i = 0; i < n; i++)
//        cout << a[i] << " ";
//}
//int find_maximum(int* a, const int n)
//{
//    int max = a[0];
//    for (int i = 0; i < n; i++)
//    {
//        if (a[i] >= max)
//            max = a[i];
//    }
//    return max;
//}
//
//int main()
//{
//    srand(time(NULL));
//
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    const int n = 10;
//    int a[n];
//    const int HIGH = 53;
//    const int LOW = -17;
//
//    cout << "a[10] = { ";
//    create(a, n, HIGH, LOW);
//    print(a, n);
//    cout << "}" << endl;
//    cout << "Максимальний елемент масиву = " << find_maximum(a, n) << endl;
//
//    return 0;
//}
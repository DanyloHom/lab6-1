#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

int rand(const int A,const int B) //функція, що генерує випадкові числа 
{
    int x = A + rand() % (B - A + 1);
    return x;
}

void print(int *a, const int size) //функція, що виводить елементи масиву
{
    for(int i=0; i<size; i++)
    {
        cout<< setw(4) << a[i];
    }
    cout << endl;
}

void create(int *a,const int size,const int A,const int B) //функція, що створює масив
{
    for(int i=0; i<size; i++)
    {
        a[i]=rand(A,B);
    }
}

int count(int *a, const int size) //функція, що підраховує кількість елементів, що задовільняють умову
{
    int j=0;
    for(int i=0; i<size; i++)
    {
        if(a[i]%4 != 0 && a[i] > 0)
        j++;
    }
    return j;
}

int sum(int *a, const int size) //функція, що підраховує суму елементів, що задовільняють умову
{
    int S=0;
    for(int i=0; i<size; i++)
    {
        if(a[i]%4 != 0 && a[i] > 0)
        S+=a[i];
    }
    return S;
}

void zero(int *a, const int size) //функція,що замінює елменти, що задоільняють умову, на нулі
{
    for(int i=0; i<size; i++)
    {
       if(a[i]%4 != 0 && a[i] > 0)
       a[i]=0;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    const int s = 23;
    int r[s];

    int A = -19;
    int B = 25;

    create(r, s, A, B);
    print(r, s);
    cout << setw(4) << count(r, s)<< endl;
    cout << setw(4) << sum(r, s)<< endl;
    zero(r, s);
    print(r, s);

 return 0;
}

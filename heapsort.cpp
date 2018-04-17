#include<iostream>
using namespace std;
int nr;
int v[100];
int dad, son;

int read_data()
{
    cin >> nr;
    for(int i = 1; i <= nr; i++)
    {
     cout << "V[" << i << "] : ";
     cin >> v[i];
    }
}
int make_heaps()
{
    for(int i = 2; i <= nr; i++)
    {
     int searched = v[i];
     dad = i/2;
     son = i;
    while(dad >= 1 && v[dad] < v[son])
    {
    swap(v[dad], v[son]);
    son = dad;
    dad = son/2;
    }
    }

}
int print_data()
{
    for(int i = 1; i <= nr; i++)
    cout << v[i] << endl;
}
int main()
{
read_data();
make_heaps();
print_data();
}

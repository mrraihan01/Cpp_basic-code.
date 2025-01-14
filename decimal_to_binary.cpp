#include<bits/stdc++.h>
using namespace std;

void using_vector(int n)
{
    vector<int> v;

    while (n != 0)
    {
        int x = n%2;
        v.push_back(x);
        n = n/2;
    }
    
    cout << "Binary number is : ";
    for(int i=v.size()-1; i>=0; i--)
    {
        cout << v[i];
    }
    cout << endl;

}

void without_vector(int n)
{
    int bn = 0, pow = 1,s;
    while (n != 0)
    {
        int r = n%2;
        n = n/2;
        s = r*pow;
        pow *= 10;
        bn += s;
    }

    cout << "Binary number is : " << bn << endl;
    
}

int main()
{
    int n;
    cout << "Enter the decimal number : ";
    cin >> n;


    // using vector : 
    using_vector(n);

    // whithout vector : 
    without_vector(n);
}
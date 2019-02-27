#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i,n, f[20];
                    cout<<"========================\n";
                    cout<<"====FIBONACCI===========\n";
                    cout<<endl<<endl;
                    cout<<"MASUKKAN BATASAN DERET : ";
                    cin>>n;
    for (i=1; i<=n; i++)
    {//menampilkan deret
        if (i<2)
        f[i]=i ;
        else
        f[i] =f[i-1]+f[i-2];
    }
    for (i=1; i<=n; i++)
    {
        cout<<f[i]<<" ";
    }
                cout<<endl<<endl;
                cout<<"Deret ke-"<<n<<" "<<" = "<<f[n];
    getche();

}

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int A [10];
    int index [10];
    int i,j,k,n;

    cout <<" ===============PENCARIAN ANGKA================" <<endl;
    cout <<" ============ MASUKKAN PENGULANGAN=========== :";
    cin>>n;
    cout<<endl;

    for(i=1;i<=n;i++)
    {
      cout<<"angka ke-"<<i<<":";
      cin>>A[i];
    }
        cout<<endl;
        cout<<"\tMasukkan angka yang akan dicari :";
        cin>>k;

        j=0;
        for(i=0;i<10;i++)
        {
            if(A[i]==k)
            {
                index[i];
                j++;
            }
        }
    if (j>0)
    {
        cout<<"\n";
        cout<<"\t angka "<< k <<" yang anda cari ada" << j <<"buah\n";
        cout<<"\t angka tersebut terdapat pada index ke ";

        for(i=0;i<j;i++)
        {
            cout<<index[i]<<"";
        }
        cout<<"\n";
    }
    else
    {
        cout<<"\n";
        cout<<"\t MAAF, angka tidak ditemukan\n";
    }
    return 0;
}

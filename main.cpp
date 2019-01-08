#include <iostream>
#include <fstream>

using namespace std;
ifstream in ("data.in");
ofstream out ("data.out");
int n, z[10000],l[10000],z1[10000],l1[10000],i,j,aux1,aux2,k;
char q;
int main()
{
    in>>n;
    for(i=0;i<n;i++)
    {
        in>>z[i]>>q>>l[i];
    }

    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(l[i]>l[j])
                {
                    aux1=l[i];l[i]=l[j];l[j]=aux1;
                    aux2=z[i];z[i]=z[j];z[j]=aux2;
                }

    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(l[i]==l[i+1])
              if(z[i]>z[j])
                    {
                        aux2=z[i];z[i]=z[j];z[j]=aux2;
                    }
    for(i=0;i<n;i++)
    {if(l[i]!=l1[i-1])
        {
            z1[i]=z[i];
            l1[i]=l[i];
            k++;
        }
        else if(z[i]!=z1[i-1])
                {
                    {z1[i]=z[i];
                    l1[i]=l[i];
                    k++;}
                }

    }

    for(i=0;i<k;i++){
        if(z1[i]>0&&z1[i]<=9)out<<'0'<<z1[i];
            else out<<z1[i];
            out<<q;
        if(l1[i]>0&&l1[i]<=9)out<<'0'<<l1[i];
            else out<<l1[i];
            out<<endl;}


    return 0;
}

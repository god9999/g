#include<iostream>
using namespace std;

int main(void)
 {
   int a[4],b[5],c[10],i;
   int q,w;
   cin>>q;
   cout<<"Enter Elements in 1st Array: ";
   for(i=0;i<q;i++)
   {
   cin>>a[i];
   }
   cin>>w;
   cout<<"Enter Elements in 2nd Array: ";
   for(i=0;i<w;i++)
   {
   cin>>b[i];
   }
   cout<<"\nElements of Array After Merge: ";
   for(i=0;i<10;i++)
   {
    c[i]=a[i];
    c[i+9]=b[i];
   }
   for(i=0;i<9;i++)
   {
   cout<<c[i];
   }
return 0;
 }

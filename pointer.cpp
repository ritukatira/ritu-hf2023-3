#include<iostream>
using namespace std;


//swapping by passing address using pointer
swap(int* a,int* b)
{
   int temp;
   temp= *a;
   *a= *b;
   *b= temp;

}

int main()
{
     int a=2;
     int b=3;

    swap(&a,&b);//using pointer
    cout<<" before  swapping using pointer a= 2 and b=3 "<<endl;
    cout<<" after  swapping using pointer "<<endl;
    cout<<" a = " <<a<<endl;
    cout<<" b = "<<b<<endl;

    return 0;
}

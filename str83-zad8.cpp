//По зададен месец и година, програмата определя броя на дните в този месец
#include <iostream>
using namespace std;
int main ()
{
    int month;
    int year;

    cout<<"month="; cin>>month;
    cout<<"year="; cin>>year;

    switch (month)
    {
        case 1: cout<<31;break;
        case 2: if(year%4==0) cout<<29; else cout<<28;break;
        case 3: cout<<31;break;
        case 4: cout<<30;break;
        case 5: cout<<31;break;
        case 6: cout<<30;break;
        case 7: cout<<31;break;
        case 8: cout<<31;break;
        case 9: cout<<30;break;
        case 10: cout<<31;break;
        case 11: cout<<30;break;
        case 12: cout<<31;break;
        default: cout<<"Nqma takuv mesec";

    }

    return 0;
}

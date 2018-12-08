#include <iostream>
using namespace std;
string sample_switch_kabisat(int);
int main()
{
    int val;
    cout << "masukan tahun : ";
    cin  >> val;

    cout<<" apakah tahun "<<val<<" tahun kabisat :"<<sample_switch_kabisat(val)<<endl;
    return 0;
}
string sample_switch_kabisat(int a)
{
   string result =  " ";
   switch (a % 400)
   {
       case 0:
       result = "ya kabisat";
       break;

       case 1 ... INT_MAX:
        switch (a % 100)
        {
          case 1 ... INT_MAX:
            switch (a % 4)
            {
             case 0:
             result = "ya kabisat";
             break;

             case 1 ... INT_MAX:
             result = "bukan kabisat";
             break;
            }           
        };
        break;
     
       default:
       result = "bukan kabisat";
       break;
   }
   return result;
}
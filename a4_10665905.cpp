#include <iostream>
using namespace std;




int GCD(int Value1,int Value2){


int remainder=Value1 % Value2 ;
        while(remainder!= 0){
            Value1=Value2;
            Value2=remainder;
            remainder=Value1%Value2;
        }
return Value2;


}

int main()
{
int Value1,Value2;
cout<<"Enter the smaller number ";
cin>>Value1;
cout<<"Enter the second number";
cin>>Value2;
cout<<"The GCD of "<<Value1<<" and "<<Value2<<" is" <<GCD(Value1,Value2);




    return 0;
}

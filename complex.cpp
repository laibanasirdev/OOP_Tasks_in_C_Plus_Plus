//this exaple is to understand operator overloading  concept
#include<iostream>
using namespace std;
class complexNumber{
    private:
    float real;
    float imag;
    public:
    //default constructor
    complexNumber(){
      real=0;
      imag=0;
    }
    //parametrized constructor
    complexNumber(float x,float y){
     real=x;
     imag=y;
    }
    complexNumber operator+(complexNumber c){
      complexNumber r;
      r.real=real+c.real;
      r.imag=imag+c.imag;
      return r;
        
    }
    complexNumber operator-(complexNumber c){
        complexNumber r;
      r.real=real-c.real;
      r.imag=imag-c.imag;
      return r;  
    }
 void setData(){
    cout<<"******************************"<<endl;
      cout <<" Enter Number details   "<<endl;
       cout<<"******************************"<<endl; 
     cout<<"enter real part     : ";
     cin>>real;
     cout<<"enter imaginary part :";
     cin>>imag;
 }
 void getData(){
     char sign;
     if(imag<0){
         sign='-';
         imag=-imag;
     }
     else{
         sign='+';
     }
     cout<<real<<sign<<"i"<<imag<<endl;
 }
  
};
int main()
{complexNumber a,b,c;
a.setData();
b.setData();
c=a+b;
cout<<"addirion of two complex number is "<<endl;
c.getData();
c=a-b;
cout<<"subtractio  of two complex number is "<<endl;
c.getData();


    

return 0;
}

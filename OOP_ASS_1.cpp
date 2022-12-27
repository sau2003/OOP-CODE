// 1. OOPL Assignment 1
 /*Implement a class Complex which represents the Complex Number data type. Implement the following.
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overload operator+ to add two complex numbers.
3. Overload operator* to multiply two complex numbers.
4. Overload operators << and >> to print and read Complex Numbers.*/

#include <iostream>
using namespace std;
int n1,n2,n3,n4;
class complex     //defining class
 {   
    public:
    int realp;    // Declaring variables                      
    int imagp;                          

    complex(int areal=0, int aimag=0 )  //constructor
    {
        realp=areal;      
        imagp=aimag;       
    }

    complex complex_addition(complex a1, complex a2)         
    {
        complex atemp;       // creating temporary variable                  

        atemp.realp= a1.realp + a2.realp;    
        atemp.imagp= a1.imagp + a2.imagp;     

        return atemp; 
    }
    
    complex complex_multiplication(complex a1, complex a2)     
    {
        complex btemp;                       

        btemp.realp= a1.realp * a2.realp-a1.imagp*a2.imagp;        
        btemp.imagp= a1.realp * a2.imagp+a1.imagp*a2.realp;        

        return btemp;
    }

};

int main()
{
    

    cout<<"Enter the real part of 1st num : "<<endl;
    cin>>n1;
    cout<<"Enter the imag part of 1st num : "<<endl;
    cin>>n2;
    cout<<"Enter the real part of 2nd num : "<<endl;
    cin>>n3;
    cout<<"Enter the imag part of 2nd num : "<<endl;
    cin>>n4;
    complex a1(n1,n2);                       
    complex a2(n3,n4);                       
    complex a3;                             
    a3=a3.complex_addition(a1,a2);          
    cout<<"Addition of 1st and 2nd Complex number : "<<a3.realp<<" + i "<<a3.imagp;    
    complex a4;                             
    a4=a4.complex_multiplication(a1,a2);    
    cout<<"\nMultiplication of 1st and 2nd Complex number : "<<a4.realp<<" + i "<<a4.imagp;
    return 0;
}

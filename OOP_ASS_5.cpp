/*Write a function template selection Sort. Write a program that 
inputs, sorts and outputs an integer array and a float array.*/
#include<iostream>
using namespace std;
# define N 10
template <class T>
void sort(T arr[], int SIZE)
{
 for (int i = 0; i < SIZE; i++)
 {
for (int j = i+1; j < SIZE; j++)
{
 if (arr[i] > arr[j])
 {
 T temp;
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
 }
}
 }
}
int main(){
int int_array[N];
float float_array[N];
 int n;
 cout<<"enter a number of element in array:"<<endl;
 cin>>n;
cout<<"Enter integer array elements:"<<endl;
for (int i = 0; i < n; i++)
{
 cin>>int_array[i];
}
cout<<"Enter floating array elements:"<<endl;
for (int i = 0; i < n; i++)
{
 cin>>float_array[i];
}
sort(int_array,n);
sort(float_array, n);
cout<<"After sorting they are :"<<endl;
 cout<<"sorting elements for integer array:"<<endl;
for (int i = 0; i < n; i++)
{
 cout<<int_array[i]<<", ";
}
cout<<endl;
 cout<<"sorting element for floating element:"<<endl;
for (int i = 0; i < n; i++)
{
 cout<<float_array[i]<<", ";
}
return 0;
}

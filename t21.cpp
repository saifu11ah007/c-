#include<iostream>
using namespace std;
int main(){
  int s1, s2, s3, s4, sum;
  float percentage, average
  cout<<"enter s1 marks: ";
  cin>>s1;
  cout<<"enter s2 marks: ";
  cin>>s2;
  cout<<"enter s3 marks: ";
  cin>>s3;
  cout<<"enter s4 marks: ";
  cin>s4;
  sum = s1 + s2 + s3+ s4;
  percentage = sum/200.0*100;
  average = sum/4;
  cout<<"sum is: "<<sum<<endl;
  cout<<"average is: "<<average<<endl;
  cout<<"percentage is: "<<percentage<<endl;

  return 0;
}
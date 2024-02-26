#include<iostream>
using namespace std;
int main(){
  int price, tax;
  float total_price;
  cout<<"Enter price without tax: ";
  cin>>price;
  cout<<"Enter tax: ";
  cin>>tax;
  total_price = price + (price*(tax/100.0));
  cout<<"Total price is: "<<total_price;
  
  return 0;
}
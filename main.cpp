#include <iostream>
#include "stack.cpp"
using namespace std;
int main() {
  Stack <int> s1;

  s1.push(10);
  s1.push(20);
  s1.push(30); 
  s1.push(40);
  s1.push(50);
  s1.push(60);
  s1.push(70);
  s1.push(80);
  s1.push(90);
  s1.push(100);

  
  s1.pop();
 
cout<<s1.top()<<" "<<s1.size();



}
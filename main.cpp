#include <iostream>
#include "stack.cpp"
using namespace std;
int main() {
  Stack s1(5);

  s1.push(10);
  s1.push(20);
  s1.push(30);
  s1.push(40);
  s1.push(50);
 
  s1.pop();
 
cout<<s1.top()<<" "<<s1.size();



}
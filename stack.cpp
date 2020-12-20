#include<bits/stdc++.h>
using namespace std;

template <typename T>

class Stack{
private:
T *data;
int nextindex=0;
int capacity;
public:
Stack(int totalSize){
data=new T[capacity];
capacity=totalSize;
}

/*
top 
*/
T top(){
return data[nextindex-1];
}


bool isEmpty(){
  if(nextindex==0)
  return true;
  else
  return false;
}

void push(T value){
if(nextindex==capacity)
cout<<"stack is full";
data[nextindex]=value;
nextindex++;
}

T pop(){
  if(isEmpty())
     return 0; // stack is empty
  T value=data[nextindex];
  nextindex--;
return value;
}

int size(){
  return capacity;
}


};
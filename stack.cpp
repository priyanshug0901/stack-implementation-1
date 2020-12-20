#include<bits/stdc++.h>
using namespace std;

class Stack{
private:
int *data;
int nextindex=0;
int capacity;
public:
Stack(int totalSize){
data=new int[capacity];
capacity=totalSize;
}

/*
top 
*/
int top(){
return data[nextindex-1];
}


bool isEmpty(){
  if(nextindex==0)
  return true;
  else
  return false;
}

void push(int value){
if(nextindex==capacity)
cout<<"stack is full";
data[nextindex]=value;
nextindex++;
}

int pop(){
  if(isEmpty())
     return 0; // stack is empty
  int value=data[nextindex];
  nextindex--;
return value;
}

int size(){
  return capacity;
}


};
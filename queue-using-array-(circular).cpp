#include<iostream.h>
using namespace std;
#define Max 5
int arr[100];
int front = -1, rear = -1;
bool isempty(){
	if (front == -1 && rear == -1)
	return true;
	else
	return 
	false;
}
bool isfull(){
	if ( rear == Max-1 && front == 0)
	return true;
	else if(rear == front-1)
	return true;
	else
	return false;
}
void Enqueue(int x){
	if (isfull())
	{
		cout<<"Queue is full!"<<endl;
		return;
	}
	else if(isempty()){
		front++;
		rear++;
		arr[rear] = x;
	}
	else {
		rear=(rear+1)%Max;
		
		arr[rear]= x;
	}
}
int Dequeue(){
	if (isempty())
	return NULL;
	else 
	{
		front = (front+1)%Max;
		return arr[front];
	}
}

int Front(){
	if(!isempty())
	{
	cout<<endl<<"front element : "<<arr[front]<<endl;
	return arr[front];
	}
}

void print(){
	if (!isempty())
	{
	for(int i =front ; ; )
	{
		cout<<arr[i]<<" ";
		
		if (i == rear)
		return;
		else
		i = (i+1)%Max;
		
	}
	}
	cout<<endl;
}
int main()
{
	Enqueue(5);
	Enqueue(34);
	Enqueue(6);
	Enqueue(8);
	Enqueue(9);
	Dequeue();
	Dequeue();
	Enqueue(10);
	Dequeue();
	print();
	Front();
}
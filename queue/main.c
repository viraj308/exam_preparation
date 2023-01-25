#include<stdio.h>
#define size 5

int queue[size], front = -1, rear = -1;

void enQueue(int);
void deQueue();
void display();

void enQueue(int value) {
	if(rear == size - 1) {
		printf("\nqueue is full");
	}
	else {
		if (front == -1) {
			front = 0;
		}
		rear++;
		queue[rear] = value;
		printf("\nvalue added %d", queue[rear]);
	}
}
void display() {
	if(rear == -1) {
		printf("\nqueue is empty");
	}
	else {
		printf("\nHere is the list of items in the queue: \n");
		for(int x = front; x <=rear; x++) {
			printf("%d\n", queue[x]);
		}
	}

}
void deQueue() {
	if(rear == -1) {
		printf("\nqueue is empty");

	}
	else {
		printf("\nDeleted item %d", queue[front]);
		front++;
		if(front > rear) {
			front = rear = -1;
		}
	}
}
int main () {
	enQueue(1);
	enQueue(2);
	enQueue(3);
	enQueue(4);
	enQueue(5);
	enQueue(8);
	enQueue(8);
	deQueue();
	deQueue();
	deQueue();
	deQueue();
	deQueue();
	deQueue();
	enQueue(8);
	display();
}

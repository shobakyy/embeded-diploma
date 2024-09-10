#include<stdio.h>
#define MAX_SIZE 100
struct Queue {
int items [MAX_SIZE];
int front;
int rear;
};
void reverseQueue (struct Queue* q) {
int temp;
while (q->front < q->rear)
temp = q->items [q->front];
q->items[q->front] = q->items[q->rear];
q->items[q->rear] = temp;
q->front++;
q->rear--;
}
int main() {
struct Queue q = {10, 20, 30, 40};
printf("Original Queue: ");
for (int i = q.front; i <= q.rear; i++) {
printf("%d ", q.items[i]);
}
reverseQueue (&q);
printf("\nReversed Queue: ");
for (int i = q.front; i <= q.rear; i++) {
printf("%d ", q.items[i]);
}
return 0;
}
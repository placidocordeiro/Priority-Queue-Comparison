#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include <stdlib.h>
#include <stdio.h>

#define MAX_HEAP_SIZE 2000

// Heap Queue Definitions
typedef struct HeapQueue {
    int size;
    int items[MAX_HEAP_SIZE];
    int priorities[MAX_HEAP_SIZE];
} HeapQueue;

// Function prototypes for Heap Queue
HeapQueue *create_heap_queue();
int find_parent_node(int i);
int find_left_child(int i);
int find_right_child(int i);
void swap(int *a, int *b);
int enqueue_heap(HeapQueue *queue, int priority, int item);


// Priority Queue Without Heap Definitions
typedef struct QueueNode {
    int priority;
    int item;
    struct QueueNode *next;
} QueueNode;

typedef struct PriorityQueue {
    QueueNode *head;
} PriorityQueue;

// Function prototypes for Priority Queue Without Heap
PriorityQueue* create_queue();
int is_empty(PriorityQueue *queue);
int enqueue(PriorityQueue *queue, int priority, int item);
void print_priority_queue(PriorityQueue *queue);

#endif

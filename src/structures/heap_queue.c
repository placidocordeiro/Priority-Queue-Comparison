#include "structures.h"

HeapQueue *create_heap_queue()
{
    HeapQueue *new_queue = (HeapQueue*) malloc(sizeof(HeapQueue)); 
    new_queue->size = 0;
    return new_queue;
}

int find_parent_node(int i)
{
    return i / 2;
}

int find_left_child(int i)
{
    return i * 2;
}

int find_right_child(int i)
{
    return i * 2 + 1;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int enqueue_heap(HeapQueue *queue, int priority, int item)
{
    int comparisons = 0;

    if (queue->size >= MAX_HEAP_SIZE)
    {
        printf("Heap overflow\n");
        return 0;
    }
    else
    {
        queue->priorities[++queue->size] = priority;
        queue->items[queue->size] = item;
        
        int key_index = queue->size;
        int parent_index = find_parent_node(queue->size);

        // while not reaching the root and while this is greater than the parent
        while (parent_index >= 1 && 
                queue->priorities[key_index] > queue->priorities[parent_index])
        {
            swap(&queue->priorities[key_index], &queue->priorities[parent_index]);
            swap(&queue->items[key_index], &queue->items[parent_index]);

            // update the "status" of the old parent node now swapped as a child;
            key_index = parent_index;
            parent_index = find_parent_node(key_index);

            comparisons++;
        }
        
        return comparisons;
    }
}

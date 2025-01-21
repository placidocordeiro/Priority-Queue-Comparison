#include "structures.h"

PriorityQueue* create_queue()
{
    PriorityQueue *new_node = (PriorityQueue*) malloc(sizeof(PriorityQueue));

    new_node->head = NULL;
    return new_node;
}

int is_empty(PriorityQueue* queue)
{
    return (queue->head == NULL);
}   

int enqueue(PriorityQueue *queue, int priority, int item)
{
    int comparisons = 0;
    QueueNode *new_node = (QueueNode*) malloc(sizeof(QueueNode));
    new_node->priority = priority;
    new_node->item = item;

    if (is_empty(queue) || priority > queue->head->priority)
    {
        new_node->next = queue->head;
        queue->head = new_node;
        return 0;
    } 
    else
    {
        QueueNode* temp = queue->head;
        while (temp->next != NULL && temp->next->priority > priority)
        {
            temp = temp->next;
            comparisons++;
        }
        new_node->next = temp->next;
        temp->next = new_node;

        return comparisons;
    }
}

void print_priority_queue(PriorityQueue *queue)
{
    QueueNode *temp = queue->head;
    while (temp != NULL)
    {
        printf("(i:%d, p:%d);\n", temp->item, temp->priority);
        temp = temp->next;
    }   
}

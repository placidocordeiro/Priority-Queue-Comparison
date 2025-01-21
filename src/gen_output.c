#include "structures/structures.h"

int main()
{
    PriorityQueue *queue_without_heap = create_queue();
    HeapQueue *heap_queue = create_heap_queue();

    FILE *input_file;
    FILE *output_file; 

    char buffer[20];

    input_file = fopen("../data/input.txt", "r");
    output_file = fopen("../data/output.txt", "w");
    

    if (input_file == NULL)
    {
        printf("\nInput file not found\n");
        exit(1);
    } 

    while (fgets(buffer, sizeof(buffer), input_file))
    {
        int priority = atoi(buffer);
        int comparisons_without_heap;
        int comparisons_with_heap;
        
        comparisons_without_heap = enqueue(queue_without_heap, priority, 1);
        
        comparisons_with_heap = enqueue_heap(heap_queue, priority, 0);

        fprintf(output_file, "%d %d %d\n", priority, comparisons_without_heap, comparisons_with_heap);
    }

    fclose(input_file);
    fclose(output_file);
}

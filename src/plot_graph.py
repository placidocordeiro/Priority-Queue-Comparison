import os
import matplotlib
matplotlib.use('TkAgg')
import matplotlib.pyplot as plt

without_heap_x = []
without_heap_y = []
with_heap_x = []
with_heap_y = []

file_name = "../data/output.txt"

if not os.path.exists(file_name):
    print(f"The file {file_name} doesn't exist")
else:
    with open(file_name, "r") as file:
        for line in file:
            line = line.split()

            without_heap_x.append(int(line[0]))
            without_heap_y.append(int(line[1]))

            with_heap_x.append(int(line[0]))
            with_heap_y.append(int(line[2]))

plt.title("Enqueue/Insert - PQ with Heap vs PQ without Heap")
plt.xlabel('Priority')
plt.ylabel('Number of Comparisons')

plt.grid(True, 'major', 'both')

plt.plot(without_heap_x, without_heap_y, '.', color='red', label='Without heap')
plt.plot(with_heap_x, with_heap_y, '.', color='blue', label='With heap')

plt.legend()

plt.show()

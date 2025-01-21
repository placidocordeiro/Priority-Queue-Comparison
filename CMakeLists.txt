cmake_minimum_required(VERSION 3.28.3)

project(Priority-Queue-Comparison VERSION 1.0.0)

set(CMAKE_C_STANDARD 11)

add_executable(gen_input src/gen_input.c)
add_executable(gen_output src/gen_output.c)

target_sources(gen_output PRIVATE
    src/structures/heap_queue.c
    src/structures/queue.c
)

target_include_directories(gen_output PRIVATE src/structures)

add_custom_command(
    TARGET gen_output POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E echo "Running gen_input"
    COMMAND gen_input
    COMMAND ${CMAKE_COMMAND} -E echo "Running gen_output"
    COMMAND gen_output
)

add_dependencies(gen_output gen_input)

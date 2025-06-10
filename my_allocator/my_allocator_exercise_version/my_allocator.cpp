#include "my_allocator.h"
#include <unistd.h>

namespace myAllocator{

// Task 3: write an allocate function
// 1. check if the requested size is zero. If it is, then we return nullptr;
// 2. call `get_free_block` to see if there already exists a block of memory
//    that is marked as free and can accomodate the given size. If a sufficiently
//    large free block is found, we will simply mark that block as not-free and 
//    return the next header point.
// 3. If no sufficient large free block is found, we need to extend the heap by
//    calling `sbrk()`. So first compute the requested total size $total_size = sizeof(header_t) + size$.
//    And update the header, head and tail. If head is null, then update it to header. If tail is not
//    null, then update header as tail.
// As explained earlier, we hide the header from the caller and hence return (void*)(header + 1).
void* malloc(size_t size){

    // T3.1
    

    // T3.2
    

    // T3.3
    
}

// Task 2: write a fucntion named `get_free_block`
// where you get one parameter `size` - the size of needed memory
// and a pointer `header_t*` should be returned.
// Find the first free block and return its header pointer.
header_t* get_free_block(size_t size) {

}

// Task 4: write a `free` fucntion
// 1. Check validity.
// 2. If the block-to-be-freed is at the end of the heap
//    we can release it to the OS. Or we mark it 'free'
//    and hope to reuse it later.
void free(void* block) {

    // T4.1

    // T4.2 the block to be freed is at the end of the heap

    // the block is not the last one in the linked list
    // we simply set the is_free as true
}

// Task 5: write a function named `calloc`
// which allocates memory for an array of num elements 
// of nsize bytes and return a pointer to the allocated memory.
void* calloc(size_t num, size_t nsize) {

}

// write a function named `realloc`
// 1. validity check
// 2. get the block's header and see if the block already has the size
//    to accomodate the requested size. If it does, there's nothing to be done
// 3. if the current block does not have requested size, then we call malloc()
//    to get a block of the requested size.
void* realloc(void* block, size_t size) {

}


} 

int main() {
    // test 1
    int* p1 = (int*)malloc(sizeof(int));
    *p1 = 42;
    std::cout << "p1: " << *p1 << std::endl; // should output 42
    free(p1);

    return 0;
}
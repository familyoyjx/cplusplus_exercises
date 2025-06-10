#pragma once

#include <iostream>
#include <cstddef>
#include <mutex>
#include <cstring>


namespace myAllocator{

constexpr size_t ALIGN = 16; // required alignment

// Task 1: define the block
// Q1: What's the size of this struct?
struct header_t {
    size_t size;
    bool is_free;
    header_t* next;

    // constructor
    header_t(size_t sz, bool free, header_t* nxt):
        size(sz), is_free(free), next(nxt) {}
};

void* malloc(size_t size);
header_t* get_free_block(size_t size);
void free(void* block);
void* calloc(size_t num, size_t nsize);

std::mutex global_malloc_mutex;
header_t* head;
header_t* tail;


}
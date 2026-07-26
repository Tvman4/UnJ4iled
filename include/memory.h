#ifndef MEMORY_H
#define MEMORY_H

#include <stdint.h>
#include <stdbool.h>

typedef struct {
    uint64_t base_address;
    uint64_t slide_offset;
    uint32_t page_table_flags;
    bool     pac_authenticated;
} kernel_vector_context_t;

bool attempt_kernel_vector_injection(void);

#endif

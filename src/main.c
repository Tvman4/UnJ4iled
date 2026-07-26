#include <stdio.h>
#include <stdbool.h>
#include "../include/memory.h"

int main(int argc, char *argv[]) {
    char input;
    
    printf("==================================================\n");
    printf("   UnJ4iled Interactive Execution Interface       \n");
    printf("==================================================\n");
    printf("[?] Press [B] to trigger kernel vector routine: ");
    
    input = getchar();
    
    if (input == 'b' || input == 'B') {
        printf("\n[+] Trigger button pressed.\n");
        bool success = attempt_kernel_vector_injection();

        if (!success) {
            printf("\n[!] Execution halted: Hardware security traps intercepted the pointer modification attempt.\n");
        }
    } else {
        printf("\n[-] Execution aborted by user.\n");
    }

    return 0;
}

/*#include <stdio.h>

int main() {
int *a;
int address=0x600000;
a=(int*)address;
*a=50;
printf("%d",*a);


    return 0;
}*/
// that will makes Segmentation fault cuz the system saves its data from write without permission <3
// we can solve that with
#include <windows.h>
#include <stdio.h>

int main() {
    unsigned int inputAddr;
    printf("Enter memory address in hex (e.g., 0x600000): ");// get address form user
    scanf("%x", &inputAddr);


    void *requestedAddress = (void *)inputAddr; //convert to pointer


   void *ptr = VirtualAlloc((void *)inputAddr, 4096,
                         MEM_RESERVE | MEM_COMMIT,
                         PAGE_READWRITE);

if (ptr == NULL) {
    printf("Address not available. Trying system-assigned address...\n");

    ptr = VirtualAlloc(NULL, 4096,
                       MEM_RESERVE | MEM_COMMIT,
                       PAGE_READWRITE);

    if (ptr == NULL) {
        printf("VirtualAlloc still failed! Error: %lu\n", GetLastError());
        return 1;
    } else {
        printf("Success! Memory allocated at %p\n", ptr);
    }
}



    int *intPtr = (int *)ptr;
    *intPtr = 100;


    printf("Successfully wrote to address %p, value = %d\n", intPtr, *intPtr);


    VirtualFree(ptr, 0, MEM_RELEASE);

    return 0;
}

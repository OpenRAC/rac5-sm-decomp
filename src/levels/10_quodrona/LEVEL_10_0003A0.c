/* LEVEL_10:0x0003A0 -- placement copy of LEVEL_01_000580.c: when the checker accepts the code, stores the byte into the matching slot (pairs for 2-3 and 4-5, single otherwise) of the global block, forwards the other two arguments and reports 1. */
typedef struct Block {
    char pad000[0x854];
    unsigned char b[10];
} Block;

extern Block *D_001FCFAC;

extern unsigned int func_000318(int index, unsigned int bit);
extern void func_1A7C10(void *a, void *b);

int func_0003A0(int value, unsigned int slot, int a, int b)
{
    if (func_000318(value, slot) != 0) {
        if (slot - 2 < 2) {
            D_001FCFAC->b[2] = value;
            D_001FCFAC->b[3] = value;
        } else if (slot - 4 < 2) {
            D_001FCFAC->b[4] = value;
            D_001FCFAC->b[5] = value;
        } else {
            D_001FCFAC->b[slot] = value;
        }
        func_1A7C10((void *)a, (void *)b);
        return 1;
    }
    return 0;
}

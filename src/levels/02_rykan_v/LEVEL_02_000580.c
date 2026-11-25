/* LEVEL_02:0x000580 -- placement copy of LEVEL_01_000580.c: when the checker accepts the code, stores the byte into the matching slot (pairs for 2-3 and 4-5, single otherwise) of the global block, forwards the other two arguments and reports 1. */
typedef struct Block {
    char pad000[0x854];
    unsigned char b[10];
} Block;

extern Block *D_00208C2C;

extern unsigned int func_0004F8(int index, unsigned int bit);
extern void func_1B84D0(void *a, void *b);

int func_000580(int value, unsigned int slot, int a, int b)
{
    if (func_0004F8(value, slot) != 0) {
        if (slot - 2 < 2) {
            D_00208C2C->b[2] = value;
            D_00208C2C->b[3] = value;
        } else if (slot - 4 < 2) {
            D_00208C2C->b[4] = value;
            D_00208C2C->b[5] = value;
        } else {
            D_00208C2C->b[slot] = value;
        }
        func_1B84D0((void *)a, (void *)b);
        return 1;
    }
    return 0;
}

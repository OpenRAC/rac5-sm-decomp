/* LEVEL_03:0x10E2B0 -- placement copy of LEVEL_01_1105E8.c: returns 1 if the allocator already ran, else allocates and clears a 16-byte block. */
extern int func_110B88(void *);
extern void *func_10D468(int, int, void *, int);
extern void *memset(void *, int, unsigned int);
extern char D_00230598[];
extern void *D_0021F424;
extern int D_0021F420;
int func_10E2B0(void *p)
{
    int result = func_110B88(p);
    if (result == 0) {
        void **slot = &D_0021F424;
        void *memory = func_10D468(0x10, 0xd, D_00230598, 0x78);
        *slot = memory;
        if (memory != 0) {
            memset(memory, 0, 0x10);
            D_0021F420 = 1;
            result = 1;
        }
    }
    return result;
}

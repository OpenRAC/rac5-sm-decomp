/* LEVEL_23:0x102E10 -- placement copy of LEVEL_01_1105E8.c: returns 1 if the allocator already ran, else allocates and clears a 16-byte block. */
extern int func_1051E0(void *);
extern void *func_101FC8(int, int, void *, int);
extern void *memset(void *, int, unsigned int);
extern char D_001EA818[];
extern void *D_001DA1A4;
extern int D_001DA1A0;
int func_102E10(void *p)
{
    int result = func_1051E0(p);
    if (result == 0) {
        void **slot = &D_001DA1A4;
        void *memory = func_101FC8(0x10, 0xd, D_001EA818, 0x78);
        *slot = memory;
        if (memory != 0) {
            memset(memory, 0, 0x10);
            D_001DA1A0 = 1;
            result = 1;
        }
    }
    return result;
}

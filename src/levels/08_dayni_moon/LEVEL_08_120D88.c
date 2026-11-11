/* LEVEL_08:0x120D88 -- placement copy of LEVEL_01_1105E8.c: returns 1 if the allocator already ran, else allocates and clears a 16-byte block. */
extern int func_1231B8(void *);
extern void *func_11FF40(int, int, void *, int);
extern void *memset(void *, int, unsigned int);
extern char D_00261318[];
extern void *D_0024FC64;
extern int D_0024FC60;
int func_120D88(void *p)
{
    int result = func_1231B8(p);
    if (result == 0) {
        void **slot = &D_0024FC64;
        void *memory = func_11FF40(0x10, 0xd, D_00261318, 0x78);
        *slot = memory;
        if (memory != 0) {
            memset(memory, 0, 0x10);
            D_0024FC60 = 1;
            result = 1;
        }
    }
    return result;
}

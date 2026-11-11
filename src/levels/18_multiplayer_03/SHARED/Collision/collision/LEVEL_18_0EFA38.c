/* LEVEL_18:0x0EFA38 -- placement copy of LEVEL_01_1105E8.c: returns 1 if the allocator already ran, else allocates and clears a 16-byte block. */
extern int func_0F1E68(void *);
extern void *func_0EEBF0(int, int, void *, int);
extern void *memset(void *, int, unsigned int);
extern char D_001CDAD8[];
extern void *D_001B5D34;
extern int D_001B5D30;
int func_0EFA38(void *p)
{
    int result = func_0F1E68(p);
    if (result == 0) {
        void **slot = &D_001B5D34;
        void *memory = func_0EEBF0(0x10, 0xd, D_001CDAD8, 0x78);
        *slot = memory;
        if (memory != 0) {
            memset(memory, 0, 0x10);
            D_001B5D30 = 1;
            result = 1;
        }
    }
    return result;
}

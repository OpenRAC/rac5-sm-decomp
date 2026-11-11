/* LEVEL_16:0x0F1200 -- placement copy of LEVEL_01_1105E8.c: returns 1 if the allocator already ran, else allocates and clears a 16-byte block. */
extern int func_0F3630(void *);
extern void *func_0F03B8(int, int, void *, int);
extern void *memset(void *, int, unsigned int);
extern char D_001CC558[];
extern void *D_001B48B4;
extern int D_001B48B0;
int func_0F1200(void *p)
{
    int result = func_0F3630(p);
    if (result == 0) {
        void **slot = &D_001B48B4;
        void *memory = func_0F03B8(0x10, 0xd, D_001CC558, 0x78);
        *slot = memory;
        if (memory != 0) {
            memset(memory, 0, 0x10);
            D_001B48B0 = 1;
            result = 1;
        }
    }
    return result;
}

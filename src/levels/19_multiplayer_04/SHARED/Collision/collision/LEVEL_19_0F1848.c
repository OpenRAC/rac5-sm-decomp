/* LEVEL_19:0x0F1848 -- placement copy of LEVEL_01_1105E8.c: returns 1 if the allocator already ran, else allocates and clears a 16-byte block. */
extern int func_0F3C78(void *);
extern void *func_0F0A00(int, int, void *, int);
extern void *memset(void *, int, unsigned int);
extern char D_001CD758[];
extern void *D_001B5A34;
extern int D_001B5A30;
int func_0F1848(void *p)
{
    int result = func_0F3C78(p);
    if (result == 0) {
        void **slot = &D_001B5A34;
        void *memory = func_0F0A00(0x10, 0xd, D_001CD758, 0x78);
        *slot = memory;
        if (memory != 0) {
            memset(memory, 0, 0x10);
            D_001B5A30 = 1;
            result = 1;
        }
    }
    return result;
}

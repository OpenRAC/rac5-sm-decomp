/* LEVEL_02:0x116930 -- placement copy of LEVEL_01_1105E8.c: returns 1 if the allocator already ran, else allocates and clears a 16-byte block. */
extern int func_118D60(void *);
extern void *func_115AE8(int, int, void *, int);
extern void *memset(void *, int, unsigned int);
extern char D_0022C618[];
extern void *D_0021BD64;
extern int D_0021BD60;
int func_116930(void *p)
{
    int result = func_118D60(p);
    if (result == 0) {
        void **slot = &D_0021BD64;
        void *memory = func_115AE8(0x10, 0xd, D_0022C618, 0x78);
        *slot = memory;
        if (memory != 0) {
            memset(memory, 0, 0x10);
            D_0021BD60 = 1;
            result = 1;
        }
    }
    return result;
}

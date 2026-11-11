/* LEVEL_07:0x113638 -- placement copy of LEVEL_01_1105E8.c: returns 1 if the allocator already ran, else allocates and clears a 16-byte block. */
extern int func_115A68(void *);
extern void *func_1127F0(int, int, void *, int);
extern void *memset(void *, int, unsigned int);
extern char D_0022C398[];
extern void *D_0021B0A4;
extern int D_0021B0A0;
int func_113638(void *p)
{
    int result = func_115A68(p);
    if (result == 0) {
        void **slot = &D_0021B0A4;
        void *memory = func_1127F0(0x10, 0xd, D_0022C398, 0x78);
        *slot = memory;
        if (memory != 0) {
            memset(memory, 0, 0x10);
            D_0021B0A0 = 1;
            result = 1;
        }
    }
    return result;
}

/* LEVEL_10:0x10E800 -- placement copy of LEVEL_01_1105E8.c: returns 1 if the allocator already ran, else allocates and clears a 16-byte block. */
extern int func_110C30(void *);
extern void *func_10D9B8(int, int, void *, int);
extern void *memset(void *, int, unsigned int);
extern char D_00220618[];
extern void *D_0020FA04;
extern int D_0020FA00;
int func_10E800(void *p)
{
    int result = func_110C30(p);
    if (result == 0) {
        void **slot = &D_0020FA04;
        void *memory = func_10D9B8(0x10, 0xd, D_00220618, 0x78);
        *slot = memory;
        if (memory != 0) {
            memset(memory, 0, 0x10);
            D_0020FA00 = 1;
            result = 1;
        }
    }
    return result;
}

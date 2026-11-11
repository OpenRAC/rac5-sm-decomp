/* LEVEL_09:0x1099D8 -- placement copy of LEVEL_01_1105E8.c: returns 1 if the allocator already ran, else allocates and clears a 16-byte block. */
extern int func_10BE08(void *);
extern void *func_108B90(int, int, void *, int);
extern void *memset(void *, int, unsigned int);
extern char D_00201298[];
extern void *D_001F08A4;
extern int D_001F08A0;
int func_1099D8(void *p)
{
    int result = func_10BE08(p);
    if (result == 0) {
        void **slot = &D_001F08A4;
        void *memory = func_108B90(0x10, 0xd, D_00201298, 0x78);
        *slot = memory;
        if (memory != 0) {
            memset(memory, 0, 0x10);
            D_001F08A0 = 1;
            result = 1;
        }
    }
    return result;
}

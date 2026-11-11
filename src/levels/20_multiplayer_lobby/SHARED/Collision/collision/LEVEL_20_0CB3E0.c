/* LEVEL_20:0x0CB3E0 -- placement copy of LEVEL_01_1105E8.c: returns 1 if the allocator already ran, else allocates and clears a 16-byte block. */
extern int func_0CD1C8(void *);
extern void *func_0CA598(int, int, void *, int);
extern void *memset(void *, int, unsigned int);
extern char D_0012D5D8[];
extern void *D_00116F94;
extern int D_00116F90;
int func_0CB3E0(void *p)
{
    int result = func_0CD1C8(p);
    if (result == 0) {
        void **slot = &D_00116F94;
        void *memory = func_0CA598(0x10, 0xd, D_0012D5D8, 0x78);
        *slot = memory;
        if (memory != 0) {
            memset(memory, 0, 0x10);
            D_00116F90 = 1;
            result = 1;
        }
    }
    return result;
}

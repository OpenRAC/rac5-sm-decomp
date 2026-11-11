/* LEVEL_06:0x106BB8 -- placement copy of LEVEL_01_1105E8.c: returns 1 if the allocator already ran, else allocates and clears a 16-byte block. */
extern int func_108FE8(void *);
extern void *func_105D70(int, int, void *, int);
extern void *memset(void *, int, unsigned int);
extern char D_00206518[];
extern void *D_001F59A4;
extern int D_001F59A0;
int func_106BB8(void *p)
{
    int result = func_108FE8(p);
    if (result == 0) {
        void **slot = &D_001F59A4;
        void *memory = func_105D70(0x10, 0xd, D_00206518, 0x78);
        *slot = memory;
        if (memory != 0) {
            memset(memory, 0, 0x10);
            D_001F59A0 = 1;
            result = 1;
        }
    }
    return result;
}

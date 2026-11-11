/* LEVEL_01:0x1105E8 -- returns 1 if the allocator already ran, else allocates and clears a 16-byte block. */
extern int func_112A18(void *);
extern void *func_10F7A0(int, int, void *, int);
extern void *memset(void *, int, unsigned int);
extern char D_00217698[];
extern void *D_00206DA4;
extern int D_00206DA0;
int func_1105E8(void *p)
{
    int result = func_112A18(p);
    if (result == 0) {
        void **slot = &D_00206DA4;
        void *memory = func_10F7A0(0x10, 0xd, D_00217698, 0x78);
        *slot = memory;
        if (memory != 0) {
            memset(memory, 0, 0x10);
            D_00206DA0 = 1;
            result = 1;
        }
    }
    return result;
}

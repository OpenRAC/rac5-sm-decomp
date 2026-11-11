/* LEVEL_17:0x0F0810 -- placement copy of LEVEL_01_1105E8.c: returns 1 if the allocator already ran, else allocates and clears a 16-byte block. */
extern int func_0F2C40(void *);
extern void *func_0EF9C8(int, int, void *, int);
extern void *memset(void *, int, unsigned int);
extern char D_001BF9D8[];
extern void *D_001A7EB4;
extern int D_001A7EB0;
int func_0F0810(void *p)
{
    int result = func_0F2C40(p);
    if (result == 0) {
        void **slot = &D_001A7EB4;
        void *memory = func_0EF9C8(0x10, 0xd, D_001BF9D8, 0x78);
        *slot = memory;
        if (memory != 0) {
            memset(memory, 0, 0x10);
            D_001A7EB0 = 1;
            result = 1;
        }
    }
    return result;
}

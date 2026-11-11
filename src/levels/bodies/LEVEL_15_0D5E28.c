/* LEVEL_15:0x0D5E28 -- placement copy of LEVEL_01_1105E8.c: returns 1 if the allocator already ran, else allocates and clears a 16-byte block. */
extern int func_0D7120(void *);
extern void *func_0D4FE0(int, int, void *, int);
extern void *memset(void *, int, unsigned int);
extern char D_0016BE18[];
extern void *D_0015B724;
extern int D_0015B720;
int func_0D5E28(void *p)
{
    int result = func_0D7120(p);
    if (result == 0) {
        void **slot = &D_0015B724;
        void *memory = func_0D4FE0(0x10, 0xd, D_0016BE18, 0x78);
        *slot = memory;
        if (memory != 0) {
            memset(memory, 0, 0x10);
            D_0015B720 = 1;
            result = 1;
        }
    }
    return result;
}

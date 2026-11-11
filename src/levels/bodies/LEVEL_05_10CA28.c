/* LEVEL_05:0x10CA28 -- placement copy of LEVEL_01_1105E8.c: returns 1 if the allocator already ran, else allocates and clears a 16-byte block. */
extern int func_10EE58(void *);
extern void *func_10BBE0(int, int, void *, int);
extern void *memset(void *, int, unsigned int);
extern char D_00206598[];
extern void *D_001F5E24;
extern int D_001F5E20;
int func_10CA28(void *p)
{
    int result = func_10EE58(p);
    if (result == 0) {
        void **slot = &D_001F5E24;
        void *memory = func_10BBE0(0x10, 0xd, D_00206598, 0x78);
        *slot = memory;
        if (memory != 0) {
            memset(memory, 0, 0x10);
            D_001F5E20 = 1;
            result = 1;
        }
    }
    return result;
}

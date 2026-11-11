/* LEVEL_04:0x11BB50 -- placement copy of LEVEL_01_1105E8.c: returns 1 if the allocator already ran, else allocates and clears a 16-byte block. */
extern int func_11DF80(void *);
extern void *func_11AD08(int, int, void *, int);
extern void *memset(void *, int, unsigned int);
extern char D_00231018[];
extern void *D_002201C4;
extern int D_002201C0;
int func_11BB50(void *p)
{
    int result = func_11DF80(p);
    if (result == 0) {
        void **slot = &D_002201C4;
        void *memory = func_11AD08(0x10, 0xd, D_00231018, 0x78);
        *slot = memory;
        if (memory != 0) {
            memset(memory, 0, 0x10);
            D_002201C0 = 1;
            result = 1;
        }
    }
    return result;
}

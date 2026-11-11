/* LEVEL_24:0x1075E8 -- placement copy of LEVEL_01_1105E8.c: returns 1 if the allocator already ran, else allocates and clears a 16-byte block. */
extern int func_1099B8(void *);
extern void *func_1067A0(int, int, void *, int);
extern void *memset(void *, int, unsigned int);
extern char D_001E8418[];
extern void *D_001D7A24;
extern int D_001D7A20;
int func_1075E8(void *p)
{
    int result = func_1099B8(p);
    if (result == 0) {
        void **slot = &D_001D7A24;
        void *memory = func_1067A0(0x10, 0xd, D_001E8418, 0x78);
        *slot = memory;
        if (memory != 0) {
            memset(memory, 0, 0x10);
            D_001D7A20 = 1;
            result = 1;
        }
    }
    return result;
}

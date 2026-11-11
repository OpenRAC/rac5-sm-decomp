/* LEVEL_22:0x0EC350 -- placement copy of LEVEL_01_1105E8.c: returns 1 if the allocator already ran, else allocates and clears a 16-byte block. */
extern int func_0EE138(void *);
extern void *func_0EB508(int, int, void *, int);
extern void *memset(void *, int, unsigned int);
extern char D_00174B18[];
extern void *D_00165D84;
extern int D_00165D80;
int func_0EC350(void *p)
{
    int result = func_0EE138(p);
    if (result == 0) {
        void **slot = &D_00165D84;
        void *memory = func_0EB508(0x10, 0xd, D_00174B18, 0x78);
        *slot = memory;
        if (memory != 0) {
            memset(memory, 0, 0x10);
            D_00165D80 = 1;
            result = 1;
        }
    }
    return result;
}

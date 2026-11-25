/* LEVEL_23:0x09F6F8 -- placement copy of FRONTEND_00B720.c: placement copy of LEVEL_01_0A8988.c: formats a name, opens the matching file slot and, when found, loads and registers it. */
extern char D_001E44C8[];
extern char D_001E44F8[];
extern char D_002EEC10[];
extern int D_001CF3E0;

extern int sprintf(char *buf, const char *fmt, ...);
extern int func_10B3A8(char *name, char *mode);
extern int func_10B558(void *dst, unsigned n, int m, unsigned slot);
extern int func_09A9F8(char *a, int b, int c, int d, int e, int f);
extern void func_10B6B0(int index);

void func_09F6F8(void)
{
    char buf[256];
    int slot;

    sprintf(buf, D_001E44C8);
    slot = func_10B3A8(buf, D_001E44F8);
    if (slot != 0) {
        func_10B558(D_002EEC10, 0xA000, 1, slot);
        D_001CF3E0 = func_09A9F8(D_002EEC10, 0xA000, 0, 1, 1, 0);
        func_10B6B0(slot);
    }
}

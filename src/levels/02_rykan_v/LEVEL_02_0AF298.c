/* LEVEL_02:0x0AF298 -- placement copy of FRONTEND_00B720.c: placement copy of LEVEL_01_0A8988.c: formats a name, opens the matching file slot and, when found, loads and registers it. */
extern char D_002262C8[];
extern char D_002262F8[];
extern char D_00334CD0[];
extern int D_00210FA0;

extern int sprintf(char *buf, const char *fmt, ...);
extern int func_120188(char *name, char *mode);
extern int func_120338(void *dst, unsigned n, int m, unsigned slot);
extern int func_0AA5C8(char *a, int b, int c, int d, int e, int f);
extern void func_120490(int index);

void func_0AF298(void)
{
    char buf[256];
    int slot;

    sprintf(buf, D_002262C8);
    slot = func_120188(buf, D_002262F8);
    if (slot != 0) {
        func_120338(D_00334CD0, 0xA000, 1, slot);
        D_00210FA0 = func_0AA5C8(D_00334CD0, 0xA000, 0, 1, 1, 0);
        func_120490(slot);
    }
}

/* LEVEL_07:0x0AA988 -- placement copy of FRONTEND_00B720.c: placement copy of LEVEL_01_0A8988.c: formats a name, opens the matching file slot and, when found, loads and registers it. */
extern char D_00226048[];
extern char D_00226078[];
extern char D_003330D0[];
extern int D_002102E0;

extern int sprintf(char *buf, const char *fmt, ...);
extern int func_11CE90(char *name, char *mode);
extern int func_11D040(void *dst, unsigned n, int m, unsigned slot);
extern int func_0A5CB8(char *a, int b, int c, int d, int e, int f);
extern void func_11D198(int index);

void func_0AA988(void)
{
    char buf[256];
    int slot;

    sprintf(buf, D_00226048);
    slot = func_11CE90(buf, D_00226078);
    if (slot != 0) {
        func_11D040(D_003330D0, 0xA000, 1, slot);
        D_002102E0 = func_0A5CB8(D_003330D0, 0xA000, 0, 1, 1, 0);
        func_11D198(slot);
    }
}

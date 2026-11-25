/* LEVEL_09:0x0A5C38 -- placement copy of FRONTEND_00B720.c: placement copy of LEVEL_01_0A8988.c: formats a name, opens the matching file slot and, when found, loads and registers it. */
extern char D_001FAF48[];
extern char D_001FAF78[];
extern char D_00304F50[];
extern int D_001E5DE0;

extern int sprintf(char *buf, const char *fmt, ...);
extern int func_113230(char *name, char *mode);
extern int func_1133E0(void *dst, unsigned n, int m, unsigned slot);
extern int func_0A0F68(char *a, int b, int c, int d, int e, int f);
extern void func_113538(int index);

void func_0A5C38(void)
{
    char buf[256];
    int slot;

    sprintf(buf, D_001FAF48);
    slot = func_113230(buf, D_001FAF78);
    if (slot != 0) {
        func_1133E0(D_00304F50, 0xA000, 1, slot);
        D_001E5DE0 = func_0A0F68(D_00304F50, 0xA000, 0, 1, 1, 0);
        func_113538(slot);
    }
}

/* LEVEL_10:0x0A9AA0 -- placement copy of FRONTEND_00B720.c: placement copy of LEVEL_01_0A8988.c: formats a name, opens the matching file slot and, when found, loads and registers it. */
extern char D_0021A2C8[];
extern char D_0021A2F8[];
extern char D_00326BD0[];
extern int D_00204FE0;

extern int sprintf(char *buf, const char *fmt, ...);
extern int func_118058(char *name, char *mode);
extern int func_118208(void *dst, unsigned n, int m, unsigned slot);
extern int func_0A4DD0(char *a, int b, int c, int d, int e, int f);
extern void func_118360(int index);

void func_0A9AA0(void)
{
    char buf[256];
    int slot;

    sprintf(buf, D_0021A2C8);
    slot = func_118058(buf, D_0021A2F8);
    if (slot != 0) {
        func_118208(D_00326BD0, 0xA000, 1, slot);
        D_00204FE0 = func_0A4DD0(D_00326BD0, 0xA000, 0, 1, 1, 0);
        func_118360(slot);
    }
}

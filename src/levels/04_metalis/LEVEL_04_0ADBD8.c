/* LEVEL_04:0x0ADBD8 -- placement copy of FRONTEND_00B720.c: placement copy of LEVEL_01_0A8988.c: formats a name, opens the matching file slot and, when found, loads and registers it. */
extern char D_0022ACC8[];
extern char D_0022ACF8[];
extern char D_00337FD0[];
extern int D_002154A0;

extern int sprintf(char *buf, const char *fmt, ...);
extern int func_1253A8(char *name, char *mode);
extern int func_125558(void *dst, unsigned n, int m, unsigned slot);
extern int func_0A8EC8(char *a, int b, int c, int d, int e, int f);
extern void func_1256B0(int index);

void func_0ADBD8(void)
{
    char buf[256];
    int slot;

    sprintf(buf, D_0022ACC8);
    slot = func_1253A8(buf, D_0022ACF8);
    if (slot != 0) {
        func_125558(D_00337FD0, 0xA000, 1, slot);
        D_002154A0 = func_0A8EC8(D_00337FD0, 0xA000, 0, 1, 1, 0);
        func_1256B0(slot);
    }
}

/* LEVEL_22:0x096F98 -- placement copy of FRONTEND_00B720.c: placement copy of LEVEL_01_0A8988.c: formats a name, opens the matching file slot and, when found, loads and registers it. */
extern char D_0016E7C8[];
extern char D_0016E7F8[];
extern char D_00273390[];
extern int D_0015B360;

extern int sprintf(char *buf, const char *fmt, ...);
extern int func_0F4300(char *name, char *mode);
extern int func_0F44B0(void *dst, unsigned n, int m, unsigned slot);
extern int func_0922C8(char *a, int b, int c, int d, int e, int f);
extern void func_0F4608(int index);

void func_096F98(void)
{
    char buf[256];
    int slot;

    sprintf(buf, D_0016E7C8);
    slot = func_0F4300(buf, D_0016E7F8);
    if (slot != 0) {
        func_0F44B0(D_00273390, 0xA000, 1, slot);
        D_0015B360 = func_0922C8(D_00273390, 0xA000, 0, 1, 1, 0);
        func_0F4608(slot);
    }
}

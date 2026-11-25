/* LEVEL_17:0x096540 -- placement copy of FRONTEND_00B720.c: placement copy of LEVEL_01_0A8988.c: formats a name, opens the matching file slot and, when found, loads and registers it. */
extern char D_001B94F8[];
extern char D_001B9528[];
extern char D_0025CDE0[];
extern int D_0019D5A0;

extern int sprintf(char *buf, const char *fmt, ...);
extern int func_0F9B40(char *name, char *mode);
extern int func_0F9CF0(void *dst, unsigned n, int m, unsigned slot);
extern int func_092320(char *a, int b, int c, int d, int e, int f);
extern void func_0F9E48(int index);

void func_096540(void)
{
    char buf[256];
    int slot;

    sprintf(buf, D_001B94F8);
    slot = func_0F9B40(buf, D_001B9528);
    if (slot != 0) {
        func_0F9CF0(D_0025CDE0, 0xA000, 1, slot);
        D_0019D5A0 = func_092320(D_0025CDE0, 0xA000, 0, 1, 1, 0);
        func_0F9E48(slot);
    }
}

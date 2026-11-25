/* LEVEL_16:0x097048 -- placement copy of FRONTEND_00B720.c: placement copy of LEVEL_01_0A8988.c: formats a name, opens the matching file slot and, when found, loads and registers it. */
extern char D_001C6078[];
extern char D_001C60A8[];
extern char D_0026BAE0[];
extern int D_001A9FA0;

extern int sprintf(char *buf, const char *fmt, ...);
extern int func_0FA530(char *name, char *mode);
extern int func_0FA6E0(void *dst, unsigned n, int m, unsigned slot);
extern int func_092E28(char *a, int b, int c, int d, int e, int f);
extern void func_0FA838(int index);

void func_097048(void)
{
    char buf[256];
    int slot;

    sprintf(buf, D_001C6078);
    slot = func_0FA530(buf, D_001C60A8);
    if (slot != 0) {
        func_0FA6E0(D_0026BAE0, 0xA000, 1, slot);
        D_001A9FA0 = func_092E28(D_0026BAE0, 0xA000, 0, 1, 1, 0);
        func_0FA838(slot);
    }
}

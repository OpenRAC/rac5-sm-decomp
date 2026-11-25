/* LEVEL_08:0x0B32C0 -- placement copy of FRONTEND_00B720.c: placement copy of LEVEL_01_0A8988.c: formats a name, opens the matching file slot and, when found, loads and registers it. */
extern char D_0025AFC8[];
extern char D_0025AFF8[];
extern char D_0036CA50[];
extern int D_00244EA0;

extern int sprintf(char *buf, const char *fmt, ...);
extern int func_12A5E0(char *name, char *mode);
extern int func_12A790(void *dst, unsigned n, int m, unsigned slot);
extern int func_0AE5B0(char *a, int b, int c, int d, int e, int f);
extern void func_12A8E8(int index);

void func_0B32C0(void)
{
    char buf[256];
    int slot;

    sprintf(buf, D_0025AFC8);
    slot = func_12A5E0(buf, D_0025AFF8);
    if (slot != 0) {
        func_12A790(D_0036CA50, 0xA000, 1, slot);
        D_00244EA0 = func_0AE5B0(D_0036CA50, 0xA000, 0, 1, 1, 0);
        func_12A8E8(slot);
    }
}

/* LEVEL_06:0x0A3158 -- placement copy of FRONTEND_00B720.c: placement copy of LEVEL_01_0A8988.c: formats a name, opens the matching file slot and, when found, loads and registers it. */
extern char D_002001C8[];
extern char D_002001F8[];
extern char D_0030A550[];
extern int D_001EAEE0;

extern int sprintf(char *buf, const char *fmt, ...);
extern int func_110410(char *name, char *mode);
extern int func_1105C0(void *dst, unsigned n, int m, unsigned slot);
extern int func_09E488(char *a, int b, int c, int d, int e, int f);
extern void func_110718(int index);

void func_0A3158(void)
{
    char buf[256];
    int slot;

    sprintf(buf, D_002001C8);
    slot = func_110410(buf, D_002001F8);
    if (slot != 0) {
        func_1105C0(D_0030A550, 0xA000, 1, slot);
        D_001EAEE0 = func_09E488(D_0030A550, 0xA000, 0, 1, 1, 0);
        func_110718(slot);
    }
}

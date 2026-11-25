/* LEVEL_05:0x0A6F48 -- placement copy of FRONTEND_00B720.c: placement copy of LEVEL_01_0A8988.c: formats a name, opens the matching file slot and, when found, loads and registers it. */
extern char D_00200248[];
extern char D_00200278[];
extern char D_00309690[];
extern int D_001EB360;

extern int sprintf(char *buf, const char *fmt, ...);
extern int func_115E60(char *name, char *mode);
extern int func_116010(void *dst, unsigned n, int m, unsigned slot);
extern int func_0A2278(char *a, int b, int c, int d, int e, int f);
extern void func_116168(int index);

void func_0A6F48(void)
{
    char buf[256];
    int slot;

    sprintf(buf, D_00200248);
    slot = func_115E60(buf, D_00200278);
    if (slot != 0) {
        func_116010(D_00309690, 0xA000, 1, slot);
        D_001EB360 = func_0A2278(D_00309690, 0xA000, 0, 1, 1, 0);
        func_116168(slot);
    }
}

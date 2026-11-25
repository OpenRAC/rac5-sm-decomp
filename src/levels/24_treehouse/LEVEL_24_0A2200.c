/* LEVEL_24:0x0A2200 -- placement copy of FRONTEND_00B720.c: placement copy of LEVEL_01_0A8988.c: formats a name, opens the matching file slot and, when found, loads and registers it. */
extern char D_001E20C8[];
extern char D_001E20F8[];
extern char D_002E9690[];
extern int D_001CCC60;

extern int sprintf(char *buf, const char *fmt, ...);
extern int func_1100A8(char *name, char *mode);
extern int func_110258(void *dst, unsigned n, int m, unsigned slot);
extern int func_09D530(char *a, int b, int c, int d, int e, int f);
extern void func_1103B0(int index);

void func_0A2200(void)
{
    char buf[256];
    int slot;

    sprintf(buf, D_001E20C8);
    slot = func_1100A8(buf, D_001E20F8);
    if (slot != 0) {
        func_110258(D_002E9690, 0xA000, 1, slot);
        D_001CCC60 = func_09D530(D_002E9690, 0xA000, 0, 1, 1, 0);
        func_1103B0(slot);
    }
}

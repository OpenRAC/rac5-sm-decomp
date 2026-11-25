/* FRONTEND:0x00B720 -- placement copy of LEVEL_01_0A8988.c: formats a name, opens the matching file slot and, when found, loads and registers it. */
extern char D_00107818[];
extern char D_00107848[];
extern char D_001231C0[];
extern int D_0002FFF0;

extern int sprintf(char *buf, const char *fmt, ...);
extern int func_01DFF0(char *name, char *mode);
extern int func_01E1A0(void *dst, unsigned n, int m, unsigned slot);
extern int func_008AC0(char *a, int b, int c, int d, int e, int f);
extern void func_01E280(int index);

void func_00B720(void)
{
    char buf[256];
    int slot;

    sprintf(buf, D_00107818);
    slot = func_01DFF0(buf, D_00107848);
    if (slot != 0) {
        func_01E1A0(D_001231C0, 0xA000, 1, slot);
        D_0002FFF0 = func_008AC0(D_001231C0, 0xA000, 0, 1, 1, 0);
        func_01E280(slot);
    }
}

/* LEVEL_01:0x0A8988 -- placement copy of FRONTEND_00B720.c: placement copy of LEVEL_01_0A8988.c: formats a name, opens the matching file slot and, when found, loads and registers it. */
extern char D_00211348[];
extern char D_00211378[];
extern char D_0031D7D0[];
extern int D_001FBFE0;

extern int sprintf(char *buf, const char *fmt, ...);
extern int func_119E40(char *name, char *mode);
extern int func_119FF0(void *dst, unsigned n, int m, unsigned slot);
extern int func_0A3CB8(char *a, int b, int c, int d, int e, int f);
extern void func_11A148(int index);

void func_0A8988(void)
{
    char buf[256];
    int slot;

    sprintf(buf, D_00211348);
    slot = func_119E40(buf, D_00211378);
    if (slot != 0) {
        func_119FF0(D_0031D7D0, 0xA000, 1, slot);
        D_001FBFE0 = func_0A3CB8(D_0031D7D0, 0xA000, 0, 1, 1, 0);
        func_11A148(slot);
    }
}

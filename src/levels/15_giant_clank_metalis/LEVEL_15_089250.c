/* LEVEL_15:0x089250 -- placement copy of FRONTEND_00B720.c: placement copy of LEVEL_01_0A8988.c: formats a name, opens the matching file slot and, when found, loads and registers it. */
extern char D_00165AC8[];
extern char D_00165AF8[];
extern char D_00235810[];
extern int D_00150C60;

extern int sprintf(char *buf, const char *fmt, ...);
extern int func_0DE1A0(char *name, char *mode);
extern int func_0DE350(void *dst, unsigned n, int m, unsigned slot);
extern int func_0845B0(char *a, int b, int c, int d, int e, int f);
extern void func_0DE4A8(int index);

void func_089250(void)
{
    char buf[256];
    int slot;

    sprintf(buf, D_00165AC8);
    slot = func_0DE1A0(buf, D_00165AF8);
    if (slot != 0) {
        func_0DE350(D_00235810, 0xA000, 1, slot);
        D_00150C60 = func_0845B0(D_00235810, 0xA000, 0, 1, 1, 0);
        func_0DE4A8(slot);
    }
}

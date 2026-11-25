/* LEVEL_20:0x081740 -- placement copy of FRONTEND_00B720.c: placement copy of LEVEL_01_0A8988.c: formats a name, opens the matching file slot and, when found, loads and registers it. */
extern char D_001270F8[];
extern char D_00127128[];
extern char D_0018F320[];
extern int D_0010C680;

extern int sprintf(char *buf, const char *fmt, ...);
extern int func_0D3390(char *name, char *mode);
extern int func_0D3540(void *dst, unsigned n, int m, unsigned slot);
extern int func_07D520(char *a, int b, int c, int d, int e, int f);
extern void func_0D3698(int index);

void func_081740(void)
{
    char buf[256];
    int slot;

    sprintf(buf, D_001270F8);
    slot = func_0D3390(buf, D_00127128);
    if (slot != 0) {
        func_0D3540(D_0018F320, 0xA000, 1, slot);
        D_0010C680 = func_07D520(D_0018F320, 0xA000, 0, 1, 1, 0);
        func_0D3698(slot);
    }
}

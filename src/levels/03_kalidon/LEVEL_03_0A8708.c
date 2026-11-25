/* LEVEL_03:0x0A8708 -- placement copy of FRONTEND_00B720.c: placement copy of LEVEL_01_0A8988.c: formats a name, opens the matching file slot and, when found, loads and registers it. */
extern char D_0022A248[];
extern char D_0022A278[];
extern char D_00338650[];
extern int D_00214660;

extern int sprintf(char *buf, const char *fmt, ...);
extern int func_117FB0(char *name, char *mode);
extern int func_118160(void *dst, unsigned n, int m, unsigned slot);
extern int func_0A3A38(char *a, int b, int c, int d, int e, int f);
extern void func_1182B8(int index);

void func_0A8708(void)
{
    char buf[256];
    int slot;

    sprintf(buf, D_0022A248);
    slot = func_117FB0(buf, D_0022A278);
    if (slot != 0) {
        func_118160(D_00338650, 0xA000, 1, slot);
        D_00214660 = func_0A3A38(D_00338650, 0xA000, 0, 1, 1, 0);
        func_1182B8(slot);
    }
}

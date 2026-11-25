/* LEVEL_19:0x0968D8 -- placement copy of FRONTEND_00B720.c: placement copy of LEVEL_01_0A8988.c: formats a name, opens the matching file slot and, when found, loads and registers it. */
extern char D_001C7278[];
extern char D_001C72A8[];
extern char D_0026BC60[];
extern int D_001AB120;

extern int sprintf(char *buf, const char *fmt, ...);
extern int func_0FA758(char *name, char *mode);
extern int func_0FA908(void *dst, unsigned n, int m, unsigned slot);
extern int func_0926B8(char *a, int b, int c, int d, int e, int f);
extern void func_0FAA60(int index);

void func_0968D8(void)
{
    char buf[256];
    int slot;

    sprintf(buf, D_001C7278);
    slot = func_0FA758(buf, D_001C72A8);
    if (slot != 0) {
        func_0FA908(D_0026BC60, 0xA000, 1, slot);
        D_001AB120 = func_0926B8(D_0026BC60, 0xA000, 0, 1, 1, 0);
        func_0FAA60(slot);
    }
}

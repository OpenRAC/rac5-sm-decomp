/* LEVEL_18:0x096058 -- placement copy of FRONTEND_00B720.c: placement copy of LEVEL_01_0A8988.c: formats a name, opens the matching file slot and, when found, loads and registers it. */
extern char D_001C75F8[];
extern char D_001C7628[];
extern char D_0026BE60[];
extern int D_001AB420;

extern int sprintf(char *buf, const char *fmt, ...);
extern int func_0F8D68(char *name, char *mode);
extern int func_0F8F18(void *dst, unsigned n, int m, unsigned slot);
extern int func_091E38(char *a, int b, int c, int d, int e, int f);
extern void func_0F9070(int index);

void func_096058(void)
{
    char buf[256];
    int slot;

    sprintf(buf, D_001C75F8);
    slot = func_0F8D68(buf, D_001C7628);
    if (slot != 0) {
        func_0F8F18(D_0026BE60, 0xA000, 1, slot);
        D_001AB420 = func_091E38(D_0026BE60, 0xA000, 0, 1, 1, 0);
        func_0F9070(slot);
    }
}

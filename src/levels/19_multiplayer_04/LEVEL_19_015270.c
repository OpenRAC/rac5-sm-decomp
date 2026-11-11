/* LEVEL_19:0x015270 -- placement copy of LEVEL_16_0153A8.c: formats a label for the object, selected by a flag from its data, and submits it. */

extern void func_0210A8(char *record, int wanted);
extern void func_0214D0(void *object, void *value, int mode, int extra);
extern int func_0224A8(int mode, int field);
extern char *func_10F9D0(int id);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0A78A8(int a0, char *a1, int a2, int a3);
extern char D_001DE668[];

void func_015270(char *o, int mode)
{
    char buf[64];
    int v;

    func_0210A8(o, mode);
    func_0214D0(o, buf, mode, 0x40);
    v = func_0224A8(mode, *(int *)(o + 0xF8));
    if (v != 0) {
        sprintf(D_001DE668, func_10F9D0(0x238), buf);
    } else {
        sprintf(D_001DE668, func_10F9D0(0x237), buf);
    }
    func_0A78A8(*(int *)(o + 0xF4) - 1, D_001DE668, 0, 0x5A);
}

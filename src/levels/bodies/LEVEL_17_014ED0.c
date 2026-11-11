/* LEVEL_17:0x014ED0 -- placement copy of LEVEL_16_0153A8.c: formats a label for the object, selected by a flag from its data, and submits it. */

extern void func_020DE8(char *record, int wanted);
extern void func_021210(void *object, void *value, int mode, int extra);
extern int func_0221E8(int mode, int field);
extern char *func_10E8A8(int id);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0A7510(int a0, char *a1, int a2, int a3);
extern char D_001CF7E8[];

void func_014ED0(char *o, int mode)
{
    char buf[64];
    int v;

    func_020DE8(o, mode);
    func_021210(o, buf, mode, 0x40);
    v = func_0221E8(mode, *(int *)(o + 0xF8));
    if (v != 0) {
        sprintf(D_001CF7E8, func_10E8A8(0x238), buf);
    } else {
        sprintf(D_001CF7E8, func_10E8A8(0x237), buf);
    }
    func_0A7510(*(int *)(o + 0xF4) - 1, D_001CF7E8, 0, 0x5A);
}

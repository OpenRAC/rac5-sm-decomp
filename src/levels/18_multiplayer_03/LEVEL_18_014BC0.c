/* LEVEL_18:0x014BC0 -- placement copy of LEVEL_16_0153A8.c: formats a label for the object, selected by a flag from its data, and submits it. */

extern void func_020AB0(char *record, int wanted);
extern void func_020ED8(void *object, void *value, int mode, int extra);
extern int func_021EB0(int mode, int field);
extern char *func_10DFE0(int id);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0A6FA8(int a0, char *a1, int a2, int a3);
extern char D_001DE868[];

void func_014BC0(char *o, int mode)
{
    char buf[64];
    int v;

    func_020AB0(o, mode);
    func_020ED8(o, buf, mode, 0x40);
    v = func_021EB0(mode, *(int *)(o + 0xF8));
    if (v != 0) {
        sprintf(D_001DE868, func_10DFE0(0x238), buf);
    } else {
        sprintf(D_001DE868, func_10DFE0(0x237), buf);
    }
    func_0A6FA8(*(int *)(o + 0xF4) - 1, D_001DE868, 0, 0x5A);
}

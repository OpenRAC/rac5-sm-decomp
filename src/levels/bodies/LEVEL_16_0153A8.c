/* LEVEL_16:0x0153A8 -- formats a label for the object, selected by a flag from its data, and submits it. */

extern void func_021468(char *record, int wanted);
extern void func_021890(void *object, void *value, int mode, int extra);
extern int func_022868(int mode, int field);
extern char *func_10F330(int id);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0A7FD0(int a0, char *a1, int a2, int a3);
extern char D_001DE4E8[];

void func_0153A8(char *o, int mode)
{
    char buf[64];
    int v;

    func_021468(o, mode);
    func_021890(o, buf, mode, 0x40);
    v = func_022868(mode, *(int *)(o + 0xF8));
    if (v != 0) {
        sprintf(D_001DE4E8, func_10F330(0x238), buf);
    } else {
        sprintf(D_001DE4E8, func_10F330(0x237), buf);
    }
    func_0A7FD0(*(int *)(o + 0xF4) - 1, D_001DE4E8, 0, 0x5A);
}

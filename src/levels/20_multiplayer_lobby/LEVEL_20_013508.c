/* LEVEL_20:0x013508 -- placement copy of LEVEL_16_0153A8.c: formats a label for the object, selected by a flag from its data, and submits it. */

extern void func_01E288(char *record, int wanted);
extern void func_01E6B0(void *object, void *value, int mode, int extra);
extern int func_01F568(int mode, int field);
extern char *func_0E2118(int id);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_092500(int a0, char *a1, int a2, int a3);
extern char D_00135E68[];

void func_013508(char *o, int mode)
{
    char buf[64];
    int v;

    func_01E288(o, mode);
    func_01E6B0(o, buf, mode, 0x40);
    v = func_01F568(mode, *(int *)(o + 0xF8));
    if (v != 0) {
        sprintf(D_00135E68, func_0E2118(0x238), buf);
    } else {
        sprintf(D_00135E68, func_0E2118(0x237), buf);
    }
    func_092500(*(int *)(o + 0xF4) - 1, D_00135E68, 0, 0x5A);
}

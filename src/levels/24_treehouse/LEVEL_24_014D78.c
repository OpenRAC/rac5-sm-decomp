/* LEVEL_24:0x014D78 -- placement copy of LEVEL_01_015CE0.c: formats a text line into a 64-byte buffer and submits it, using one of two message ids. */
extern void func_021830(char *o, int id);
extern void func_021CB8(char *o, char *buf, int id, int n);
extern int func_022C78(int id, int v);
extern char *func_127FB0(int id);
extern char D_001FB6E8[];
extern int sprintf();
extern void func_0B2820(int a, char *b, int c, int d);

void func_014D78(char *o, int id)
{
    char buf[0x40];

    func_021830(o, id);
    func_021CB8(o, buf, id, 0x40);
    if (func_022C78(id, *(int *)(o + 0xF8))) {
        sprintf(D_001FB6E8, func_127FB0(0x238), buf);
    } else {
        sprintf(D_001FB6E8, func_127FB0(0x237), buf);
    }
    func_0B2820(0, D_001FB6E8, 0, 0x5A);
}

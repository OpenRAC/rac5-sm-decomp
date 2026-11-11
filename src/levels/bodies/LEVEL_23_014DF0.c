/* LEVEL_23:0x014DF0 -- placement copy of LEVEL_01_015CE0.c: formats a text line into a 64-byte buffer and submits it, using one of two message ids. */
extern void func_021C60(char *o, int id);
extern void func_0220E8(char *o, char *buf, int id, int n);
extern int func_022F40(int id, int v);
extern char *func_123C28(int id);
extern char D_001FCC68[];
extern int sprintf();
extern void func_0AFD28(int a, char *b, int c, int d);

void func_014DF0(char *o, int id)
{
    char buf[0x40];

    func_021C60(o, id);
    func_0220E8(o, buf, id, 0x40);
    if (func_022F40(id, *(int *)(o + 0xF8))) {
        sprintf(D_001FCC68, func_123C28(0x238), buf);
    } else {
        sprintf(D_001FCC68, func_123C28(0x237), buf);
    }
    func_0AFD28(0, D_001FCC68, 0, 0x5A);
}

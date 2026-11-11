/* LEVEL_10:0x015EB8 -- placement copy of LEVEL_01_015CE0.c: formats a text line into a 64-byte buffer and submits it, using one of two message ids. */
extern void func_0232B8(char *o, int id);
extern void func_023740(char *o, char *buf, int id, int n);
extern int func_024808(int id, int v);
extern char *func_130310(int id);
extern char D_00238BE8[];
extern int sprintf();
extern void func_0BA2D8(int a, char *b, int c, int d);

void func_015EB8(char *o, int id)
{
    char buf[0x40];

    func_0232B8(o, id);
    func_023740(o, buf, id, 0x40);
    if (func_024808(id, *(int *)(o + 0xF8))) {
        sprintf(D_00238BE8, func_130310(0x238), buf);
    } else {
        sprintf(D_00238BE8, func_130310(0x237), buf);
    }
    func_0BA2D8(0, D_00238BE8, 0, 0x5A);
}

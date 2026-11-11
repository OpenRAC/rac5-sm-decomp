/* LEVEL_03:0x015CC8 -- placement copy of LEVEL_01_015CE0.c: formats a text line into a 64-byte buffer and submits it, using one of two message ids. */
extern void func_023820(char *o, int id);
extern void func_023CA8(char *o, char *buf, int id, int n);
extern int func_024D70(int id, int v);
extern char *func_130878(int id);
extern char D_0024A668[];
extern int sprintf();
extern void func_0B8D78(int a, char *b, int c, int d);

void func_015CC8(char *o, int id)
{
    char buf[0x40];

    func_023820(o, id);
    func_023CA8(o, buf, id, 0x40);
    if (func_024D70(id, *(int *)(o + 0xF8))) {
        sprintf(D_0024A668, func_130878(0x238), buf);
    } else {
        sprintf(D_0024A668, func_130878(0x237), buf);
    }
    func_0B8D78(0, D_0024A668, 0, 0x5A);
}

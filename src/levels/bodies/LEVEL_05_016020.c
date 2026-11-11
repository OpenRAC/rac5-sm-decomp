/* LEVEL_05:0x016020 -- placement copy of LEVEL_01_015CE0.c: formats a text line into a 64-byte buffer and submits it, using one of two message ids. */
extern void func_022A50(char *o, int id);
extern void func_022ED8(char *o, char *buf, int id, int n);
extern int func_023E38(int id, int v);
extern char *func_12DE28(int id);
extern char D_0021B4E8[];
extern int sprintf();
extern void func_0B7538(int a, char *b, int c, int d);

void func_016020(char *o, int id)
{
    char buf[0x40];

    func_022A50(o, id);
    func_022ED8(o, buf, id, 0x40);
    if (func_023E38(id, *(int *)(o + 0xF8))) {
        sprintf(D_0021B4E8, func_12DE28(0x238), buf);
    } else {
        sprintf(D_0021B4E8, func_12DE28(0x237), buf);
    }
    func_0B7538(0, D_0021B4E8, 0, 0x5A);
}

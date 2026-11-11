/* LEVEL_04:0x015BD8 -- placement copy of LEVEL_01_015CE0.c: formats a text line into a 64-byte buffer and submits it, using one of two message ids. */
extern void func_023738(char *o, int id);
extern void func_023BC0(char *o, char *buf, int id, int n);
extern int func_024B20(int id, int v);
extern char *func_13E930(int id);
extern char D_00249FE8[];
extern int sprintf();
extern void func_0BE798(int a, char *b, int c, int d);

void func_015BD8(char *o, int id)
{
    char buf[0x40];

    func_023738(o, id);
    func_023BC0(o, buf, id, 0x40);
    if (func_024B20(id, *(int *)(o + 0xF8))) {
        sprintf(D_00249FE8, func_13E930(0x238), buf);
    } else {
        sprintf(D_00249FE8, func_13E930(0x237), buf);
    }
    func_0BE798(0, D_00249FE8, 0, 0x5A);
}

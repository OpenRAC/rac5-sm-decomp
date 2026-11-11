/* LEVEL_22:0x013AE0 -- placement copy of LEVEL_01_015CE0.c: formats a text line into a 64-byte buffer and submits it, using one of two message ids. */
extern void func_01E9F8(char *o, int id);
extern void func_01EE80(char *o, char *buf, int id, int n);
extern int func_01FCD8(int id, int v);
extern char *func_109980(int id);
extern char D_001813E8[];
extern int sprintf();
extern void func_0A7438(int a, char *b, int c, int d);

void func_013AE0(char *o, int id)
{
    char buf[0x40];

    func_01E9F8(o, id);
    func_01EE80(o, buf, id, 0x40);
    if (func_01FCD8(id, *(int *)(o + 0xF8))) {
        sprintf(D_001813E8, func_109980(0x238), buf);
    } else {
        sprintf(D_001813E8, func_109980(0x237), buf);
    }
    func_0A7438(0, D_001813E8, 0, 0x5A);
}

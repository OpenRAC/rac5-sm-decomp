/* LEVEL_07:0x0164D8 -- placement copy of LEVEL_01_015CE0.c: formats a text line into a 64-byte buffer and submits it, using one of two message ids. */
extern void func_023F18(char *o, int id);
extern void func_0243A0(char *o, char *buf, int id, int n);
extern int func_025468(int id, int v);
extern char *func_1354B0(int id);
extern char D_002450E8[];
extern int sprintf();
extern void func_0BAFF0(int a, char *b, int c, int d);

void func_0164D8(char *o, int id)
{
    char buf[0x40];

    func_023F18(o, id);
    func_0243A0(o, buf, id, 0x40);
    if (func_025468(id, *(int *)(o + 0xF8))) {
        sprintf(D_002450E8, func_1354B0(0x238), buf);
    } else {
        sprintf(D_002450E8, func_1354B0(0x237), buf);
    }
    func_0BAFF0(0, D_002450E8, 0, 0x5A);
}

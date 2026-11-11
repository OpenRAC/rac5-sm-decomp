/* LEVEL_02:0x0168A8 -- placement copy of LEVEL_01_015CE0.c: formats a text line into a 64-byte buffer and submits it, using one of two message ids. */
extern void func_024418(char *o, int id);
extern void func_0248A0(char *o, char *buf, int id, int n);
extern int func_025800(int id, int v);
extern char *func_138860(int id);
extern char D_00246CE8[];
extern int sprintf();
extern void func_0BF8A0(int a, char *b, int c, int d);

void func_0168A8(char *o, int id)
{
    char buf[0x40];

    func_024418(o, id);
    func_0248A0(o, buf, id, 0x40);
    if (func_025800(id, *(int *)(o + 0xF8))) {
        sprintf(D_00246CE8, func_138860(0x238), buf);
    } else {
        sprintf(D_00246CE8, func_138860(0x237), buf);
    }
    func_0BF8A0(0, D_00246CE8, 0, 0x5A);
}

/* LEVEL_10:0x17F710 -- switches the object's mode byte, calling a helper on the 0 and 1 transitions and always recording the requested mode. */

extern void func_108F08(char *o);
extern void func_108D50(char *a0, int a1, char *a2, int a3, char *t0);
extern int D_00210A84;
extern char D_0022B6E8[];

void func_17F710(char *s, unsigned char st)
{
    unsigned char *o;

    o = *(unsigned char **)(s + 0x58);
    switch (st) {
    case 0:
        if (o[0x60] != 0) {
            func_108F08(o);
            o[0x60] = 0;
            o[0x60] = st;
        }
        break;
    case 1:
        *(int *)(o + 0x64) = 0;
        if (o[0x60] == 0) {
            func_108D50(o, D_00210A84, s + 0x30, *(int *)(o + 0x5C), D_0022B6E8);
            o[0x60] = st;
        }
        break;
    }
    s[0x45] = st;
}

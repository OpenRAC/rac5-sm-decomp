/* LEVEL_20:0x095D38 -- placement copy of LEVEL_01_0BC400.c: gated one-shot setter: runs helpers, sets a flag byte, returns 1 on success. */
extern int func_016990(int a);
extern int func_0169C0(void);
extern int func_080300(void);
extern void func_095BD8(int a);
extern void func_016950(int a, int b);

extern int D_0019A1BC;
extern int D_0010D1F0;
extern char D_0019A1CC;

int func_095D38(int a, int b)
{
    int result = 0;

    if (func_016990(6) != 0)
        return 0;
    if (func_0169C0() != 0)
        return 0;
    if (func_080300() != 0)
        return 0;
    if (a == 2 && D_0019A1BC != 0)
        return 0;
    func_095BD8(a);
    if (D_0010D1F0 == 0) {
        func_016950(6, a);
        result = 1;
        D_0019A1CC = b;
    }
    return result;
}

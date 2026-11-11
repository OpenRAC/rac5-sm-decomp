/* LEVEL_24:0x0B5CC0 -- placement copy of LEVEL_01_0BC400.c: gated one-shot setter: runs helpers, sets a flag byte, returns 1 on success. */
extern int func_018E58(int a);
extern int func_018E88(void);
extern int func_0A0BA8(void);
extern void func_0B5B78(int a);
extern void func_018E18(int a, int b);

extern int D_002F48FC;
extern int D_001CD710;
extern char D_002F490C;

int func_0B5CC0(int a, int b)
{
    int result = 0;

    if (func_018E58(6) != 0)
        return 0;
    if (func_018E88() != 0)
        return 0;
    if (func_0A0BA8() != 0)
        return 0;
    if (a == 2 && D_002F48FC != 0)
        return 0;
    func_0B5B78(a);
    if (D_001CD710 == 0) {
        func_018E18(6, a);
        result = 1;
        D_002F490C = b;
    }
    return result;
}

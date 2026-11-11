/* LEVEL_19:0x0AB0E0 -- placement copy of LEVEL_01_0BC400.c: gated one-shot setter: runs helpers, sets a flag byte, returns 1 on success. */
extern int func_0188D8(int a);
extern int func_018908(void);
extern int func_095498(void);
extern void func_0AAF80(int a);
extern void func_018898(int a, int b);

extern int D_00276AFC;
extern int D_001ABC90;
extern char D_00276B0C;

int func_0AB0E0(int a, int b)
{
    int result = 0;

    if (func_0188D8(6) != 0)
        return 0;
    if (func_018908() != 0)
        return 0;
    if (func_095498() != 0)
        return 0;
    if (a == 2 && D_00276AFC != 0)
        return 0;
    func_0AAF80(a);
    if (D_001ABC90 == 0) {
        func_018898(6, a);
        result = 1;
        D_00276B0C = b;
    }
    return result;
}

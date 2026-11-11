/* LEVEL_22:0x0AA8A8 -- placement copy of LEVEL_01_0BC400.c: gated one-shot setter: runs helpers, sets a flag byte, returns 1 on success. */
extern int func_016E80(int a);
extern int func_016EB0(void);
extern int func_095940(void);
extern void func_0AA760(int a);
extern void func_016E40(int a, int b);

extern int D_0027E5FC;
extern int D_0015BE10;
extern char D_0027E60C;

int func_0AA8A8(int a, int b)
{
    int result = 0;

    if (func_016E80(6) != 0)
        return 0;
    if (func_016EB0() != 0)
        return 0;
    if (func_095940() != 0)
        return 0;
    if (a == 2 && D_0027E5FC != 0)
        return 0;
    func_0AA760(a);
    if (D_0015BE10 == 0) {
        func_016E40(6, a);
        result = 1;
        D_0027E60C = b;
    }
    return result;
}

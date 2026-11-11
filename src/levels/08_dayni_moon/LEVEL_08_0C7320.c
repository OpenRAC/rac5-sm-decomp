/* LEVEL_08:0x0C7320 -- placement copy of LEVEL_01_0BC400.c: gated one-shot setter: runs helpers, sets a flag byte, returns 1 on success. */
extern int func_01B1E0(int a);
extern int func_01B210(void);
extern int func_0B1C28(void);
extern void func_0C71D8(int a);
extern void func_01B1A0(int a, int b);

extern int D_00377CBC;
extern int D_00245950;
extern char D_00377CCC;

int func_0C7320(int a, int b)
{
    int result = 0;

    if (func_01B1E0(6) != 0)
        return 0;
    if (func_01B210() != 0)
        return 0;
    if (func_0B1C28() != 0)
        return 0;
    if (a == 2 && D_00377CBC != 0)
        return 0;
    func_0C71D8(a);
    if (D_00245950 == 0) {
        func_01B1A0(6, a);
        result = 1;
        D_00377CCC = b;
    }
    return result;
}

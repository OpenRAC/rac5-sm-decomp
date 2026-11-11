/* LEVEL_03:0x0BC1E8 -- placement copy of LEVEL_01_0BC400.c: gated one-shot setter: runs helpers, sets a flag byte, returns 1 on success. */
extern int func_01A5D0(int a);
extern int func_01A600(void);
extern int func_0A70B0(void);
extern void func_0BC0A0(int a);
extern void func_01A590(int a, int b);

extern int D_003438BC;
extern int D_00215110;
extern char D_003438CC;

int func_0BC1E8(int a, int b)
{
    int result = 0;

    if (func_01A5D0(6) != 0)
        return 0;
    if (func_01A600() != 0)
        return 0;
    if (func_0A70B0() != 0)
        return 0;
    if (a == 2 && D_003438BC != 0)
        return 0;
    func_0BC0A0(a);
    if (D_00215110 == 0) {
        func_01A590(6, a);
        result = 1;
        D_003438CC = b;
    }
    return result;
}

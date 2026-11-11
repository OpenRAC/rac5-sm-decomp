/* LEVEL_17:0x0AAD48 -- placement copy of LEVEL_01_0BC400.c: gated one-shot setter: runs helpers, sets a flag byte, returns 1 on success. */
extern int func_018558(int a);
extern int func_018588(void);
extern int func_095100(void);
extern void func_0AABE8(int a);
extern void func_018518(int a, int b);

extern int D_00267C7C;
extern int D_0019E110;
extern char D_00267C8C;

int func_0AAD48(int a, int b)
{
    int result = 0;

    if (func_018558(6) != 0)
        return 0;
    if (func_018588() != 0)
        return 0;
    if (func_095100() != 0)
        return 0;
    if (a == 2 && D_00267C7C != 0)
        return 0;
    func_0AABE8(a);
    if (D_0019E110 == 0) {
        func_018518(6, a);
        result = 1;
        D_00267C8C = b;
    }
    return result;
}

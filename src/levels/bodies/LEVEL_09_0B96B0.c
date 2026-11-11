/* LEVEL_09:0x0B96B0 -- placement copy of LEVEL_01_0BC400.c: gated one-shot setter: runs helpers, sets a flag byte, returns 1 on success. */
extern int func_019C58(int a);
extern int func_019C88(void);
extern int func_0A45E0(void);
extern void func_0B9568(int a);
extern void func_019C18(int a, int b);

extern int D_003101BC;
extern int D_001E6890;
extern char D_003101CC;

int func_0B96B0(int a, int b)
{
    int result = 0;

    if (func_019C58(6) != 0)
        return 0;
    if (func_019C88() != 0)
        return 0;
    if (func_0A45E0() != 0)
        return 0;
    if (a == 2 && D_003101BC != 0)
        return 0;
    func_0B9568(a);
    if (D_001E6890 == 0) {
        func_019C18(6, a);
        result = 1;
        D_003101CC = b;
    }
    return result;
}

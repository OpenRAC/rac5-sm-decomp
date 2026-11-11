/* LEVEL_07:0x0BE460 -- placement copy of LEVEL_01_0BC400.c: gated one-shot setter: runs helpers, sets a flag byte, returns 1 on success. */
extern int func_01AF28(int a);
extern int func_01AF58(void);
extern int func_0A9330(void);
extern void func_0BE318(int a);
extern void func_01AEE8(int a, int b);

extern int D_0033E33C;
extern int D_00210D90;
extern char D_0033E34C;

int func_0BE460(int a, int b)
{
    int result = 0;

    if (func_01AF28(6) != 0)
        return 0;
    if (func_01AF58() != 0)
        return 0;
    if (func_0A9330() != 0)
        return 0;
    if (a == 2 && D_0033E33C != 0)
        return 0;
    func_0BE318(a);
    if (D_00210D90 == 0) {
        func_01AEE8(6, a);
        result = 1;
        D_0033E34C = b;
    }
    return result;
}

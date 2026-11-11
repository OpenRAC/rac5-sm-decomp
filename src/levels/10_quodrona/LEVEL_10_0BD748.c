/* LEVEL_10:0x0BD748 -- placement copy of LEVEL_01_0BC400.c: gated one-shot setter: runs helpers, sets a flag byte, returns 1 on success. */
extern int func_019EE8(int a);
extern int func_019F18(void);
extern int func_0A8448(void);
extern void func_0BD600(int a);
extern void func_019EA8(int a, int b);

extern int D_00331E3C;
extern int D_00205A90;
extern char D_00331E4C;

int func_0BD748(int a, int b)
{
    int result = 0;

    if (func_019EE8(6) != 0)
        return 0;
    if (func_019F18() != 0)
        return 0;
    if (func_0A8448() != 0)
        return 0;
    if (a == 2 && D_00331E3C != 0)
        return 0;
    func_0BD600(a);
    if (D_00205A90 == 0) {
        func_019EA8(6, a);
        result = 1;
        D_00331E4C = b;
    }
    return result;
}

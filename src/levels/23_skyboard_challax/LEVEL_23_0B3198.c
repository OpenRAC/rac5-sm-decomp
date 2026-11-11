/* LEVEL_23:0x0B3198 -- placement copy of LEVEL_01_0BC400.c: gated one-shot setter: runs helpers, sets a flag byte, returns 1 on success. */
extern int func_019378(int a);
extern int func_0193A8(void);
extern int func_09E0A0(void);
extern void func_0B3050(int a);
extern void func_019338(int a, int b);

extern int D_002F9E7C;
extern int D_001CFE90;
extern char D_002F9E8C;

int func_0B3198(int a, int b)
{
    int result = 0;

    if (func_019378(6) != 0)
        return 0;
    if (func_0193A8() != 0)
        return 0;
    if (func_09E0A0() != 0)
        return 0;
    if (a == 2 && D_002F9E7C != 0)
        return 0;
    func_0B3050(a);
    if (D_001CFE90 == 0) {
        func_019338(6, a);
        result = 1;
        D_002F9E8C = b;
    }
    return result;
}

/* LEVEL_01:0x0BC400 -- gated one-shot setter: runs helpers, sets a flag byte, returns 1 on success. */
extern int func_01A868(int a);
extern int func_01A898(void);
extern int func_0A7330(void);
extern void func_0BC2B8(int a);
extern void func_01A828(int a, int b);

extern int D_00328A3C;
extern int D_001FCA90;
extern char D_00328A4C;

int func_0BC400(int a, int b)
{
    int result = 0;

    if (func_01A868(6) != 0)
        return 0;
    if (func_01A898() != 0)
        return 0;
    if (func_0A7330() != 0)
        return 0;
    if (a == 2 && D_00328A3C != 0)
        return 0;
    func_0BC2B8(a);
    if (D_001FCA90 == 0) {
        func_01A828(6, a);
        result = 1;
        D_00328A4C = b;
    }
    return result;
}

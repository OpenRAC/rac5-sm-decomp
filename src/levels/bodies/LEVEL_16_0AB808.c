/* LEVEL_16:0x0AB808 -- placement copy of LEVEL_01_0BC400.c: gated one-shot setter: runs helpers, sets a flag byte, returns 1 on success. */
extern int func_018BD8(int a);
extern int func_018C08(void);
extern int func_095C08(void);
extern void func_0AB6A8(int a);
extern void func_018B98(int a, int b);

extern int D_0027697C;
extern int D_001AAB10;
extern char D_0027698C;

int func_0AB808(int a, int b)
{
    int result = 0;

    if (func_018BD8(6) != 0)
        return 0;
    if (func_018C08() != 0)
        return 0;
    if (func_095C08() != 0)
        return 0;
    if (a == 2 && D_0027697C != 0)
        return 0;
    func_0AB6A8(a);
    if (D_001AAB10 == 0) {
        func_018B98(6, a);
        result = 1;
        D_0027698C = b;
    }
    return result;
}

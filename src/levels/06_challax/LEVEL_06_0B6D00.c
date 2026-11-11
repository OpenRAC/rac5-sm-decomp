/* LEVEL_06:0x0B6D00 -- placement copy of LEVEL_01_0BC400.c: gated one-shot setter: runs helpers, sets a flag byte, returns 1 on success. */
extern int func_019068(int a);
extern int func_019098(void);
extern int func_0A1B00(void);
extern void func_0B6BB8(int a);
extern void func_019028(int a, int b);

extern int D_003157BC;
extern int D_001EB990;
extern char D_003157CC;

int func_0B6D00(int a, int b)
{
    int result = 0;

    if (func_019068(6) != 0)
        return 0;
    if (func_019098() != 0)
        return 0;
    if (func_0A1B00() != 0)
        return 0;
    if (a == 2 && D_003157BC != 0)
        return 0;
    func_0B6BB8(a);
    if (D_001EB990 == 0) {
        func_019028(6, a);
        result = 1;
        D_003157CC = b;
    }
    return result;
}

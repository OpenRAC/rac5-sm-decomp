/* LEVEL_04:0x0C1C10 -- placement copy of LEVEL_01_0BC400.c: gated one-shot setter: runs helpers, sets a flag byte, returns 1 on success. */
extern int func_01A4E8(int a);
extern int func_01A518(void);
extern int func_0AC540(void);
extern void func_0C1AC8(int a);
extern void func_01A4A8(int a, int b);

extern int D_0034323C;
extern int D_00215F50;
extern char D_0034324C;

int func_0C1C10(int a, int b)
{
    int result = 0;

    if (func_01A4E8(6) != 0)
        return 0;
    if (func_01A518() != 0)
        return 0;
    if (func_0AC540() != 0)
        return 0;
    if (a == 2 && D_0034323C != 0)
        return 0;
    func_0C1AC8(a);
    if (D_00215F50 == 0) {
        func_01A4A8(6, a);
        result = 1;
        D_0034324C = b;
    }
    return result;
}

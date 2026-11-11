/* LEVEL_05:0x0BA9A8 -- placement copy of LEVEL_01_0BC400.c: gated one-shot setter: runs helpers, sets a flag byte, returns 1 on success. */
extern int func_019E00(int a);
extern int func_019E30(void);
extern int func_0A58F0(void);
extern void func_0BA860(int a);
extern void func_019DC0(int a, int b);

extern int D_003148FC;
extern int D_001EBE10;
extern char D_0031490C;

int func_0BA9A8(int a, int b)
{
    int result = 0;

    if (func_019E00(6) != 0)
        return 0;
    if (func_019E30() != 0)
        return 0;
    if (func_0A58F0() != 0)
        return 0;
    if (a == 2 && D_003148FC != 0)
        return 0;
    func_0BA860(a);
    if (D_001EBE10 == 0) {
        func_019DC0(6, a);
        result = 1;
        D_0031490C = b;
    }
    return result;
}

/* LEVEL_15:0x09CA48 -- placement copy of LEVEL_01_0BC400.c: gated one-shot setter: runs helpers, sets a flag byte, returns 1 on success. */
extern int func_016A50(int a);
extern int func_016A80(void);
extern int func_087BF8(void);
extern void func_09C900(int a);
extern void func_016A10(int a, int b);

extern int D_0024027C;
extern int D_00151710;
extern char D_0024028C;

int func_09CA48(int a, int b)
{
    int result = 0;

    if (func_016A50(6) != 0)
        return 0;
    if (func_016A80() != 0)
        return 0;
    if (func_087BF8() != 0)
        return 0;
    if (a == 2 && D_0024027C != 0)
        return 0;
    func_09C900(a);
    if (D_00151710 == 0) {
        func_016A10(6, a);
        result = 1;
        D_0024028C = b;
    }
    return result;
}

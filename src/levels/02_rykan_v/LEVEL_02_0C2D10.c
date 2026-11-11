/* LEVEL_02:0x0C2D10 -- placement copy of LEVEL_01_0BC400.c: gated one-shot setter: runs helpers, sets a flag byte, returns 1 on success. */
extern int func_01B1C8(int a);
extern int func_01B1F8(void);
extern int func_0ADC40(void);
extern void func_0C2BC8(int a);
extern void func_01B188(int a, int b);

extern int D_0033FF3C;
extern int D_00211A50;
extern char D_0033FF4C;

int func_0C2D10(int a, int b)
{
    int result = 0;

    if (func_01B1C8(6) != 0)
        return 0;
    if (func_01B1F8() != 0)
        return 0;
    if (func_0ADC40() != 0)
        return 0;
    if (a == 2 && D_0033FF3C != 0)
        return 0;
    func_0C2BC8(a);
    if (D_00211A50 == 0) {
        func_01B188(6, a);
        result = 1;
        D_0033FF4C = b;
    }
    return result;
}

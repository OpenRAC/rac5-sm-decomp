/* LEVEL_02:0x0ADCB8 -- placement copy of LEVEL_01_0A73A8.c: resets two globals to -1 when value is zero, clears a flag; second function sets a byte when value is one. */
extern int D_0020C128;
extern int D_0020C12C;
extern int D_0020C130;
extern char D_0020C138;

void func_0ADCB8(int value)
{
    if (value == 0) {
        D_0020C128 = -1;
        D_0020C12C = -1;
    }
    D_0020C130 = 0;
}

void func_0ADCE0(int value)
{
    if (value == 1)
        D_0020C138 = (char)value;
}

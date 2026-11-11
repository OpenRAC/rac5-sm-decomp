/* LEVEL_07:0x0A93A8 -- placement copy of LEVEL_01_0A73A8.c: resets two globals to -1 when value is zero, clears a flag; second function sets a byte when value is one. */
extern int D_0020B468;
extern int D_0020B46C;
extern int D_0020B470;
extern char D_0020B478;

void func_0A93A8(int value)
{
    if (value == 0) {
        D_0020B468 = -1;
        D_0020B46C = -1;
    }
    D_0020B470 = 0;
}

void func_0A93D0(int value)
{
    if (value == 1)
        D_0020B478 = (char)value;
}

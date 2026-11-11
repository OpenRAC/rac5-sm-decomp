/* LEVEL_10:0x0A84C0 -- placement copy of LEVEL_01_0A73A8.c: resets two globals to -1 when value is zero, clears a flag; second function sets a byte when value is one. */
extern int D_00200168;
extern int D_0020016C;
extern int D_00200170;
extern char D_00200178;

void func_0A84C0(int value)
{
    if (value == 0) {
        D_00200168 = -1;
        D_0020016C = -1;
    }
    D_00200170 = 0;
}

void func_0A84E8(int value)
{
    if (value == 1)
        D_00200178 = (char)value;
}

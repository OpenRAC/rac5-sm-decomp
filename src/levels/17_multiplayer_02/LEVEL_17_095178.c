/* LEVEL_17:0x095178 -- placement copy of LEVEL_01_0A73A8.c: resets two globals to -1 when value is zero, clears a flag; second function sets a byte when value is one. */
extern int D_00198738;
extern int D_0019873C;
extern int D_00198740;
extern char D_00198748;

void func_095178(int value)
{
    if (value == 0) {
        D_00198738 = -1;
        D_0019873C = -1;
    }
    D_00198740 = 0;
}

void func_0951A0(int value)
{
    if (value == 1)
        D_00198748 = (char)value;
}

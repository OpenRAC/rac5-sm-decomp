/* LEVEL_08:0x0B1CA0 -- placement copy of LEVEL_01_0A73A8.c: resets two globals to -1 when value is zero, clears a flag; second function sets a byte when value is one. */
extern int D_00240028;
extern int D_0024002C;
extern int D_00240030;
extern char D_00240038;

void func_0B1CA0(int value)
{
    if (value == 0) {
        D_00240028 = -1;
        D_0024002C = -1;
    }
    D_00240030 = 0;
}

void func_0B1CC8(int value)
{
    if (value == 1)
        D_00240038 = (char)value;
}

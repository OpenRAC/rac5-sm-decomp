/* LEVEL_20:0x080378 -- placement copy of LEVEL_01_0A73A8.c: resets two globals to -1 when value is zero, clears a flag; second function sets a byte when value is one. */
extern int D_00107818;
extern int D_0010781C;
extern int D_00107820;
extern char D_00107828;

void func_080378(int value)
{
    if (value == 0) {
        D_00107818 = -1;
        D_0010781C = -1;
    }
    D_00107820 = 0;
}

void func_0803A0(int value)
{
    if (value == 1)
        D_00107828 = (char)value;
}

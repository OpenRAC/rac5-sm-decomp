/* LEVEL_06:0x0A1B78 -- placement copy of LEVEL_01_0A73A8.c: resets two globals to -1 when value is zero, clears a flag; second function sets a byte when value is one. */
extern int D_001E6068;
extern int D_001E606C;
extern int D_001E6070;
extern char D_001E6078;

void func_0A1B78(int value)
{
    if (value == 0) {
        D_001E6068 = -1;
        D_001E606C = -1;
    }
    D_001E6070 = 0;
}

void func_0A1BA0(int value)
{
    if (value == 1)
        D_001E6078 = (char)value;
}

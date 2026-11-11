/* LEVEL_19:0x095510 -- placement copy of LEVEL_01_0A73A8.c: resets two globals to -1 when value is zero, clears a flag; second function sets a byte when value is one. */
extern int D_001A62B8;
extern int D_001A62BC;
extern int D_001A62C0;
extern char D_001A62C8;

void func_095510(int value)
{
    if (value == 0) {
        D_001A62B8 = -1;
        D_001A62BC = -1;
    }
    D_001A62C0 = 0;
}

void func_095538(int value)
{
    if (value == 1)
        D_001A62C8 = (char)value;
}

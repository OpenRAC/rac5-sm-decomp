/* LEVEL_04:0x0AC5B8 -- placement copy of LEVEL_01_0A73A8.c: resets two globals to -1 when value is zero, clears a flag; second function sets a byte when value is one. */
extern int D_00210628;
extern int D_0021062C;
extern int D_00210630;
extern char D_00210638;

void func_0AC5B8(int value)
{
    if (value == 0) {
        D_00210628 = -1;
        D_0021062C = -1;
    }
    D_00210630 = 0;
}

void func_0AC5E0(int value)
{
    if (value == 1)
        D_00210638 = (char)value;
}

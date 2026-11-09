/* LEVEL_05:0x0A5968 -- placement copy of LEVEL_01_0A73A8.c: resets two globals to -1 when value is zero, clears a flag; second function sets a byte when value is one. */
extern int D_001E64E8;
extern int D_001E64EC;
extern int D_001E64F0;
extern char D_001E64F8;

void func_0A5968(int value)
{
    if (value == 0) {
        D_001E64E8 = -1;
        D_001E64EC = -1;
    }
    D_001E64F0 = 0;
}

void func_0A5990(int value)
{
    if (value == 1)
        D_001E64F8 = (char)value;
}

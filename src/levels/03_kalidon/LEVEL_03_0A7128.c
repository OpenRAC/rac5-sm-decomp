/* LEVEL_03:0x0A7128 -- placement copy of LEVEL_01_0A73A8.c: resets two globals to -1 when value is zero, clears a flag; second function sets a byte when value is one. */
extern int D_0020F7E8;
extern int D_0020F7EC;
extern int D_0020F7F0;
extern char D_0020F7F8;

void func_0A7128(int value)
{
    if (value == 0) {
        D_0020F7E8 = -1;
        D_0020F7EC = -1;
    }
    D_0020F7F0 = 0;
}

void func_0A7150(int value)
{
    if (value == 1)
        D_0020F7F8 = (char)value;
}

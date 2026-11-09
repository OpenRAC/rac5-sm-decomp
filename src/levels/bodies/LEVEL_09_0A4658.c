/* LEVEL_09:0x0A4658 -- placement copy of LEVEL_01_0A73A8.c: resets two globals to -1 when value is zero, clears a flag; second function sets a byte when value is one. */
extern int D_001E0F68;
extern int D_001E0F6C;
extern int D_001E0F70;
extern char D_001E0F78;

void func_0A4658(int value)
{
    if (value == 0) {
        D_001E0F68 = -1;
        D_001E0F6C = -1;
    }
    D_001E0F70 = 0;
}

void func_0A4680(int value)
{
    if (value == 1)
        D_001E0F78 = (char)value;
}

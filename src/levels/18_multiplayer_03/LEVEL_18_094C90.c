/* LEVEL_18:0x094C90 -- placement copy of LEVEL_01_0A73A8.c: resets two globals to -1 when value is zero, clears a flag; second function sets a byte when value is one. */
extern int D_001A65B8;
extern int D_001A65BC;
extern int D_001A65C0;
extern char D_001A65C8;

void func_094C90(int value)
{
    if (value == 0) {
        D_001A65B8 = -1;
        D_001A65BC = -1;
    }
    D_001A65C0 = 0;
}

void func_094CB8(int value)
{
    if (value == 1)
        D_001A65C8 = (char)value;
}

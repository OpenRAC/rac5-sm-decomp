/* LEVEL_24:0x0A0C20 -- placement copy of LEVEL_01_0A73A8.c: resets two globals to -1 when value is zero, clears a flag; second function sets a byte when value is one. */
extern int D_001C7DE8;
extern int D_001C7DEC;
extern int D_001C7DF0;
extern char D_001C7DF8;

void func_0A0C20(int value)
{
    if (value == 0) {
        D_001C7DE8 = -1;
        D_001C7DEC = -1;
    }
    D_001C7DF0 = 0;
}

void func_0A0C48(int value)
{
    if (value == 1)
        D_001C7DF8 = (char)value;
}

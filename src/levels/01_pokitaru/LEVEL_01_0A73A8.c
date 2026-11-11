/* LEVEL_01:0x0A73A8 -- resets two globals to -1 when value is zero, clears a flag; second function sets a byte when value is one. */
extern int D_001F7168;
extern int D_001F716C;
extern int D_001F7170;
extern char D_001F7178;

void func_0A73A8(int value)
{
    if (value == 0) {
        D_001F7168 = -1;
        D_001F716C = -1;
    }
    D_001F7170 = 0;
}

void func_0A73D0(int value)
{
    if (value == 1)
        D_001F7178 = (char)value;
}

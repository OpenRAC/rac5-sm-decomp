/* LEVEL_21:0x087C70 -- placement copy of LEVEL_01_0A73A8.c: resets two globals to -1 when value is zero, clears a flag; second function sets a byte when value is one. */
extern int D_0014BDE8;
extern int D_0014BDEC;
extern int D_0014BDF0;
extern char D_0014BDF8;

void func_087C70(int value)
{
    if (value == 0) {
        D_0014BDE8 = -1;
        D_0014BDEC = -1;
    }
    D_0014BDF0 = 0;
}

void func_087C98(int value)
{
    if (value == 1)
        D_0014BDF8 = (char)value;
}

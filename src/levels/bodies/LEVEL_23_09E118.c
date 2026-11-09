/* LEVEL_23:0x09E118 -- placement copy of LEVEL_01_0A73A8.c: resets two globals to -1 when value is zero, clears a flag; second function sets a byte when value is one. */
extern int D_001CA568;
extern int D_001CA56C;
extern int D_001CA570;
extern char D_001CA578;

void func_09E118(int value)
{
    if (value == 0) {
        D_001CA568 = -1;
        D_001CA56C = -1;
    }
    D_001CA570 = 0;
}

void func_09E140(int value)
{
    if (value == 1)
        D_001CA578 = (char)value;
}

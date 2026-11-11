/* LEVEL_22:0x0959B8 -- placement copy of LEVEL_01_0A73A8.c: resets two globals to -1 when value is zero, clears a flag; second function sets a byte when value is one. */
extern int D_001564E8;
extern int D_001564EC;
extern int D_001564F0;
extern char D_001564F8;

void func_0959B8(int value)
{
    if (value == 0) {
        D_001564E8 = -1;
        D_001564EC = -1;
    }
    D_001564F0 = 0;
}

void func_0959E0(int value)
{
    if (value == 1)
        D_001564F8 = (char)value;
}

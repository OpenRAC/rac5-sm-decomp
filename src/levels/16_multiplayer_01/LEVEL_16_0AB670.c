/* LEVEL_16:0x0AB670 -- placement copy of LEVEL_01_0BC280.c: returns the global state byte while mode 6 is active, otherwise 0. */
extern unsigned char D_0027698C;
extern int func_018BD8(int value);

int func_0AB670(void)
{
    return func_018BD8(6) ? D_0027698C : 0;
}

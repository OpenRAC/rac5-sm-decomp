/* LEVEL_08:0x0C71A0 -- placement copy of LEVEL_01_0BC280.c: returns the global state byte while mode 6 is active, otherwise 0. */
extern unsigned char D_00377CCC;
extern int func_01B1E0(int value);

int func_0C71A0(void)
{
    return func_01B1E0(6) ? D_00377CCC : 0;
}

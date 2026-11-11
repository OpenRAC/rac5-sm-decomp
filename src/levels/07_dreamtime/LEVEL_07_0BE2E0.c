/* LEVEL_07:0x0BE2E0 -- placement copy of LEVEL_01_0BC280.c: returns the global state byte while mode 6 is active, otherwise 0. */
extern unsigned char D_0033E34C;
extern int func_01AF28(int value);

int func_0BE2E0(void)
{
    return func_01AF28(6) ? D_0033E34C : 0;
}

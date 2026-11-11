/* LEVEL_20:0x095BA0 -- placement copy of LEVEL_01_0BC280.c: returns the global state byte while mode 6 is active, otherwise 0. */
extern unsigned char D_0019A1CC;
extern int func_016990(int value);

int func_095BA0(void)
{
    return func_016990(6) ? D_0019A1CC : 0;
}

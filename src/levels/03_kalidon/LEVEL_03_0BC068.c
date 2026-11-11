/* LEVEL_03:0x0BC068 -- placement copy of LEVEL_01_0BC280.c: returns the global state byte while mode 6 is active, otherwise 0. */
extern unsigned char D_003438CC;
extern int func_01A5D0(int value);

int func_0BC068(void)
{
    return func_01A5D0(6) ? D_003438CC : 0;
}

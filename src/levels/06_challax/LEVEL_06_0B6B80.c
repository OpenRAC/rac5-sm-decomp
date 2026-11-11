/* LEVEL_06:0x0B6B80 -- placement copy of LEVEL_01_0BC280.c: returns the global state byte while mode 6 is active, otherwise 0. */
extern unsigned char D_003157CC;
extern int func_019068(int value);

int func_0B6B80(void)
{
    return func_019068(6) ? D_003157CC : 0;
}

/* LEVEL_22:0x0AA728 -- placement copy of LEVEL_01_0BC280.c: returns the global state byte while mode 6 is active, otherwise 0. */
extern unsigned char D_0027E60C;
extern int func_016E80(int value);

int func_0AA728(void)
{
    return func_016E80(6) ? D_0027E60C : 0;
}

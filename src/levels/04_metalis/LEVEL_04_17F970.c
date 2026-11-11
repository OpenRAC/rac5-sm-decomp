/* LEVEL_04:0x17F970 -- placement copy of LEVEL_01_172478.c: creates the cached handle once: when the global is still -1 it is set from the helper called with the packed id. */
extern int D_002210D0;
extern int D_002B26B0;
extern int func_104038(unsigned int value);

void func_17F970(void)
{
    if (D_002210D0 == -1) {
        D_002210D0 = func_104038((D_002B26B0 << 16) | 0x90003045U);
    }
}

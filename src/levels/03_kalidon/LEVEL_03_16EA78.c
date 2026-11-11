/* LEVEL_03:0x16EA78 -- placement copy of LEVEL_01_172478.c: creates the cached handle once: when the global is still -1 it is set from the helper called with the packed id. */
extern int D_0021FF58;
extern int D_002B2D30;
extern int func_0FB398(unsigned int value);

void func_16EA78(void)
{
    if (D_0021FF58 == -1) {
        D_0021FF58 = func_0FB398((D_002B2D30 << 16) | 0x90003045U);
    }
}

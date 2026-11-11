/* LEVEL_16:0x1515F8 -- placement copy of LEVEL_01_172478.c: creates the cached handle once: when the global is still -1 it is set from the helper called with the packed id. */
extern int D_001BDAE0;
extern int D_0024E330;
extern int func_0E5C10(unsigned int value);

void func_1515F8(void)
{
    if (D_001BDAE0 == -1) {
        D_001BDAE0 = func_0E5C10((D_0024E330 << 16) | 0x90003045U);
    }
}

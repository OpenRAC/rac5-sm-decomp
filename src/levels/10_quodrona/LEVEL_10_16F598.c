/* LEVEL_10:0x16F598 -- placement copy of LEVEL_01_172478.c: creates the cached handle once: when the global is still -1 it is set from the helper called with the packed id. */
extern int D_00210500;
extern int D_002A12B0;
extern int func_0FC440(unsigned int value);

void func_16F598(void)
{
    if (D_00210500 == -1) {
        D_00210500 = func_0FC440((D_002A12B0 << 16) | 0x90003045U);
    }
}

/* LEVEL_18:0x14FD70 -- placement copy of LEVEL_01_172478.c: creates the cached handle once: when the global is still -1 it is set from the helper called with the packed id. */
extern int D_001BEFA0;
extern int D_0024E6B0;
extern int func_0E39D0(unsigned int value);

void func_14FD70(void)
{
    if (D_001BEFA0 == -1) {
        D_001BEFA0 = func_0E39D0((D_0024E6B0 << 16) | 0x90003045U);
    }
}

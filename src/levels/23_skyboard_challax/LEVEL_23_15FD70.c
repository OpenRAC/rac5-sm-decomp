/* LEVEL_23:0x15FD70 -- placement copy of LEVEL_01_172478.c: creates the cached handle once: when the global is still -1 it is set from the helper called with the packed id. */
extern int D_001DAFB8;
extern int D_002692F0;
extern int func_0EF9E8(unsigned int value);

void func_15FD70(void)
{
    if (D_001DAFB8 == -1) {
        D_001DAFB8 = func_0EF9E8((D_002692F0 << 16) | 0x90003045U);
    }
}

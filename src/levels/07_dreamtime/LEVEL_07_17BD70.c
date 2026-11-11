/* LEVEL_07:0x17BD70 -- placement copy of LEVEL_01_172478.c: creates the cached handle once: when the global is still -1 it is set from the helper called with the packed id. */
extern int D_0021BE68;
extern int D_002AD7B0;
extern int func_0FD900(unsigned int value);

void func_17BD70(void)
{
    if (D_0021BE68 == -1) {
        D_0021BE68 = func_0FD900((D_002AD7B0 << 16) | 0x90003045U);
    }
}

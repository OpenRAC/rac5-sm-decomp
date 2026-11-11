/* LEVEL_06:0x1610A8 -- placement copy of LEVEL_01_172478.c: creates the cached handle once: when the global is still -1 it is set from the helper called with the packed id. */
extern int D_001F6450;
extern int D_00284C30;
extern int func_0F5BC0(unsigned int value);

void func_1610A8(void)
{
    if (D_001F6450 == -1) {
        D_001F6450 = func_0F5BC0((D_00284C30 << 16) | 0x90003045U);
    }
}

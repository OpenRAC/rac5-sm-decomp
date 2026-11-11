/* LEVEL_24:0x1581E8 -- placement copy of LEVEL_01_172478.c: creates the cached handle once: when the global is still -1 it is set from the helper called with the packed id. */
extern int D_001D87A8;
extern int D_00263D70;
extern int func_0F4710(unsigned int value);

void func_1581E8(void)
{
    if (D_001D87A8 == -1) {
        D_001D87A8 = func_0F4710((D_00263D70 << 16) | 0x90003045U);
    }
}

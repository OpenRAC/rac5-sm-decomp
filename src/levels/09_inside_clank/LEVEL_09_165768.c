/* LEVEL_09:0x165768 -- placement copy of LEVEL_01_172478.c: creates the cached handle once: when the global is still -1 it is set from the helper called with the packed id. */
extern int D_001F13B0;
extern int D_0027F630;
extern int func_0F89E0(unsigned int value);

void func_165768(void)
{
    if (D_001F13B0 == -1) {
        D_001F13B0 = func_0F89E0((D_0027F630 << 16) | 0x90003045U);
    }
}

/* LEVEL_01:0x172478 -- creates the cached handle once: when the global is still -1 it is set from the helper called with the packed id. */
extern int D_002078B0;
extern int D_00297EB0;
extern int func_0FCB00(unsigned int value);

void func_172478(void)
{
    if (D_002078B0 == -1) {
        D_002078B0 = func_0FCB00((D_00297EB0 << 16) | 0x90003045U);
    }
}

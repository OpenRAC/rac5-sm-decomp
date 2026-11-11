/* LEVEL_05:0x166200 -- placement copy of LEVEL_01_172478.c: creates the cached handle once: when the global is still -1 it is set from the helper called with the packed id. */
extern int D_001F6950;
extern int D_00283D70;
extern int func_0F8C40(unsigned int value);

void func_166200(void)
{
    if (D_001F6950 == -1) {
        D_001F6950 = func_0F8C40((D_00283D70 << 16) | 0x90003045U);
    }
}

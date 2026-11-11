/* LEVEL_02:0x1872A0 -- placement copy of LEVEL_01_172478.c: creates the cached handle once: when the global is still -1 it is set from the helper called with the packed id. */
extern int D_0021CA10;
extern int D_002AF3B0;
extern int func_102CB0(unsigned int value);

void func_1872A0(void)
{
    if (D_0021CA10 == -1) {
        D_0021CA10 = func_102CB0((D_002AF3B0 << 16) | 0x90003045U);
    }
}

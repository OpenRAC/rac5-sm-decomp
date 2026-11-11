/* LEVEL_17:0x14A6D0 -- placement copy of LEVEL_01_172478.c: creates the cached handle once: when the global is still -1 it is set from the helper called with the packed id. */
extern int D_001B10A0;
extern int D_0023F630;
extern int func_0E4B38(unsigned int value);

void func_14A6D0(void)
{
    if (D_001B10A0 == -1) {
        D_001B10A0 = func_0E4B38((D_0023F630 << 16) | 0x90003045U);
    }
}

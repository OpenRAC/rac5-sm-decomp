/* LEVEL_19:0x14E4D0 -- placement copy of LEVEL_01_172478.c: creates the cached handle once: when the global is still -1 it is set from the helper called with the packed id. */
extern int D_001BEC40;
extern int D_0024E4B0;
extern int func_0E42D0(unsigned int value);

void func_14E4D0(void)
{
    if (D_001BEC40 == -1) {
        D_001BEC40 = func_0E42D0((D_0024E4B0 << 16) | 0x90003045U);
    }
}

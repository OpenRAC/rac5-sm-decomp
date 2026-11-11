/* LEVEL_08:0x18E758 -- placement copy of LEVEL_01_172478.c: creates the cached handle once: when the global is still -1 it is set from the helper called with the packed id. */
extern int D_00250C00;
extern int D_002E7130;
extern int func_108548(unsigned int value);

void func_18E758(void)
{
    if (D_00250C00 == -1) {
        D_00250C00 = func_108548((D_002E7130 << 16) | 0x90003045U);
    }
}

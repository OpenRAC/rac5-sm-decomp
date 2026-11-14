/* LEVEL_04:0x1A4D98 -- stores the lookup result for a packed id in a global. */
extern int D_00222014;
extern unsigned int D_002B2650;
extern int func_0E8A88(unsigned int id);

void func_1A4D98(void)
{
    D_00222014 = func_0E8A88((D_002B2650 << 16) | 0xA00070D9U);
}

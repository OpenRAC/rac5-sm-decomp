/* LEVEL_08:0x1B5DD0 -- placement copy of LEVEL_04_1A4D98.c: stores the lookup result for a packed id in a global. */
extern int D_00251DBC;
extern unsigned int D_002E70D0;
extern int func_110E80(unsigned int id);

void func_1B5DD0(void)
{
    D_00251DBC = func_110E80((D_002E70D0 << 16) | 0xA00070D9U);
}

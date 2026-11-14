/* LEVEL_10:0x18C850 -- resolves two hash keys (one built from a global word with fixed high bits, one constant) and stores the results in globals. */
extern unsigned int D_002A1250;
extern unsigned int D_00211474;
extern unsigned int D_00211478;
extern unsigned int func_101FC0(unsigned int key);
extern unsigned int func_127EC8(unsigned int key);

void func_18C850(void)
{
    D_00211474 = func_101FC0((D_002A1250 << 16) | 0xA00070D9u);
    D_00211478 = func_127EC8(0xFF37A10Bu);
}

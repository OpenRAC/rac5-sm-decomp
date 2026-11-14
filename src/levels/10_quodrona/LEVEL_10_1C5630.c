/* LEVEL_10:0x1C5630 -- placement copy of LEVEL_01_1B7DA8.c: caches the keyed lookup 0x5E9BA7E8 in a global and then runs the follow-up step. */
extern int D_00211CA4;
extern int func_127EC8(unsigned int value);
extern void func_076038(void);

void func_1C5630(void)
{
    D_00211CA4 = func_127EC8(0x5E9BA7E8u);
    func_076038();
}

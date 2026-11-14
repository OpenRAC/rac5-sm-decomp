/* LEVEL_03:0x1CCE98 -- placement copy of LEVEL_01_1B7DA8.c: caches the keyed lookup 0x5E9BA7E8 in a global and then runs the follow-up step. */
extern int D_00221E0C;
extern int func_1282D0(unsigned int value);
extern void func_075788(void);

void func_1CCE98(void)
{
    D_00221E0C = func_1282D0(0x5E9BA7E8u);
    func_075788();
}

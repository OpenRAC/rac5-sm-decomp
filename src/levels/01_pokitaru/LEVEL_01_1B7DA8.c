/* LEVEL_01:0x1B7DA8 -- caches the keyed lookup 0x5E9BA7E8 in a global and then runs the follow-up step. */
extern int D_00208E4C;
extern int func_12A068(unsigned int value);
extern void func_075998(void);

void func_1B7DA8(void)
{
    D_00208E4C = func_12A068(0x5E9BA7E8u);
    func_075998();
}

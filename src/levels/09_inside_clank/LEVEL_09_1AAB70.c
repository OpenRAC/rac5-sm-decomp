/* LEVEL_09:0x1AAB70 -- placement copy of LEVEL_01_1B7DA8.c: caches the keyed lookup 0x5E9BA7E8 in a global and then runs the follow-up step. */
extern int D_001F2B54;
extern int func_123000(unsigned int value);
extern void func_0724A0(void);

void func_1AAB70(void)
{
    D_001F2B54 = func_123000(0x5E9BA7E8u);
    func_0724A0();
}

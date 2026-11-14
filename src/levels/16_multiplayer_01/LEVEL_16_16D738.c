/* LEVEL_16:0x16D738 -- caches the keyed lookup 0x90161BFF in a global and then runs the follow-up step. */
extern int D_001BE14C;
extern int func_106E98(unsigned int key);
extern void func_18E0B0(void);

void func_16D738(void)
{
    D_001BE14C = func_106E98(0x90161BFFu);
    func_18E0B0();
}

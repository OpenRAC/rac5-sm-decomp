/* LEVEL_18:0x172430 -- placement copy of LEVEL_16_16D738.c: caches the keyed lookup 0x90161BFF in a global and then runs the follow-up step. */
extern int D_001BF6D4;
extern int func_105B48(unsigned int key);
extern void func_18F550(void);

void func_172430(void)
{
    D_001BF6D4 = func_105B48(0x90161BFFu);
    func_18F550();
}

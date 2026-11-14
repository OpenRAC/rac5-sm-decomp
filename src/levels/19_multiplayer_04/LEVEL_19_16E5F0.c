/* LEVEL_19:0x16E5F0 -- placement copy of LEVEL_16_16D738.c: caches the keyed lookup 0x90161BFF in a global and then runs the follow-up step. */
extern int D_001BF37C;
extern int func_107538(unsigned int key);
extern void func_18D118(void);

void func_16E5F0(void)
{
    D_001BF37C = func_107538(0x90161BFFu);
    func_18D118();
}

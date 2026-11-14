/* LEVEL_17:0x163ED8 -- placement copy of LEVEL_16_16D738.c: caches the keyed lookup 0x90161BFF in a global and then runs the follow-up step. */
extern int D_001B1684;
extern int func_106410(unsigned int key);
extern void func_1816F8(void);

void func_163ED8(void)
{
    D_001B1684 = func_106410(0x90161BFFu);
    func_1816F8();
}

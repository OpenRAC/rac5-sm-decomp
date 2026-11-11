/* LEVEL_06:0x170460 -- placement copy of LEVEL_01_17D238.c: calls a helper, then spins a short counted delay loop. */
extern void func_1703F0(void);

void func_170460(void)
{
    int index;
    func_1703F0();
    for (index = 0; index != 6; index++)
        ;
}

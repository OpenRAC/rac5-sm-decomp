/* LEVEL_19:0x151408 -- placement copy of LEVEL_01_17D238.c: calls a helper, then spins a short counted delay loop. */
extern void func_1513A0(void);

void func_151408(void)
{
    int index;
    func_1513A0();
    for (index = 0; index != 6; index++)
        ;
}

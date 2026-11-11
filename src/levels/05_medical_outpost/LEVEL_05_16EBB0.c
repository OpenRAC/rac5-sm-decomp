/* LEVEL_05:0x16EBB0 -- placement copy of LEVEL_01_17D238.c: calls a helper, then spins a short counted delay loop. */
extern void func_16EB40(void);

void func_16EBB0(void)
{
    int index;
    func_16EB40();
    for (index = 0; index != 6; index++)
        ;
}

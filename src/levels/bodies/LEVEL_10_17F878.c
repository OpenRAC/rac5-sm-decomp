/* LEVEL_10:0x17F878 -- placement copy of LEVEL_01_17D238.c: calls a helper, then spins a short counted delay loop. */
extern void func_17F808(void);

void func_17F878(void)
{
    int index;
    func_17F808();
    for (index = 0; index != 6; index++)
        ;
}

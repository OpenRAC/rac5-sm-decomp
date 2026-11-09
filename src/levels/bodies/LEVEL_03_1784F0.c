/* LEVEL_03:0x1784F0 -- placement copy of LEVEL_01_17D238.c: calls a helper, then spins a short counted delay loop. */
extern void func_178488(void);

void func_1784F0(void)
{
    int index;
    func_178488();
    for (index = 0; index != 6; index++)
        ;
}

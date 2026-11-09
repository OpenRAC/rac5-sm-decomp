/* LEVEL_09:0x16C0B0 -- placement copy of LEVEL_01_17D238.c: calls a helper, then spins a short counted delay loop. */
extern void func_16C048(void);

void func_16C0B0(void)
{
    int index;
    func_16C048();
    for (index = 0; index != 6; index++)
        ;
}

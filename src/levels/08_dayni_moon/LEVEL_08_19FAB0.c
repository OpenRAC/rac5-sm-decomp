/* LEVEL_08:0x19FAB0 -- placement copy of LEVEL_01_17D238.c: calls a helper, then spins a short counted delay loop. */
extern void func_19FA40(void);

void func_19FAB0(void)
{
    int index;
    func_19FA40();
    for (index = 0; index != 6; index++)
        ;
}

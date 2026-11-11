/* LEVEL_24:0x15E5B0 -- placement copy of LEVEL_01_17D238.c: calls a helper, then spins a short counted delay loop. */
extern void func_15E548(void);

void func_15E5B0(void)
{
    int index;
    func_15E548();
    for (index = 0; index != 6; index++)
        ;
}

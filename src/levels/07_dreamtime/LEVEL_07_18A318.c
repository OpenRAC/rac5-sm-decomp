/* LEVEL_07:0x18A318 -- placement copy of LEVEL_01_17D238.c: calls a helper, then spins a short counted delay loop. */
extern void func_18A2A8(void);

void func_18A318(void)
{
    int index;
    func_18A2A8();
    for (index = 0; index != 6; index++)
        ;
}

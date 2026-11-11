/* LEVEL_08:0x195AC8 -- placement copy of LEVEL_01_17D238.c: calls a helper, then spins a short counted delay loop. */
extern void func_195A60(void);

void func_195AC8(void)
{
    int index;
    func_195A60();
    for (index = 0; index != 6; index++)
        ;
}

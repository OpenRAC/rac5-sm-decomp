/* LEVEL_09:0x170CC8 -- placement copy of LEVEL_01_17D238.c: calls a helper, then spins a short counted delay loop. */
extern void func_170C58(void);

void func_170CC8(void)
{
    int index;
    func_170C58();
    for (index = 0; index != 6; index++)
        ;
}

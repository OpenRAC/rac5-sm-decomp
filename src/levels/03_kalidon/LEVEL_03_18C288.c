/* LEVEL_03:0x18C288 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_18C250(int a0, int a1);

void func_18C288(void)
{
    func_18C250(1, 0xFFFF);
}

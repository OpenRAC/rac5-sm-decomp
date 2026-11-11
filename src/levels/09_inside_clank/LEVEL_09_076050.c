/* LEVEL_09:0x076050 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_076018(int a0, int a1);

void func_076050(void)
{
    func_076018(1, 0xFFFF);
}

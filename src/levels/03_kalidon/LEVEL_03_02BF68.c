/* LEVEL_03:0x02BF68 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_02BF30(int a0, int a1);

void func_02BF68(void)
{
    func_02BF30(1, 0xFFFF);
}

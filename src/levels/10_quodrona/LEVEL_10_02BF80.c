/* LEVEL_10:0x02BF80 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_02BF48(int a0, int a1);

void func_02BF80(void)
{
    func_02BF48(1, 0xFFFF);
}

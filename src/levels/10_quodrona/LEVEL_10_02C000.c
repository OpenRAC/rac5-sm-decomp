/* LEVEL_10:0x02C000 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_02BFC8(int a0, int a1);

void func_02C000(void)
{
    func_02BFC8(1, 0xFFFF);
}

/* LEVEL_04:0x02BE18 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_02BDE0(int a0, int a1);

void func_02BE18(void)
{
    func_02BDE0(1, 0xFFFF);
}

/* LEVEL_06:0x170238 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_170200(int a0, int a1);

void func_170238(void)
{
    func_170200(1, 0xFFFF);
}

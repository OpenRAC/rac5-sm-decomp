/* LEVEL_04:0x14FFA0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_14FF68(int a0, int a1);

void func_14FFA0(void)
{
    func_14FF68(1, 0xFFFF);
}

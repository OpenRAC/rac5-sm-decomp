/* LEVEL_04:0x02BC18 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_02B8B8(int a0, int a1);

void func_02BC18(void)
{
    func_02B8B8(1, 0xFFFF);
}

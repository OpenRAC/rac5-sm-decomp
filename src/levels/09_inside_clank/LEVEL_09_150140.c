/* LEVEL_09:0x150140 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_150108(int a0, int a1);

void func_150140(void)
{
    func_150108(1, 0xFFFF);
}

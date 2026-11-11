/* LEVEL_06:0x127F38 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_127F00(int a0, int a1);

void func_127F38(void)
{
    func_127F00(1, 0xFFFF);
}

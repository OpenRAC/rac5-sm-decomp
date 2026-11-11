/* LEVEL_03:0x031FA0 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_031F68(int a0, int a1);

void func_031FA0(void)
{
    func_031F68(1, 0xFFFF);
}

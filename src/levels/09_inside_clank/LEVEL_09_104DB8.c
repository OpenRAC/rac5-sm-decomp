/* LEVEL_09:0x104DB8 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_104D80(int a0, int a1);

void func_104DB8(void)
{
    func_104D80(1, 0xFFFF);
}

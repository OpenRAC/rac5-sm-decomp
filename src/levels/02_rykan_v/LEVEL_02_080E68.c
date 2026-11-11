/* LEVEL_02:0x080E68 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_080DE8(int a0, int a1);

void func_080E68(void)
{
    func_080DE8(1, 0xFFFF);
}

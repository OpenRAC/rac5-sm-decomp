/* LEVEL_04:0x08B638 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_08B600(int a0, int a1);

void func_08B638(void)
{
    func_08B600(1, 0xFFFF);
}

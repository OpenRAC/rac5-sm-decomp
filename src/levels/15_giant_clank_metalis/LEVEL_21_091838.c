/* LEVEL_21:0x091838 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_091800(int a0, int a1);

void func_091838(void)
{
    func_091800(1, 0xFFFF);
}

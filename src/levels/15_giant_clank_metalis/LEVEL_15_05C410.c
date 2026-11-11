/* LEVEL_15:0x05C410 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_05C370(int a0, int a1);

void func_05C410(void)
{
    func_05C370(1, 0xFFFF);
}

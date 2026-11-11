/* LEVEL_04:0x196D48 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_196D10(int a0, int a1);

void func_196D48(void)
{
    func_196D10(1, 0xFFFF);
}

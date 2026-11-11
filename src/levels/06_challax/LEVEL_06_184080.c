/* LEVEL_06:0x184080 -- placement copy of LEVEL_01_000B98.c: calls the module's two-argument setter with slot 1 and the all-ones 16-bit value. */
extern void func_184048(int a0, int a1);

void func_184080(void)
{
    func_184048(1, 0xFFFF);
}
